//
//  main.cpp
//  numstr
//
//  Created by xuhuan lu on 2022/6/18.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    using namespace std;
    cout << "What year was your house built?\n";
    int year;
    cin >> year;
    cin.get();
    cout << "what is its street address?\n";
    char address[80];
    cin.getline(address, 80);
    cout << "Year built: " << year << endl;
    cout << "Address: " << address << endl;
    cout << "Done!\n";
    
    
    return 0;
}
