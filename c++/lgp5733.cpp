//
//  main.cpp
//  lgp5733
//
//  Created by xuhuan lu on 2022/7/30.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    char s[20];
    
    cin >> s;
    for (int i = 0; i < 20; i++) {
        if(s[i]>='a'&&s[i]<='z')
        printf("%c",s[i]-'a'+'A');
        else
        printf("%c",s[i]);
    }
    
    
    return 0;
}
