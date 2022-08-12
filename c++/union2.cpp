//
//  main.cpp
//  union
//
//  Created by xuhuan lu on 2022/7/26.
//

#include <iostream>
using namespace std;

struct widget {
  char brand[20];
  int type;
  union id {
    long id_num;
    char id_char[20];
  }id_val;
};

int main(int argc, const char * argv[]) {
    
    widget price;
    price.type = 1;
    
    if ((price.type) == 1)
      cin >> price.id_val.id_num;
    else
      cin >> price.id_val.id_char;
    
    return 0;
}
