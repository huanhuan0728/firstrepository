//
//  main.cpp
//  lgp1914
//
//  Created by xuhuan lu on 2022/7/30.
//

#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s;
    int n, i, j;
    cin >> n;
    cin >> s;
    for(i=0; i<s.size(); i++)
    {
        for(j = 1; j <= n; j++)
        {
            ++s[i];
            if(s[i] > 'z')
            s[i] = 'a';
        }
    }
    cout<<s;
    return 0;
}
