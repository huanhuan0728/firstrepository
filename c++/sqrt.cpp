//
//  main.cpp
//  sqrt
//
//  Created by xuhuan lu on 2022/5/13.
//

#include <iostream>
#include <cmath>

int main(int argc, const char * argv[]) {
    // insert code here...
    using  namespace std;
    
    double area;
    cout << "Enter the floor area, in square feet, of your home: ";
    cin >> area;
    double side;
    side = sqrt(area);
    cout << " That's the equivalent of a square " << side
    << " feet to side." <<endl;
    cout << "How ascinating!" << endl;
    
    return 0;
}
