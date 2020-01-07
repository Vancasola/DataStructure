//
//  A1082.cpp
//  DataStructure
//
//  Created by vancasola on 2020/1/7.
//  Copyright © 2020 none. All rights reserved.
//  9:18 9:56
/*
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
using namespace std;
string w1[4]={"","Shi","Bai","Qian"};
int main()
{
    string s;
    int t=0;
    string num[10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};;
    cin>>s;
    if(s.size() && s[0]=='0'){
        printf("ling");
        return 0;
    }
    if(s[0]=='-'){
        s=s.substr(1,s.size());
        cout<<"Fu ";
    }
    bool f=false;
    t=s[0]-'0';
    if(!t)f=true;
    if(t)
    {
        if(f)cout<<num[0];
        cout<<num[t];
        f=false;
    }
    if((s.size())%9==0)cout<<" Yi";
    if((s.size())%5==0)cout<<" Wan";
    if(w1[(s.size()-1)%4]!="")cout<<' '<<w1[(s.size()-1)%4];
    else cout<<w1[(s.size()-1)%4];
    for(int i=1;i<s.size();i++)
    {
        t=s[i]-'0';
        if(!t)f=true;
        if(t)
        {
            if(f)cout<<' '<<num[0];
            cout<<' '<<num[t];
            f=false;
        }
        if((s.size()-i)%9==0)cout<<" Yi";
        if((s.size()-i)%5==0)cout<<" Wan";
        if(!t)continue;
        if(w1[(s.size()-i-1)%4]!="")cout<<' '<<w1[(s.size()-i-1)%4];
        else cout<<w1[(s.size()-i-1)%4];
    }
    return 0;
}
*/
