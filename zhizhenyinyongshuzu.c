//
//  main.c
//  zhizhenyinyongshuzu
//
//  Created by xuhuan lu on 2022/5/5.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int i, a[5], *p;
    p = a;
    
    printf("Please enter 5 interger numbers:\n");
    for (i = 0; i < 5; i++)
        scanf("%d", &a[i]);
    p = a;
    while (p < a + 5)
        printf("%d", *p++);
    
    printf("\n");
    return 0;
}
