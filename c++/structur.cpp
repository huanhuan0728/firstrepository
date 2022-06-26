//
//  main.cpp
//  structur
//
//  Created by xuhuan lu on 2022/6/26.
//

#include <iostream>

struct inflatable
{
    char name[20];
    float volume;
    double price;
};

int main(int argc, const char * argv[]) {
    
    using namespace std;
    
    inflatable guest =
    {
        "Glorious Gloria",
        1.99,
        29.99
    };
    
    inflatable pal =
    {
        "Audacious Arthur",
        3.12,
        32.99
    };
    
    cout << "Expand your guest list with " << guest.name;
    cout << " and " << pal.name << "!\n";
    
    cout << "You can have both for $ ";
    cout << guest.price + pal.price << "!\n";
    
    return 0;
}
