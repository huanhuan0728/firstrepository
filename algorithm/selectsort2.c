//
//  main.c
//  selectsort2
//
//  Created by xuhuan lu on 2022/5/8.
//

#include <stdio.h>
#define LEN 5

int main(int argc, const char * argv[]) {
    
    int i, j, min, mark = 0, temp, data[LEN] = {0};
    
    for (i = 0; i < LEN; i++)
        scanf("%d ", &data[i]);
    
    for (i = 0; i < LEN; i++) {
        min = data[i];
        for (j = i; j < LEN; j++) {
            if (data[j] <= min) {
                // 标记最小值
                min = data[j];
                mark = j;
            }
        }
        // 交换未排序的第一个数组元素和未排序的元素中最小的元素的位置
        temp = data[mark];
        data[mark] = data[i];
        data[i] = temp;
    }
    
    for (i = 0; i < LEN; i++)
        printf("%d ", data[i]);

    
    return 0;
}
