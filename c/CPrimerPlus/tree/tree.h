//
//  tree.h
//  tree
//
//  Created by xuhuan lu on 2023/1/11.
//

#ifndef tree_h
#define tree_h
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

//根据具体情况重现定义Item
#define SLEN 20
typedef struct item{
    char petname[SLEN];
    char petkind[SLEN];
}Item;

#define  MAXITEMS 10
typedef struct trnode {
    Item Item;
    struct trnode *left;    //指向左子树
    struct trnode *right;   //指向右子树
}Trnode;

typedef struct tree{
    Trnode * root;          //指向根节点的指针
    int size;
}Tree;

// 函数原型
//初始化一棵树
void InitializeTree(Tree * ptree);

//确定树是否为空,是则返回true，否则返回false
bool TreeIsEmpty(const Tree * ptree);

//确定树是否为满,是则返回true，否则返回false
bool TreeIsFull(const Tree * ptree);

//确定树的项数
int TreeItemCount(const Tree *ptree);

//在树中添加一个项
bool AddItem(const Item * pi, Tree * ptree);

//在树中查找一个项
bool InTree(const Item * pi, const Tree * ptree);

//在树中删除一个项
bool DeleteItem(const Item *pi, Tree * ptree);

//把函数应用于树中的每一项
void Traverse(const Tree * ptree, void(*pfun)(Item item));

//删除树中的所有内容
void DeleteAll(Tree * ptree);


#endif /* tree_h */
