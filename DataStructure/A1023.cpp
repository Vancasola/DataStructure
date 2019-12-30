//
//  A1023.cpp
//  DataStructure
//
//  Created by vancasola on 2019/12/30.
//  Copyright © 2019 none. All rights reserved.
//  7:20 7:40 7:45
/*
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
using namespace std;
int main()
{
    string a,b;
    stack<char> st;
    cin>>a;
    if(a=="0"){printf("Yes\n0");return 0;}
    int s=0,t,c;
    for(int i=a.size()-1;i>=0;i--)
    {
        t=(a[i]-'0')*2;
        c=t+s;
        //cout<<c<<' ';
        b+=c%10+'0';
        st.push(c%10+'0');
        s=c/10;
    }
    if(s){st.push(s+'0');}
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    if(a==b)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    while(!st.empty())
    {
        cout<<st.top();
        st.pop();
    }
    return 0;
}
*/
