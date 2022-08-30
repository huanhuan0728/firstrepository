//
//  main.c
//  films8_30
//
//  Created by xuhuan lu on 2022/8/30.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TSIZE 45    // 储存名片数组的大小

struct film {
    char title [TSIZE];
    int rating;
    struct film * next; // 指向链表中的下一个结构
};

char * s_gets(char * st, int n);

int main(int argc, const char * argv[]) {
    
    struct film * head = NULL;
    struct film * prev = NULL, *current;
    char input[TSIZE];
    
// 收集并储存信息
    puts("Enter first movie title: ");
    while (s_gets(input, TSIZE) != NULL && input[0] != '\0') {
        current = (struct film *) malloc(sizeof(struct film));
        if (head == NULL)
            head = current;
        else
            prev->next = current;
        current->next = NULL;
        strcpy(current->title, input);
        puts("Enter your rating <0-10>: ");
        scanf("%d", &current->rating);
        while (getchar() != '\n')
            continue;
        puts("Enter next movie title (empty line to quit): ");
        prev = current;
    }
    
//  显示电影列表
    if (head == NULL)
        printf("No data entered.");
    else
        printf("Here is the movie list: \n");
    current = head;
    while (current != NULL) {
        printf("Movie: %s Rating: %d\n",
               current->title, current->rating);
        current = current->next;
    }
    
// 完成任务，释放以分配内存
    current = head;
    while (current != NULL) {
        head = current->next;
        free(current);
        current = head;
    }
    
    printf("Bye.\n");
    
    return 0;
}

char *s_gets(char *st, int n) {
    
    char *ret_val;
    char *find;
    
    ret_val = fgets(st, n, stdin);
    if (ret_val) {
        find = strchr(st, '\n');
        if (find)
            *find = '\0';
        else
            while (getchar() != '\n')
                continue;
    }
    
    return  ret_val;
}
