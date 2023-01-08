//
//  list.h
//  film3.c
//
//  Created by xuhuan lu on 2023/1/4.
//

#ifndef list_h
#define list_h
#include <stdbool.h>
//特定的程序说明

#define TSIZE       45//储存电影名的数组大小
struct film
{
    char title[TSIZE];
    int rating;
};

//一般定义类型

typedef struct film Item;

typedef struct node
{
    Item item;
    struct node * next;
}Node;

typedef Node *List;

void InitializeList(List * plist);

bool ListIsEmpty(const List *plist);

bool ListIsFull(const List *plist);

unsigned int ListItemCount(const List *plist);

bool AddItem(Item item, List *plist);

void Traverse (const List *plist, void (*pfun)(Item item));

void EmptyTheList(List * plist);

#endif /* list_h */
