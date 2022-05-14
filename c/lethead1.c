//
//  main.c
//  lethead1
//
//  Created by xuhuan lu on 2022/5/14.
//

#include <stdio.h>
#define NAME "GIGATHINK, INC."
#define ADDRESS "101 Megabuck plaza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40

void starbr(void); //函数原型

int main(int argc, const char * argv[]) {
    
    starbr();
    printf("%s\n", NAME);
    printf("%s\n", ADDRESS);
    printf("%s\n", PLACE);
    starbr();//使用函数
    
    return 0;
}


void starbr(void) {
    int count;
    
    for (count = 1; count <= WIDTH; count++)
        putchar ('*');
}

