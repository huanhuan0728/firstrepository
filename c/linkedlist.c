//
//  main.c
//  linkedlist
//
//  Created by xuhuan lu on 2022/7/13.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * s_gets(char * st, int n);
char input[20];

struct classmate {
    
    int stu_num;
    char name[20];
    struct classmate * next;
    
};

int main(int argc, const char * argv[]) {
    
    struct classmate * prve = NULL, * head = NULL, * current = NULL;
    
    for (int i = 0; i < 10; i++) {
        current = malloc(sizeof(struct classmate)); // 创建一个节点
        if (head == NULL)
            head = current; //  如果为首节点，让头指针指向它
        else
            prve->next = current;   // 后续的节点创建
        current->next = NULL;   //  尾节点
        
        // 内容的输入
        printf("Enter the stu_num:\n");
        scanf("%d", &current->stu_num);
        s_gets(input, 20);
//        strcpy(current->name, input);
        fgets(input, 20, stdin);
        strcpy(current->name, input);
        prve = current;
    }
    
    //  输出链表的内容
    current = head;
    for (int i = 0; i < 10; i++) {
//        current = head;
        printf("student number: %d\nname: %s\n", current->stu_num, current->name);
        current = current->next;
    }
    
    //  释放已分配的内存
    current = head;
    for (int i = 0; i < 10; i++) {
        current = head;
        head = current->next;
        free(current);
    }
    
    return 0;
}

char *s_gets (char * st, int n) {
    char * ret_val;
    char * find;
    
    ret_val = fgets(st, n, stdin);
    if (ret_val) {
        find = strchr(st, '\n');
        if(find)
            *find = '\0';
        else
            while (getchar() != '\n')
                continue;
    }
    
    return ret_val;
}
