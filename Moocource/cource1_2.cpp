//
//  main.cpp
//  cource1.2
//
//  Created by xuhuan lu on 2022/7/11.
//

#include <iostream>
using namespace std;
void printN (int N);
void printN2 (int N);

int main(int argc, const char * argv[]) {
    int i;

    cin >> i;
    printN(i);
    printN2(i);
    
    return 0;
}

void printN (int N)
{
    int i;
    for (i = 1; i < N; i++)
        cout << i << " ";
}

void printN2 (int N) {
    if (N) {
        printN2(N);
        cout << N << " ";
    }
}
