//
//  main.c
//  bubbleSort
//
//  Created by xuhuan lu on 2022/9/14.
//

#include <stdio.h>
#define SIZE 5
void bubblesort(int a[], int n);

int main(int argc, const char * argv[]) {
    int a[SIZE];
    
    // 输入数组
    printf("输入数组：\n");
    for (int i = 0; i < SIZE; i++)
        scanf("%d", &a[i]);
    
    bubblesort(a, SIZE);
    
    // 输出数组
    printf("输出数组：\n");
    for (int i = 0; i < SIZE; i++)
        printf("%d", a[i]);
    
    return 0;
}

void bubblesort (int a[], int n) {
    int i, j, temp;
    int change = 1;
    for (i = n - 1; i > 1 && change; --i) {
        change = 0;
        for (j = 0; j < i; j++) {
            if (a[j] > a[j + 1]){
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                change = 1;
            }
        }
    }
}
