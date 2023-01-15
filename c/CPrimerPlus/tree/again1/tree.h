//
//  tree.h
//  tree
//
//  Created by xuhuan lu on 2023/1/15.
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
    Item item;
    struct trnode *left;    //指向左子树
    struct trnode *right;   //指向右子树
}Trnode;

typedef struct tree{
    Trnode * root;          //指向根节点的指针
    int size;
}Tree;

// 函数原型

/* 操作：        把函数初始化        */
/* 前置条件：     ptree指向一个树    */
/* 后置条件：     树被初始化为空     */
void InitializeTree(Tree * ptree);

/*
操作           确定树是否为空
前置条件        ptree树指向一棵树
后置条件        如果树为空，返回true，否则返回false
*/
bool TreeIsEmpty(const Tree * ptree);

/*
 操作：       确定树是否已满
 前置条件：    ptree指向一棵树
 后置条件：    如果树已满，返回true，否则返回false
 */
bool TreeIsFull(const Tree * ptree);

/*
 操作：      确定树的项数
 前置条件：   ptree指向一棵树
 后置条件：   如果树为空，返回true，否则返回false
 */
int TreeItemCount(const Tree *ptree);

/*
 操作：       在树中添加一个项
 前置条件：    pi是待添加项的地址，ptree指向一个已经初始化的树
 后置条件：    如果可以在树中添加一个项，返回true，否则返回false*/
bool AddItem(const Item * pi, Tree * ptree);

/*
 操作：        在树中查找一个项
 前置条件：     pi指向一个项，ptree指向一个已经初始化的树
 后置条件：     如果查找到这个项，返回true，否则返回false*/
bool InTree(const Item * pi, const Tree * ptree);

/*
 操作：        删除一个项
 前置条件：     pi指向待删除的项，ptree指向一棵初始化的树
 后置条件：     如果成功删除，返回true，否则返回false*/
bool DeleteItem(const Item *pi, Tree * ptree);

/*
 操作：        把函数应用到每一个项上
 前置条件：     ptree指向一棵初始化的树，pfun指向一个函数，该函数接受一个Item类型的参数，并无返回值
 后置条件：     pfun指向的函数为树中的每一项执行一次*/
void Traverse(const Tree * ptree, void(*pfun)(Item item));

/*
 操作：        删除树中的所有内容
 前置条件：     ptree指向一个已初始化的树
 后置条件：     树为空
 */
void DeleteAll(Tree * ptree);


#endif /* tree_h */
