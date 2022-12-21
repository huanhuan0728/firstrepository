//
//  main.c
//  学生信息管理系统
//
//  Created by xuhuan lu on 2022/12/19.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "function.h"
void showstudent(Item item);
char * s_gets(char * st, int n);

int main(int argc, const char * argv[]) {
    List student;
    Item temp;
    
    //初始化
    InitializeList(&student);
    if(ListIsFull(&student)){
        fprintf(stderr, "No memory is aviliable!");
        exit(1);
    }
    
    //获取用户输入并保存
    puts("Enter student's name:");
    while(s_gets(temp.name, TSIZE) != NULL && temp.name[0] != '\0'){
        puts("Enter his'/her's score:");
        scanf("%d", &temp.score);
        while(getchar() != '\n')
            continue;
        if(AddItem(temp, &student) == false){
            fprintf(stderr, "Problem allocating memory\n");
            break;
        }
        if(ListIsFull(&student)){
            puts("The list is full now.");
            break;
        }
        puts("Now, enter next student's name and score:");
    }
    
    //显示
    if(ListIsEmpty(&student))
        printf("No data entered.");
    else{
        printf("Here is the movies list:\n");
        Traverse(&student, showstudent);
    }
    printf("You entered %d students.\n", ListitemCount(&student));
    
    //清理
    EmptyTheList(&student);
    printf("Bye.");
    
    return 0;
    
    
}

void showstudent(Item item)
{
    printf("name: %s, score: %d\n", item.name, item.score);
}
char * s_gets(char *st, int n)
{
    char *ret_val;
    char *find;
    
    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        find = strchr(st, '\n');
        if (find)
        *find = '\0';
    else
        while (getchar() != '\n')
            continue;
    }
    return ret_val;
}
