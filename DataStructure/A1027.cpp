//
//  A1027.cpp
//  DataStructure
//
//  Created by vancasola on 2019/12/30.
//  Copyright © 2019 none. All rights reserved.
//  10:47 11:13
/*
#include <stdio.h>
#include <iostream>
#include <string>
#include <cstdio>
#include <stack>
using namespace std;
string to13(int &a)
{
    int b=0;
    string ans;
    stack<char> s;
    while(a)
    {
        b=a%13;
        if(b==10)s.push('A');
        else if(b==11)s.push('B');
        else if(b==12)s.push('C');
        else s.push(b+'0');
        a/=13;
    }
    while(!s.empty()){ans+=s.top();s.pop();}
    return ans;
}
int main()
{
    int a,b,c;
    string a1,b1,c1;
    cin>>a>>b>>c;
    cout<<"#";
    a1=to13(a);
    if(a1.size()==1)cout<<'0';
    cout<<a1;
    if(a1=="")cout<<"00";
    b1=to13(b);
    if(b1.size()==1)cout<<'0';
    cout<<b1;
    if(b1=="")cout<<"00";
    c1=to13(c);
    if(c1.size()==1)cout<<'0';
    cout<<c1;
    if(a1=="")cout<<"00";
    return 0;
}
*/
