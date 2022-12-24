//
//  function.c
//  List
//
//  Created by xuhuan lu on 2022/12/24.
//

#include "function.h"
#include <stdio.h>
#include <stdlib.h>

void InitializeList(List * plist){
    *plist = NULL;
    puts("Done.");
}

//销毁单链表L
void DestroyList(List * plist){
    Node *psave;
    
    while(*plist != NULL){
        psave = (*plist)->next; //保存下个节点位置
        free(plist);
        *plist = psave; //前进至下个节点
    }
    puts("Done.");
}

//将链表重置为空链表
void ClearList(List *plist){
    Node *p, *q;
    p = *plist;
    while(p != NULL){
        q = p->next;
        free(p);
        p = q;
    }
    
    puts("Done.");

}

//如果链表为空返回true，否则false
bool ListIsEmpty(const List * plist){
    if(*plist == NULL)
        return true;
    else
        return false;
}

//求表长
unsigned int ListitemCount(const List *plist){
    unsigned int count = 0;
    Node * pnode = *plist;
    
    while (pnode != NULL){
        count++;
        pnode = pnode->next;
    }
    
    return count;
}

//查找数据域第一个为e的元素，返回节点的地址，否则返回null
Node * search_e(const List *plist, int e){
    Node * pnode;
    pnode = *plist;
    while(pnode->item.data != e && pnode != NULL)
        pnode = pnode->next;
    if(pnode)   //如果pnode在退出while语句不为空则代表找到了
        return pnode;
    else
        return NULL;
        
}

//返回p节点的直接后继节点的指针，若p节点为尾指针则返回NULL
Node * NextElem(const List *plist){
    Node *pnode;
    pnode = *plist;
    pnode = pnode->next;
    if(pnode->next == NULL)
        return NULL;
    else
        return pnode;
}

//构造元素e的结点，返回指向该结点的指针
Node * MakeNode_e(int e){
    
    Node *pnode;
    List plist;
    InitializeList(&plist);
    if(ListIsEmpty(&plist))
        exit(1);
    pnode = plist;
    pnode->item.data = e;
    
    return pnode;
    
}

//在结点p之后插入结点q
void InsertAfter(Node *p, Node *q){
    p->next = q;
}

////删除p结点之后直接后继结点，用e返回结点值，若p为空或指向尾结点则操作失败
void DeleteAfter(Node *p, int *e){
    if(p->next == NULL && p == NULL)
        exit(2);
    
    Node *after;
    
    after = p->next->next;
    *e = p->next->item.data;
    p->next = after;
    
}

//访问每个节点并执行 pfun指向的函数
void Traverse (const List *plist, void (*pfun)(Item item))
{
    Node * pnode = *plist;//设置链表的开始
    
    while (pnode != NULL)
    {
        (*pfun)(pnode->item);//把函数应用于链表中的项
        pnode = pnode->next;
    }
}
