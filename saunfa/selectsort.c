//
//  main.c
//  selectsort
//
//  Created by xuhuan lu on 2022/5/7.
//

#include <stdio.h>
#define LEN 5

int main(int argc, const char * argv[]) {
    
    int i = 0, j = 0, temp = 0, arr[LEN];
    
    for (i = 0; i < LEN; i++)
        scanf("%d", &arr[i]);
    
    for (i = 1; i < LEN; i++) {
        if (arr[i] < arr[i - 1]) {
            temp = arr[i - 1];
            j = i - 1;
            
            while (j >= 0 && temp < arr[j]) {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = temp;
        }
    }
    
    for (i = 0; i < LEN; i++)
        printf("%d ", arr[i]);
    
    return 0;
}
