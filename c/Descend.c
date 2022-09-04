#include "allinclude.h"  //DO NOT edit this line
void Descend(int &a, int &b, int &c)  // 通过交换，令 a >= b >= c
{   // Add your code here
int arr[3] = {a, b, c};

for (int i = 1; i < 3; i++){
  for (int j = 0; j < 3-i; j++) {
    if (arr[j] < arr[j+1]) {
      int temp = arr[j];
      arr[j] = arr[j + 1];
      arr[j + 1] = temp;
    }
  }
}

a = arr[0];
b = arr[1];
c = arr[2];

}
