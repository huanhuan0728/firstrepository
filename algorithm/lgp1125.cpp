//
//  main.cpp
//  lgp1125
//
//  Created by xuhuan lu on 2022/6/3.
//

#include <iostream>
#include <cstring>

using namespace std;

char str[100];

int main(int argc, const char * argv[]) {
    
    int maxn = 0, minn = 100, len, i, sum[26];
    
    cin >> str;
    
    len = strlen(str);
    
    for (i = 0; i < len; i++) { //遍历输入的字符串
        sum[str[i] - 'a']++;
    }
    
    for (i = 0; i < len; i++) {
        if (sum[i] > maxn)
            maxn = sum[i];
        if (sum[i] < minn)
            minn = sum[i];
    }
    
    const int prime[25]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};//打表
    
    for(int i=0;i<25;i++){
        if(maxn-minn==prime[i]){
            printf("Lucky Word\n%d",maxn-minn);
            return 0;
        }
    }
    printf("No Answer\n0");
    
    return 0;
}
