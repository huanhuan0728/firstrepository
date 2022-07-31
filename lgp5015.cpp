//
//  main.cpp
//  lgp5015
//
//  Created by xuhuan lu on 2022/7/31.
//

#include <iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int main()
{
    char s[10];
    gets(s);
    int n=strlen(s);
    int a=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        a++;
        if(s[i]>='a'&&s[i]<='z')
        a++;
        if(s[i]>='0'&&s[i]<='9')
        a++;
    }
    
    printf("%d",a);
    
    return 0;
}
