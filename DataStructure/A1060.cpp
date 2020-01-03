//
//  A1060.cpp
//  DataStructure
//
//  Created by vancasola on 2020/1/3.
//  Copyright © 2020 none. All rights reserved.
//  9:09
/*
#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;
int main()
{
    int n,p1=0,p2=0;
    string a,b,s1="0.",s2="0.";
    cin>>n>>a>>b;
    for(int i=0;i<a.size();i++)
        if(a[i]=='.'){p1=i;break;}
    for(int i=0;i<b.size();i++)
        if(b[i]=='.'){p2=i;break;}
    if(!p1)p1=a.size();
    if(!p2)p2=b.size();
    //if(p1<n)p1=(n<a.size())?n:a.size();
    //if(p2<n)p2=(n<b.size())?n:b.size();
    if(a[0]=='0'&&a[1]=='.')
    {
        int i=2,j=0;
        for(;j<n-1 && i<a.size();i++)
        {
            s1+=a[i];
            p1=-1*j;
        }
    }
    else
        for(int i=0,j=0;j<n && i<a.size();i++,j++){
            if(a[i]=='.'){j--;continue;}
            s1+=a[i];
        }
    if(b[0]=='0'&&b[1]=='.')
    {
        int i=2,j=0;
        for(;j<n-1 && i<b.size();i++)
        {
            s2+=b[i];
            p2=-1*j;
        }
    }
    else
        for(int i=0,j=0;j<n && i<b.size();i++,j++){
            if(b[i]=='.'){j--;continue;}
            s2+=b[i];
        }
    s1+="*10^";
    s2+="*10^";
    s1+=to_string(p1);
    s2+=to_string(p2);
    if(s1==s2){
        cout<<"YES";
        bool f=false;
        for(int i=2,j=0;j<n && i<s1.size();i++,j++)
        {
            if(s1[i]=='*')break;
            if(s1[i]!='0'){f=true;break;}
        }
        if(f)cout<<' '<<s1;
            }
    else{
        cout<<"NO "<<s1<<' '<<s2;
    }
    return 0;
}
*/
