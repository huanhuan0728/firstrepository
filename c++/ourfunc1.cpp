//
//  main.cpp
//  ourfunc1
//
//  Created by xuhuan lu on 2022/5/13.
//

#include <iostream>
using namespace std; // affect all function definitions in this file
void simon(int);

int main(int argc, const char * argv[]) {
    simon(3);
    cout << "Pick an interger: ";
    int count;
    cin >> count;
    simon(count);
    cout << "Done!" << endl;
    
    return 0;
}

void simon (int n) {
    cout << "simon says touch your toes " << n << "times." << endl;
}
