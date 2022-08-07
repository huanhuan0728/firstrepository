//
//  main.cpp
//  ptrstr2
//
//  Created by xuhuan lu on 2022/8/7.
//

#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, const char * argv[]) {
    char animal[20] = "bear";
    const char * bird = "wren";
    char *ps;
    
    cout << animal << " and ";
    cout << bird << "\n";
    
    cout << "Enter a kind of animal: ";
    cin >> animal;
    
    ps = animal;
    cout << ps << "!\n";
    cout << "Before using strcpy():\n";
    cout << animal << " at " << (int *) animal << endl;
    cout << ps << " at " << (int *) ps << endl;
    
    ps = new char[strlen(animal) + 1];
    strcpy(ps, animal);
    cout << "After using strcpy(): \n";
    cout << animal << " at " << (int *) ps << endl;
    delete [] ps;
    
    return 0;
}
