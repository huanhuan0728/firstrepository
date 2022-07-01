//
//  main.cpp
//  use_new
//
//  Created by xuhuan lu on 2022/7/1.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    using namespace std;
    int nights = 1001;
    int * pt = new int; // allocate space for an int
    *pt = 1001;
    
    cout << "nights = value = ";
    cout << nights<< ": location " << &nights << endl;
    cout << "int ";
    cout << "value = " << "*pt" << ": loction = " << pt << endl;
    double * pd = new double;
    *pd = 10000001.0;
    
    cout << "double ";
    cout << nights<< *pd <<": loction = "<< pt << endl;
    cout << "location of pointer pd: " << &pd << endl;
    cout << "size of pt = " << sizeof(pt);
    cout << ": size of *pt = " << sizeof(*pt) << endl;
    cout << "size of pd = " << sizeof(pd);
    cout << ": size of *pd = " << sizeof(*pd) << endl;
    

    return 0;
}
