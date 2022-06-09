//
//  main.cpp
//  ourfunc
//
//  Created by xuhuan lu on 2022/6/9.
//

#include <iostream>

void simon (int);   //function prototype for simon()

int main(int argc, const char * argv[]) {
    
    using namespace std;
    
    simon(3);
    cout << "Pick an interger: ";
    int count;
    cin >> count;
    simon(count);
    cout << "Done!" << endl;
    
    
    return 0;
}

void simon(int) {
    using namespace std;
    cout << "1" << endl;
}
