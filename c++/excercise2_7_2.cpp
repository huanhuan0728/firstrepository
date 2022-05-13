//
//  main.cpp
//  excercise2_7_2
//
//  Created by xuhuan lu on 2022/5/13.
//

#include <iostream>
using namespace std;
double change(int n);

int main(int argc, const char * argv[]) {
    
    cout << "Enter longs: " << endl;
    int count;
    cin >> count;
    int m = change(count);
    cout << "m = " << m << endl;
    
    return 0;
}

double change (int n) {
    double m;
    m = n / 200;
    
    return m;
    
}
