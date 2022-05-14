//把字符串看作指针
//  main.c
//  strptr
//
//  Created by xuhuan lu on 2022/5/14.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    //*"Space farers"指向字符串的首字符
    printf("%s, %p, %c\n", "We", "are", *"Space farers");
    
    return 0;
}
