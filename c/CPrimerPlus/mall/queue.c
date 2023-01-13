//
//  queue.c
//  queue
//
//  Created by xuhuan lu on 2023/1/3.
//

#include "queue.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

//操作：初始化队列
//前提条件： pq指向一个空队列
//后置条件：队列被初始化为空
void InitializeQueue(Queue *pq){
    pq->front = pq->rear = NULL;
    pq->items = 0;
    
}

//操作：检查队列是否已满
bool QueueIsFull(Queue *pq){
    return pq->items == MAXQUEUE;
}

//操作：检查队列是否为空
bool QueueIsEmpty(Queue *pq){
    return pq->items == 0;
}

//操作：确定队列中的项数
int QueueItemCount(const Queue *pq){
    return pq->items;
}

//操作：在队列末尾添加项
bool EnQueue(Item item, Queue *pq){
    Node *pnew;
    
    if(QueueIsFull(pq))
        return false;
    pnew = (Node *)malloc(sizeof(Node));
    if(pnew == NULL){
        fprintf(stderr, "Unable to allocate memory!\n");
        exit(1);
    }
    CopyToNode(item, pnew);
    pnew->next = NULL;
    if(QueueIsEmpty(pq))
        pq->front = pnew;   //位于队列首端
    else
        pq->rear->next = pnew;  //链接到队伍尾端
    pq->rear = pnew;    //纪录队列尾端的位置
    pq->items++;    //队列项数加一
    
    return true;
}

//操作：在队列的开头删除项
bool DeQueue(Item *pitem, Queue *pq){
    Node * pt;
    
    if(QueueIsEmpty(pq))
        return false;
    CopyToItem(pq->front, pitem);
    pt = pq->front;
    pq->front = pq->front->next;
    free(pt);
    pq->items--;
    if(pq->items == 0)
        pq->rear = NULL;
    
    return true;
}

//操作：清空队列
void EmptyQueue(Queue *pq){
    Item dummy;
    while(!QueueIsEmpty(pq))
        DeQueue(&dummy, pq);
}
