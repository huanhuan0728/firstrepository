//变量名和语句声明
//  main.cpp
//  carrot
//
//  Created by xuhuan lu on 2022/6/8.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    using namespace std;
    
    int carrots;    //declare an interger bariable
    
    carrots = 25;
    cout << "I have ";
    cout << carrots;
    cout << " carrots.";
    cout << endl;
    carrots = carrots - 1;
    cout << "Cruch, cruch. Now I have" << carrots << "carrots." << endl;
    
    
    return 0;
}
