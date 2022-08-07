//
//  main.cpp
//  enum
//
//  Created by xuhuan lu on 2022/8/7.
//

#include <iostream>
using namespace std;

enum {red, orange, yellow, green, blue, violet, indigo};

int main(int argc, const char * argv[]) {
    cout << "Enter color code (0-6): ";
    int code;
    cin >> code;
    while (code >= red && code <= indigo) {
        switch (code) {
            case red:   cout << "Her lips was red.\n";
                break;
            case orange: cout << "Her lips was orange.\n";
                break;
            case yellow: cout << "Her lips was yellow.\n";
                break;
            case green: cout << "Her lips was green.\n";
                break;
            case blue: cout << "Her lips was blue.\n";
                break;
            case violet: cout << "Her lips was violet.\n";
                break;
            case indigo: cout << "Her lips was indigo.\n";
                break;
        }
        cout << "Enter color code (0-6): ";
        cin >> code;
    }
    
    cout << "bye\n";
    
    return 0;
}
