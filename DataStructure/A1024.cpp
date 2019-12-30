//
//  A1024.cpp
//  DataStructure
//
//  Created by vancasola on 2019/12/30.
//  Copyright © 2019 none. All rights reserved.
//  7:46 8:24

#include <stdio.h>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <stack>
using namespace std;
bool judge(string &s)
{
    if(s.size()==1)return true;
    for(int i=0;i<s.size()/2;i++)
        if(s[i]!=s[s.size()-i-1])return false;
    return true;
}
string add(string& a, string& b)
{
    string ans;
    stack<char> s;
    string c;
    if(a.size()<b.size())
        c=a;a=b;b=c;
    int t,r=0;
    int i,j;
    for( i=a.size()-1,j=b.size()-1;i>=0 && j>=0;i--,j--)
    {
        t=r+a[i]+b[j]-2*'0';
        s.push(t%10+'0');
        r=t/10;
    }
    if(a.size()>b.size())
    {
        t=r+a[i]-'0';
        s.push(t%10+'0');
        r=t/10;
        while(i>0)
        {
            t=r+a[i]+b[j]-2*'0';
            s.push(a[i--]);
            r=t/10;
        }
    }
    if(r)s.push(r+'0');
    while(!s.empty())
    {
        ans+=s.top();
        s.pop();
    }
    return ans;
}
int main()
{
    string s,s1;
    int step,a,b;
    cin>>s>>step;
    for(int i=0;i<step;i++)
    {
        if(judge(s))
        {
            cout<<s<<endl<<i;
            return 0;
        }
        s1.clear();
        for(int j=0;j<s.size();j++)
        {
            s1+=s[s.size()-j-1];
        }
        s=add(s,s1);
    }
    cout<<s<<endl<<step;
    return 0;
}
