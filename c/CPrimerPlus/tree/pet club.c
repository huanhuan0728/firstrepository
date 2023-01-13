//
//  main.c
//  tree
//
//  Created by xuhuan lu on 2023/1/11.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "tree.h"

char menu(void);
void addpet(Tree * pt);
void droppet(Tree * pt);
void showpets(const Tree * pt);
void findpet(const Tree * pt);
void printitem(Item item);
void uppercase(char *str);
char * s_gets(char *st, int n);

int main(int argc, const char * argv[]) {
    
    Tree pets;
    char choice;
    
    InitializeTree(&pets);
    
    while((choice = menu()) != 'q'){
        switch (choice){
            case 'a':   addpet(&pets);
                break;
            case 'l':   showpets(&pets);
                break;
            case 'f':   findpet(&pets);
                break;
            case 'n':   printf("%d pets in club\n", TreeItemCount(&pets));
                break;
            case 'd':    droppet(&pets);
                break;
            default:    puts("Switching error.");
        }
    }
    DeleteAll(&pets);
    puts("Bye.");
    
    return 0;
}


