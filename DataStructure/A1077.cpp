//
//  A1077.cpp
//  DataStructure
//
//  Created by vancasola on 2020/1/7.
//  Copyright © 2020 none. All rights reserved.
//  6:51 7:11

#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
using namespace std;
int main()
{
    int n,m=9999999;
    stack<char> st;
    string s[100];
    string ans="";
    cin>>n;
    getchar();
    for(int i=0;i<n;i++)
    {
        getline(cin,s[i]);
        if(s[i].size()<m)m=s[i].size();
    }
    bool f=true;
    char c;
    for(int i=0;i<m;i++)
    {
        c=s[0][s[0].size()-i-1];
        for(int j=0;j<n;j++)
            if(s[j][s[j].size()-i-1]!=c){f=false;break;};
        if(f==true)st.push(c);
        else break;
    }
    if(st.size())
        while(!st.empty()){putchar(st.top());st.pop();}
    else cout<<"nai";
    return 0;
}
