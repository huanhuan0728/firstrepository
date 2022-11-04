//
//  main.c
//  List_1_1_3
//
//  Created by xuhuan lu on 2022/11/4.
//

#include <stdio.h>

struct student {
    int number;
    char name[10];
    float score;
    struct student *next;
};


int main(int argc, const char * argv[]) {
    
    struct student stu1, stu2, *stu1p, *stu2p;
    stu1p = &stu1;
    stu1.number = 100;
//    stu1.name = "chen hua";
    stu1.score = 90;
    stu2p = &stu2;
    stu2p->number = 101;
//    stu2p->name = "du yan";
    stu2p->score = 90;
    
    return 0;
}
