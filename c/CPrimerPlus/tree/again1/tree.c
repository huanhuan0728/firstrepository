//
//  tree.c
//  tree
//
//  Created by xuhuan lu on 2023/1/15.
//

#include "tree.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*局部函数类型*/
typedef struct pair{
    Trnode * parent;
    Trnode * child;
}Pair;

/*局部函数的原型*/
static Trnode * MakeNode(const Item * pi);
static bool ToLeft(const Item * i1, const Item * i2);
static bool ToRight(const Item * i1, const Item * i2);
static void AddNode(Trnode * new_node, Trnode * root);
static void InOrder(const Trnode * root, void (*pfun)(Item item));
static Pair SeekItem(const Item * pi, const Tree * ptree);
static void DeleteNode(Trnode **ptr);
static void DeleteAllNodes(Trnode * root);

/* 函数定义*/
void InitializeTree(Tree * ptree){
    ptree->root = NULL;
    ptree->size = 0;
}

bool TreeIsEmpty(const Tree * ptree){
    if(ptree->root == NULL)
        return true;
    else
        return false;
}

bool TreeIsFull(const Tree * ptree){
    if(ptree->size == MAXITEMS)
        return true;
    else
        return  false;
}

int TreeItemCount(const Tree *ptree){
    return ptree->size;
}

bool AddItem(const Item * pi, Tree * ptree){
    Trnode *new_node;
    
    if(TreeIsFull(ptree)){
        fprintf(stderr, "Tree is full.\n");
        return false;   /* 提前返回*/
    }
    if(SeekItem(pi, ptree).child != NULL){
        fprintf(stderr, "Attempted to add duplicate item.\n");
        return  false;  /* 提前返回*/
    }
    new_node = MakeNode(pi);    /* 指向新节点*/
    if(new_node == NULL){
        fprintf(stderr, "Couldn't creat node.\n");
        return false;   /* 提前返回*/
    }
    /* 成功创建了一个新节点*/
    ptree->size++;
    
    if(ptree->root == NULL)                     
        ptree->root = new_node;                
    else
        AddNode(new_node, ptree->root);         
    
    return  true;
}

bool InTree(const Item * pi, const Tree * ptree){
    return (SeekItem(pi, ptree).child == NULL ? false : true);
}

bool DeleteItem(const Item *pi, Tree * ptree){
    Pair look;
    
    look = SeekItem(pi, ptree);
    if(look.child == NULL)
        return false;
    
    if(look.parent == NULL)                       /* 删除根节点*/
        DeleteNode(&ptree->root);
    else if (look.parent->left == look.child)
        DeleteNode(&look.parent->left);
    else
        DeleteNode(&look.parent->right);
    ptree->size--;
    
    return true;
}

void Traverse(const Tree * ptree, void(*pfun)(Item item)){
    if(ptree != NULL)
        InOrder(ptree->root, pfun);
}

void DeleteAll(Tree * ptree){
    if(ptree != NULL)
        DeleteAllNodes(ptree->root);
    ptree->root = NULL;
    ptree->size = 0;
}

/*局部函数的原型*/
static Trnode * MakeNode(const Item * pi){
    Trnode * new_pnode;
    
    new_pnode = (Trnode *) malloc(sizeof(Trnode));
    if(new_pnode != NULL){
        new_pnode->item = * pi;
        new_pnode->left = NULL;
        new_pnode->right = NULL;
    }
    
    return new_pnode;
}

static bool ToLeft(const Item * i1, const Item * i2){
    int comp1;
    if((comp1 = strcmp(i1->petname, i2->petname)) < 0)
        return false;
    else if (comp1 == 0 && (strcmp(i1->petkind, i2->petkind) < 0))
        return true;
    else
        return false;
}

static bool ToRight(const Item * i1, const Item * i2){
    int comp1;
    
    if((comp1 = strcmp(i1->petname, i2->petname) > 0))
        return true;
    else if (comp1 == 0 && (strcmp(i1->petkind, i2->petkind) > 0))
        return true;
    else
        return  false;
}

static void AddNode(Trnode * new_node, Trnode * root){
    
}

static void InOrder(const Trnode * root, void (*pfun)(Item item)){
    if(root != NULL){
        InOrder(root->left, pfun);
        (*pfun)(root->item);
        InOrder(root->right, pfun);
    }
}

static Pair SeekItem(const Item * pi, const Tree * ptree){
    Pair look;
    look.parent = NULL;
    look.child = ptree->root;
    
    if(look.child == NULL)
        return look;                                    /* 提前返回*/
    
    while(look.child != NULL){
        if(ToLeft(pi, &(look.child->item))){
            look.parent = look.child;
            look.child = look.child->left;
        }
        else if (ToRight(pi, &(look.child->item))){
            look.parent = look.child;
            look.child = look.child->right;
        }
        else                                            
            break;                                      
    }
    
    return look;
}

static void DeleteNode(Trnode **ptr){
    Trnode *temp;
    
    if((*ptr)->left == NULL){
        temp = *ptr;
        *ptr = (*ptr)->right;
        free(temp);
    }
    else if ((*ptr)->right == NULL){
        temp = *ptr;
        *ptr = (*ptr)->left;
        free(temp);
    }
    else{       
       
        for(temp = (*ptr)->left; temp->right != NULL; temp = temp->right)
            continue;
        temp->right = (*ptr)->right;
        temp = *ptr;
        *ptr = (*ptr)->left;
        free(temp);
    }
}

static void DeleteAllNodes(Trnode * root){
    Trnode * pright;
    
    if(root != NULL){
        DeleteAllNodes(root->left);
        pright = root->right;
        free(root->left);
        DeleteAllNodes(pright);
    }
}
