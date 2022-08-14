//
//  main.cpp
//  sumafile
//
//  Created by xuhuan lu on 2022/8/14.
//

#include <iostream>
#include <fstream>  // file I/O support
#include <cstdlib>  // sypport for exit

const int SIZE = 60;

int main(int argc, const char * argv[]) {
    
    using namespace std;
    char filename[SIZE];
    ifstream inFile;    // object for handing file input
    cout << "Enter the file of the data file";
    cin.getline(filename, SIZE);
    if (!inFile.is_open())
    {
        cout << "Could not open the file.";
        cout << "Programe terminating.\n";
        exit(EXIT_FAILURE);
    }
    double value;
    double sum = 0.0;
    int count = 0;
    
    inFile >> value;
    while (inFile.good()) {
        ++count;            // one more item read
        sum += value;       // calculate running total
        inFile >> value;    // get next value
    }
    if (inFile.eof())
        cout << "End of file reached.\n";
    else if (inFile.fail())
        cout << "input terminated by data mismatch.\n";
    else
        cout << "Input terminated for unknown reason.\n";
    if (count == 0)
        cout << "No data processed.\n";
    else
    {
        cout << "Items read: " << count << endl;
        cout << "Sum: " << sum << endl;
        cout << "Average: " << sum / count << endl;
    }
    inFile.close();
    
    
    return 0;
}
