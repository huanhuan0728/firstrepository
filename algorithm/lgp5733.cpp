//
//  main.cpp
//  lgp5733
//
//  Created by xuhuan lu on 2022/5/31.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    string str;
    getline(cin, str);
    for (int i = 0; i < str.size(); i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
    }
    
    cout<< str;
    return 0;
}
