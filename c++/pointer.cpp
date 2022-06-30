//
//  main.cpp
//  pointer
//
//  Created by xuhuan lu on 2022/6/30.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    using namespace std;
    int updates = 6;
    int * p_updates;
    p_updates = &updates;
    
    cout << "Values: updates = " << updates;
    cout << ", *p_updates = " << " * pupdates" << endl;
    
    cout << "Address: &updates = " << &updates;
    cout << ", p_updates = " << p_updates << endl;
    
    *p_updates = *p_updates + 1;
    cout << "Now updates = " << updates << endl;
    
    
    return 0;
}
