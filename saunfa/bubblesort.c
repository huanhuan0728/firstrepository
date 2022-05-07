//
//  main.c
//  bubblesort
//
//  Created by xuhuan lu on 2022/5/7.
//

#include <stdio.h>
#define LEN 10

int main(int argc, const char * argv[]) {
    int i, arr[LEN];
    
    for (i = 0; i < LEN; i++)
        scanf("%d", &arr[i]);
    
    for (i = 0; i < LEN - 1; i++)
        for (int j = 0; j < LEN - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    
    for (i = 0; i < LEN; i++)
        printf("%d ", arr[i]);

    return 0;
}


