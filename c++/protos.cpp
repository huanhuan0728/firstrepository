//
//  main.cpp
//  protos
//
//  Created by xuhuan lu on 2022/8/22.
//

#include <iostream>
void cheers(int);   // prototype: no return value
double cube (double x); // prototype: return a double

int main(int argc, const char * argv[]) {
    using namespace std;
    
    cheers(5);
    cout << "Give me a number: ";
    double side;
    cin >> side;
    double volume = cube(side); // function call
    cout << "A" << side << "-feet cube has a volume of ";
    cout << volume << " cubic feet.\n";
    cheers(cube(2));    // prototype protection at work
    
    return 0;
}

void cheers(int n) {
    using namespace std;
    for (int i = 0; i < n; i++)
        cout << "Cheers! ";
    cout << endl;
}

double cube(double x) {
    return x * x * x;
}

