//
//  main.cpp
//  convert
//
//  Created by xuhuan lu on 2022/6/11.
//

#include <iostream>
using namespace std;
int stonetolb (int sts);

int main(int argc, const char * argv[]) {
    int stone;
    
    cout << "Enter the weight in stone: ";
    cin >> stone;
    int pounds = stonetolb(stone);
    cout << stone << "stone = ";
    cout << pounds << "pounds." << endl;
    
    return 0;
}

int stonetolb (int sts) {
    return 14 * sts;
}
