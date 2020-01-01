//
//  A1038.cpp
//  DataStructure
//
//  Created by vancasola on 2020/1/1.
//  Copyright © 2020 none. All rights reserved.
//  7 :46 8:07 8:15 8:27

#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cstring>
#include <cstdlib>
using namespace std;
bool cmp1(const string&a ,const string& b){return a+b<b+a;}
bool cmp(const string& a,const string& b)
{
    int l1=a.size(),l2=b.size();
    if(l1==l2)return a<b;
    string s1=a,s2=b;
    while(s1!=""||s2!="")
    {
        l1=s1.size(),l2=s2.size();
        if(l1==l2)return s1<s2;
        if(l1>l2)
        {
            for(int i=0;i<l2;i++)
            {
                if(s1[i]==s2[i])continue;
                else return s1[i]<s2[i];
                    }
            s1=s1.c_str()+l2;
        }
        else
        {
            for(int i=0;i<l1;i++)
            {
                if(s1[i]==s2[i])continue;
                else return s1[i]<s2[i];
                    }
            s2=s2.c_str()+l1;
        }
    }
    return a<b;
}
int main()
{
    int n;
    string t;
    vector<string> v;
    cin>>n;
    if(!n)return 0;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        if(!atoi(t.c_str()))continue;
        v.push_back(t);
    }
    sort(v.begin(),v.end(),cmp);
    int f;
    if(!v.size()){printf("0");return 0;}
    f=atoi(v[0].c_str());
    cout<<f;
    for(int i=1;i<v.size();i++)
        printf("%s",v[i].c_str());
    return 0;
}


