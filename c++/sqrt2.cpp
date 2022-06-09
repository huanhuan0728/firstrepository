//
//  main.cpp
//  sqrt
//
//  Created by xuhuan lu on 2022/6/8.
//

#include <iostream>
#include <cmath>

int main(int argc, const char * argv[]) {
    using namespace std;
    
    double area;
    cout << "Enter the floor area, in square feet, of your home: ";
    cin >> area;
    double side;
    side = sqrt(area);
    cout << "That's the equivalent of a square " << side
    << "feet to the side." << endl;
    cout << "How factsting!" << endl;
    
    return 0;
}
