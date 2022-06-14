//
//  main.cpp
//  string
//
//  Created by xuhuan lu on 2022/6/14.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    using namespace std;
    const int Size = 15;
    char name1[Size];
    char name2[Size] = "C++Owboy";
    
    
    cout << "Howdy! I'm " << name2;
    cout << "! Whhat's your name?\n";
    cin >> name1;
    cout << "Well, " << name1 << " , your name has ";
    cout << strlen(name1) << " letters and is stored\n";
    cout << "in an array of " << sizeof(name1) << "bytes.\n";
    cout << "Your initial is " << name1[0] << ".\n";
    name2[3] = '\0';
    cout << "Here are the first 3 characters of my name: ";
    cout << name2 << endl;
    
    return 0;
}
