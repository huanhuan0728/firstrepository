//
//  main.cpp
//  instr1
//
//  Created by xuhuan lu on 2022/6/16.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];
    
    cout << "Enter your name:\n ";
    cin >> name;
    cout << "Enter your favorite dessert:\n";
    cin >> dessert;
    cout << "I have some delicious " << dessert;
    cout << "for you " << name << ".\n";
    
    return 0;
}
