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
    return OK;
}

// 入队，在当前队列尾元素之后插入元素e为新队列元素
ElemType EnQueue_Sq(SqQueue *Q, ElemType e){
    if (Q->rear == Q->maxSize)
        return ERROR;
    else{
        Q->elem[Q->rear] = e;   //入队
        Q->rear = (Q->rear+1) % Q->maxSize;
        Q->length++;
        
        return OK;
    }
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
    if (Q->rear == 0)
        return true;
    else
        return  false;
}

// 若队列不为空，则用e返回Q的队列头元素，并返回OK；否则返回ERROR
ElemType GetHead_Sq(SqQueue *Q, ElemType *e){
    if (QueueEmpty_Sq(Q))
        return ERROR;
    else{
        *e = Q->elem[Q->front];
        return OK;
    }
    
}

// 将队列销毁，使其不复存在
ElemType DestroyQueue_Sq(SqQueue *Q){
    Q->front = 0;
    while (Q->elem[Q->front]){
        free(&Q->elem[Q->front]);
        Q->front++;
    }
    
    return OK;
}

// 打印这个队列
void PrintfQueue_Sq(SqQueue *Q){
    for (int count = 0; count <= Q->rear; count++){
        printf("%d ", Q->elem[count]);
    }
}










