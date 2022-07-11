//
//  main.cpp
//  clock
//
//  Created by xuhuan lu on 2022/7/11.
//

#include <iostream>
#include <time.h>

using namespace std;

clock_t start, stop;    // 这clock_t是clock()函数的返回值变量类型
double duration;    // 记录函数允许时间，以秒为单位

int main(int argc, const char * argv[]) {
    start = clock();
    cout << "test" << endl; // myfunction
    stop = clock();
    duration = (stop - start) / CLK_TCK;
    
    return 0;
}
