//
//  main.cpp
//  express
//
//  Created by xuhuan lu on 2022/7/19.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int x;
    
    cout << "The expression x = 100 has the value ";
    cout << (x = 100) << endl;
    cout << " Now x = " << x << endl;
    cout << "The expression x > 3 has the value ";
    cout << (x > 3) << endl;
    cout << "The expression x < 3 has the value ";
    cout << (x < 3) << endl;
    cout.setf(ios_base::boolalpha);
    cout << "The expression x < 3 has the value ";
    cout << (x < 3) << endl;
    cout << "The expression x > 3 has the value ";
    cout << (x > 3) << endl;
    
    return 0;
}
