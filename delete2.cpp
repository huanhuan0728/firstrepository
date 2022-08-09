//
//  main.cpp
//  delete
//
//  Created by xuhuan lu on 2022/8/9.
//

#include <iostream>
using namespace std;
char * getname(void);

int main(int argc, const char * argv[]) {
    char * name;
    
    name = getname();
    cout << name << " at " << (int *) name << "\n";
    delete [] name;
    
    name = getname();
    cout << name << " at " << (int *) name << "\n";
    delete [] name;
    
    return 0;
}

char * getname(void) {
    char temp[80];
    cout << "Enter last name: ";
    cin >> temp;
    char * pn = new char[strlen(temp) + 1];
    strcpy(pn, temp);
    
    return  pn;
}
