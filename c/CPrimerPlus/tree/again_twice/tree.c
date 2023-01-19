//
//  tree.c
//  tree_again3
//
//  Created by xuhuan lu on 2023/1/18.
//

#include "tree.h"

void InitializeTree(Tree * ptree){
    ptree->size = 0;
    ptree->root = NULL;
}

bool TreeIsEmpty(const Tree * ptree){
//    if(ptree->size == 0)
    if(ptree->root == NULL)
        return true;
    else
        return false;
}

bool TreeIsFull(const Tree * ptree){
    if(ptree->size == MAXITEMS)
        return true;
    else
        return false;
}

int TreeItemCount(const Tree *ptree){
    return ptree->size;
}

bool AddItem(const Item * pi, Tree * ptree){
    
}
