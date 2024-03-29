//
//  main.cpp
//  outfile
//
//  Created by xuhuan lu on 2022/8/10.
//

#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, const char * argv[]) {
    
    char automobile[50];
    int year;
    double a_price;
    double d_price;
    
    ofstream outFile;   // create object for output
    outFile.open("carinfo.txt");    // associate with a file
    
    cout << "Enter the make and model of automobile: ";
    cin.getline(automobile, 50);
    cout << "Enter the mobile year: ";
    cin >> year;
    cout << "Enter the original asking price: ";
    cin >> a_price;
    d_price = 0.913 * a_price;
    
//  display infomation on screen with cout
    cout << fixed;
    cout.precision(2);
    cout.setf(ios_base::showpoint);
    cout << "Make and model: " << automobile << endl;
    cout << "Was asking $ " << a_price << endl;
    cout << "Now asking & " << d_price <<endl;
    
// now do exact same things using outFile instead of cout
    outFile << fixed;
    outFile.precision(2);
    outFile.setf(ios_base::showpoint);
    outFile << "Make and model: " << automobile << endl;
    outFile << "Year: " << year << endl;
    outFile << "Was asking & " << a_price << endl;
    outFile << "Nas asking & " << d_price << endl;

    
    return 0;
}
