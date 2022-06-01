//
//  main.cpp
//  lgp1914
//
//  Created by xuhuan lu on 2022/6/1.
//

#include <iostream>
using namespace std;


int main(int argc, const char * argv[]) {
    
    int num;
    string key;
    
    cin >> num;
    cin >> key;
    
    for (int i = 0; key[i] != '\0'; i++)
        key[i] = ((key[i] - 96 + num) % 26) + 96;
    
    cout << key;
    
    
    
    return 0;
}
