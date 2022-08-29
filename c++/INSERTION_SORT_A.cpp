//
//  main.cpp
//  INSERTION_SORT_A
//
//  Created by xuhuan lu on 2022/8/29.
//

#include <iostream>

const int SIZE = 6;


int main(int argc, const char * argv[]) {
    using namespace std;
    
    int arr[SIZE] = {5, 2, 4, 6, 1, 2}, key, i, j;
    
    for (j = 1; j <= SIZE; j++) {
        key = arr[j];
        i = j - 1;
        while (i >= 0 && arr[i] > key) {
            arr[i + 1] = arr[i];
            i = i - 1;
        }
        arr[i + 1] = key;
    }
    
    for (i = 0; i <= SIZE; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}
