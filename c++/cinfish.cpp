//
//  main.cpp
//  cinfish
//
//  Created by xuhuan lu on 2022/8/8.
//

#include <iostream>
using namespace std;
const int Max = 5;

int main(int argc, const char * argv[]) {
    
// get data
    double fish[Max];
    cout << "Please enter the weights of your fish.\n";
    cout << "You may enter up to " << Max
    << " fish <q to terminate>.\n";
    cout << "fish #1: ";
    int i = 0;
    while (i < Max && cin >> fish[i]) {
        if (++i < Max)
            cout << "fish #" << i + 1 << ":";
    }
// calcuate average
    double total = 0.0;
    for (int j = 0; j < i; j++)
        total += fish[j];
// report results
    if (i == 0)
        cout << "No fish.\n";
    else
        cout << total / i << " = average weight of "
        << i << "fish\n";
    cout << "Done.\n";
    
    
    return 0;
}
