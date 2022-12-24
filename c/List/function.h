//
//  function.h
//  List
//
//  Created by xuhuan lu on 2022/12/24.
//

#ifndef function_h
#define function_h

#include <stdio.h>
#include <stdbool.h>
#include <stdbool.h>

#define TSIZE   45
struct student{
    int data;
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

//销毁单链表L
void DestroyList(List * plist);

//将链表重置为空链表
void ClearList(List *plist);

//链表为空表时返回true，否则返回false
bool ListIsEmpty(const List *plist);

//求表长
unsigned int ListitemCount(const List *plist);

//查找数据域第一个为e的元素，返回节点的地址，否则返回NULL
Node * search_e(const List *plist, int e);

//返回p节点的直接后继节点的指针，若p节点为尾指针则返回NULL
Node * NextElem(const List *plist);

//构造元素e的结点，返回指向该结点的指针
Node * MakeNode_e(int e);

//在结点p之后插入结点q
void InsertAfter(Node *p, Node *q);

//删除p结点之后直接后继结点，用e返回结点值，若p为空或指向尾结点则操作失败
void DeleteAfter(Node *p, int *e);

//访问每个节点并执行 pfun指向的函数
void Traverse (const List *plist, void (*pfun)(Item item));



#endif /* function_h */
