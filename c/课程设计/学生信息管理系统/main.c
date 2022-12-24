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
void menu(void);
void Add(void);
void Delete(List *plist);
void Search(List *plist);
void Updet(List *plist);
void show(void);
List student;
//Item temp;

int main(int argc, const char * argv[]) {
//    List student;
//    Item temp;
    
    //初始化
    InitializeList(&student);
    if(ListIsFull(&student)){
        fprintf(stderr, "No memory is aviliable!");
        exit(1);
    }
    menu();
    
    //清理
    EmptyTheList(&student);
    printf("Bye.\n");
    
    return 0;
    
    
}

void showstudent(Item item)
{
    printf("name: %s, score: %d, Student Number: %d\n", item.name, item.score, item.num);
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

void menu(void){
    puts("\n\n");
    printf("\t\t\t----Student information management system----\n");
    printf("\t\t\t--- (1)Quit              (2)AddStudent   ----\n");
    printf("\t\t\t--- (3)DeleteStudent     (4)Updata       ----\n");
    printf("\t\t\t--- (5)ShowStudents      (6)serchStudent ----\n");
    printf("\t\t\t---------------------------------------------\n");
    printf("choose what you want:\n");
    int n;
    scanf("%d", &n);
    while(getchar() != '\n')
        continue;
    
        if(n<=6&&n>=1){
            switch(n){
                case 1:
                    break;
                case 2:
                    Add();
                    break;
                case 3:
                    Delete(&student);
                    break;
                case 4:
                    Updet(&student);
                    break;
                case 5:
                    show();
                    break;
                case 6:
                    Search(&student);
                    break;
            }
        }
}

void Add(void){
    //获取用户输入并保存
    Item temp;
    puts("Enter student's name:");
    while(s_gets(temp.name, TSIZE) != NULL && temp.name[0] != '\0'){
        puts("Enter his'/her's score:");
        scanf("%d", &temp.score);
        puts("Enter his'/her number:");
        scanf("%d", &temp.num);
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
        puts("Now, enter next student's name and score:(empty line to quit)");
    }
    puts("OK.");
    menu();
}

void Delete(List *plist){
    
    if(ListIsEmpty(&student)){
        puts("No memory to be deleted.");
        return;
    }
    
    puts("Enter the StudentNumber you want to delete:");
    int numdel;
    scanf("%d", &numdel);
    
    Node *pnode;
    Node *prev = *plist;    //保存pnode的上一个节点位置
    pnode = prev->next;
    while(pnode && pnode->item.num != numdel && prev->item.num != numdel){
        prev = prev->next;
        pnode = pnode->next;
    }
    if(!pnode)  //如果链表里没有这个人
        puts("No such person.");
    else if(prev->item.num == numdel)   //链表头节点是要找的人
        plist = NULL;
    else
        prev->next = pnode->next;
    puts("Done.");
    menu();
    
}

void Search(List *plist){
    
    if(ListIsEmpty(plist)){
        puts("No memory to avilable.");
        return;
    }

    int num;
    Node *pnode = *plist;
    
    //找人
    puts("Enter his\\her num:");
    scanf("%d",&num);
    while(getchar() != '\n')
        continue;
    
    while(pnode && pnode->item.num != num){
        pnode = pnode->next;
    }
    if(pnode){
        showstudent(pnode->item);
        puts("Done.");
    }
    else
        puts("No such person.");
    
    menu();
}

void Updet(List *plist){
    if(ListIsEmpty(plist)){
        puts("No memory to avilable;");
        return;
    }

    Item temp;
    int num;
    Node *pnode = *plist;

    puts("Whose information you want to change, enter his\\her num:");
    scanf("%d",&num);
    while(getchar() != '\n')
        continue;
    
    //找人
    while(pnode && pnode->item.num != num){
        pnode = pnode->next;
    }    if(pnode){
        puts("Now, this is his\\her information.");
        showstudent(pnode->item);
    }
    else{
        puts("No such person.");
        menu();
        return;
    }
    
    //开始输入这个人的新信息
    puts("Now, enter student's name:");
    while(s_gets(temp.name, TSIZE) != NULL && temp.name[0] != '\0'){
        puts("Enter his'/her's score:");
        scanf("%d", &temp.score);
        puts("Enter his'/her number:");
        scanf("%d", &temp.num);
        while(getchar() != '\n')
            continue;
        pnode->item = temp;

    }
    puts("Done. This is the new.");
    showstudent(pnode->item);
    
    menu();
        
    }
    


void show(void){
    //显示
    if(ListIsEmpty(&student))
        printf("No data entered.");
    else{
        printf("Here is the students list:\n");
        Traverse(&student, showstudent);
    }
    printf("You entered %d students.\n", ListitemCount(&student));
    
    menu();
    
    return;
}
