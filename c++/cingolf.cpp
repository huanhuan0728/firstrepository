//
//  main.cpp
//  cingolf
//
//  Created by xuhuan lu on 2022/8/8.
//

#include <iostream>
using namespace std;
const int Max = 5;

int main(int argc, const char * argv[]) {
    
// get data
    int golf[Max];
    cout << "Please enter the weights of your fish.\n";
    cout << "You must enter " << Max << "rounds.\n";
    int i;
    for (i = 0; i < Max; i++) {
        cout << "round #" << i + 1 << ": ";
        while (!(cin >> golf[i])) {
            cin.clear();    // reset input
            while (cin.get() != '\n')
                continue;
            cout << "Please enter a number: ";
        }
    }
// calculate average
    double total = 0.0;
    for (i = 0; i < Max; i++)
        total += golf[i];
// report results
    cout << total / Max << " = average scorce "
    << Max << " rounds\n ";
    
    
    return 0;
}
