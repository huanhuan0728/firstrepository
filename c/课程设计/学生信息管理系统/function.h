//
//  function.h
//  学生信息管理系统
//
//  Created by xuhuan lu on 2022/12/19.
//

#ifndef function_h
#define function_h

#include <stdio.h>
#include <stdbool.h>
#define TSIZE   45
struct student{
    char name[TSIZE];
    int score;
};

//一般类型定义

typedef struct student Item;

typedef struct node{
    Item item;
    struct node * next;
} Node;

typedef Node * List;

//初始化链表为空
void InitializeList(List * plist);

//如果链表为空返回true，否则false
bool ListIsEmpty(const List * plist);

//如果链表已满，返回true
bool ListIsFull(const List *plist);

//返回结点的数目
unsigned int ListitemCount(const List *plist);

//创建储存项的节点，并将其添加至plist指向的链表的末尾
bool AddItem(Item item, List *plist);

//访问每个节点并执行pfun指向的函数
void Traverse(const List * plist, void(*pfun)(Item item));

//释放由malloc分配的内存
void EmptyTheList(List *plist);

//局部函数定义
//把一个项拷贝到一个节点当中
static void CopyToNode(Item item, Node * Pnode);






#endif /* function_h */
