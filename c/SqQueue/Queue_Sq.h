//
//  Queue_Sq.h
//  Queue
//
//  Created by xuhuan lu on 2022/11/5.
//

#ifndef Queue_Sq_h
#define Queue_Sq_h
#define ElemType int

#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

typedef struct {
    ElemType *elem; //队列基址
    int length;
    int rear;
    int maxSize;
}SqQueue;

bool InitQueue_Sq(SqQueue *Q, int Size);
// 构造一个空队列，最大队列长度为size

bool DestroyQueue_Sq(SqQueue *Q);
// 将队列销毁，使其不复存在

void ClearQueue_Sq(SqQueue *Q);
// 将队列置空

bool QueueEmpty_Sq(SqQueue *Q);
// 若队列Q为空队列，返回true；否则返回false

int QueueLength_Sq(SqQueue *Q);
// 返回队列中元素的个数

bool GetHead_Sq(SqQueue *Q, ElemType *e);
// 若队列不为空，则用e返回Q的队列头元素，并返回OK；否则返回ERROR

void EnQueue_Sq(SqQueue *Q, ElemType e);
// 在当前队列尾元素之后插入元素e为新队列元素

bool DeQueue_Sq(SqQueue *Q, ElemType *e);
// 若队列不空则删除当前队列Q中头元素，用e返回其值，并返回ok，否则返回error



#endif /* Queue_Sq_h */
