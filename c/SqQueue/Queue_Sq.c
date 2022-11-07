//
//  Queue_Sq.c
//  Queue
//
//  Created by xuhuan lu on 2022/11/5.
//

#include "Queue_Sq.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

// 构造一个空队列，最大队列长度为size
ElemType InitQueue_Sq(SqQueue *Q, int Size){
    Q->elem = (ElemType *)malloc(sizeof(ElemType)*Size);
    if (Q->elem == NULL)
        return ERROR;
    Q->maxSize = Size;
    Q->front = Q->rear = 0;
    Q->length = 0;    
    return OK;
}

// 入队，在当前队列尾元素之后插入元素e为新队列元素
ElemType EnQueue_Sq(SqQueue *Q, ElemType e){
    if (Q->length == Q->rear)
        return ERROR;
    Q->rear = e;
    Q->rear = (Q->rear+1) % Q->maxSize;
    Q->elem[Q->rear] = e;   //入队
    Q->length++;
    
    return OK;
}

// 出队，若队列不空则删除当前队列Q中头元素，用e返回其值，并返回ok，否则返回error
ElemType DeQueue_Sq(SqQueue *Q, ElemType *e){
    if (!QueueEmpty_Sq(Q)){
        *e = Q->elem[Q->front];
        Q->front = (Q->front + 1) % Q->maxSize;
        return OK;
    }
    else
        return ERROR;
}

// 返回队列中元素的个数
int QueueLength_Sq(SqQueue *Q){
    return Q->length;
}

// 判空
bool QueueEmpty_Sq(SqQueue *Q){
    if (Q->length == 0)
        return true;
    else
        return  false;
}








