//
//  A1005.cpp
//  DataStructure
//
//  Created by vancasola on 2019/12/25.
//  Copyright © 2019 none. All rights reserved.
//
//12min
/*
#include <stdio.h>
#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main()
{
    int sum=0;
    string a;
    cin>>a;
    string Itos[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    stack<int> s;
    for(int i=0;i<a.size();i++)
    {
        sum+=a[i]-'0';
    }
    if(!sum){cout<<"zero";return 0;}
    while(sum)
    {
        s.push(sum%10);
        sum/=10;
    }
    while(s.size()>1)
    {
        cout<<Itos[s.top()]<<' ';
        s.pop();
    }
    cout<<Itos[s.top()];
    return 0;
}
*/
