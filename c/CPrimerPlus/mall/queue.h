//
//  queue.h
//  queue
//
//  Created by xuhuan lu on 2023/1/9.
//

#ifndef queue_h
#define queue_h

#include <stdio.h>
#include <stdbool.h>

//插入Item类型的定义，例如

#define MAXQUEUE 10
typedef struct item{
    long arrive;    //一位顾客加入队列的时间
    int processtime;    //该顾客咨询时花费的时间
    struct item *next;
}Item;

typedef struct queue{
    Item * front;   //  指向队列首项的指针
    Item * rear;    //  指向队列尾项的指针
    int items;      //  队列中的项数
}Queue;

//操作：初始化队列
//前提条件： pq指向一个空队列
//后置条件：队列被初始化为空
void InitializeQueue(Queue *pq);

//操作：检查队列是否已满
bool QueueIsFull(Queue *pq);

//操作：检查队列是否为空
bool QueueIsEmpty(Queue *pq);

//操作：确定队列中的项数
int QueueItemCount(const Queue *pq);

//操作：在队列末尾添加项
bool EnQueue(Item item, Queue *pq);

//操作：在队列的开头删除项
bool DeQueue(Item *pitem, Queue *pq);

//操作：清空队列
void EmptyQueue(Queue *pq);

static void CopyToNode(int item, Item * pn){
    pn->item = item;
}

static void CopyToItem(int * pn, Item *pi){
    *pi = pn->item;
}



#endif /* queue_h */
