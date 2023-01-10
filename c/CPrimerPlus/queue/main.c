//
//  main.c
//  queue
//
//  Created by xuhuan lu on 2023/1/3.
//

#include <stdio.h>
#include "queue.h"

int main(int argc, const char * argv[]) {
    Queue line;
    Item temp;
    char ch;
    
    InitializeQueue(&line);
    puts("testinng the queue interface. Type a to add a value,");
    puts("type d to delete a value, and type q to quit.");
    while ((ch = getchar()) != 'q'){
        if(ch != 'a' && ch != 'd')  //忽略其他输出
            continue;
        if(ch == 'a'){
            printf("Integer to add: ");
            scanf("%d", &temp);
            if(!QueueIsFull(&line)){
                printf("Printing %d into queue\n", temp);
                EnQueue(temp, &line);
            }
            else
                puts("Queue is full!");
        }
        else{
            if(QueueIsEmpty(&line))
                puts("Noting to delete.");
            else{
                DeQueue(&temp, &line);
                printf("Removing %d from queue.\n", temp);
            }
        }
        
        printf("%d item in queue\n", QueueItemCount(&line));
        puts("Type a to add, d to delete, q to quit:");
    }
    
    EmptyQueue(&line);
    puts("Bye.");
    
    return 0;
}
