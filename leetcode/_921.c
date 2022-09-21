//  1481
int findLeastNumOfUniqueInts(int* arr, int arrSize, int k){
    int a[10] = {0}, d = 0, min_ = 0, min = 0;
    //  统计arr中不同的整数各有多少个
    for(int i = 0; i < arrSize; i++) {
        d = arr[i];
        a[d] = a[d] + 1;
    }

    // 找到第一个不为0的元素
    for(int i = 0; i < arrSize; i++) {
        if (a[i] != 0){
            min = a[i];
            min_ = i;
        }
    }

    for (int i = min_; i < arrSize; i++){
        if (a[i+1] == 0)
            continue;

        if (a[i+1] < a[min_]){
            min = a[i+1];
            min_ = i+1;
        }
    }
    while (k>0){
        k--;
        a[min_]--;
        while (min = 0)
                for (int i = min_; i < arrSize; i++){
                    if (a[i+1] == 0)
                      continue;

                     if (a[i+1] < a[min_]){
                        min = a[i+1];
                        min_ = i+1;
                    }
                }
    }

    // 输出剩余的整数类型数量
    for(int i = 0, d = 0; i < 9; i++){
        if (a[i] != 0)
            d++;
    }

    return d;

}
