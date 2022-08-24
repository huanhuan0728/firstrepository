//
//  main.cpp
//  calling
//
//  Created by xuhuan lu on 2022/8/22.
//

#include <iostream>

void simple();  // function prototype

int main(int argc, const char * argv[]) {
    
    using namespace std;
    cout << "main() will call the simple() function:\n";
    simple();   // function call
    cout << "main() is finished with the simple() function.\n";
    // cin.get();
    
    return 0;
}

void simple() {
    using namespace std;
    cout << "I'm but a simple function.\n";
}
