//
//  main.cpp
//  addpntrs
//
//  Created by xuhuan lu on 2022/7/2.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    using namespace std;
    double wages[3] = {1000.0, 2000.0, 3000.0};
    short stacks[3] = {3, 2, 1};
    
    // here are two ways to get the adress of an array
    double *pw = wages;
    short *ps = &stacks[0];
    // With array element
    cout << "pw = " << pw << ", *pw = " << *pw << endl;
    pw = pw + 1;
    cout << "add 1 to the pw pointer:\n";
    cout << "pw = " << pw <<", *pw = " << *pw << endl;
    cout << "ps =" << ps << "*ps = " << * ps << endl;
    ps = ps + 1;
    cout << "add 1 to the ps pointer" << ".\n";
    cout << "ps = " << ps << ", *ps = " << * ps << "\n\n";
    
    cout << "access two elements with array notation\n";
    cout << "stacks[0] = " << stacks[0]
    << ", stacks[1] = " << stacks[1] <<endl;
    cout << "access tow elements with pointer notation\n";
    cout << "* stacks = " << * stacks << ", * (stacks + 1) = " << * (stacks + 1) << endl;
    
    cout << sizeof(wages) << " = size of wages array\n";
    cout << sizeof(pw) << " = size of pw pointer\n";
    
     return 0;
}
