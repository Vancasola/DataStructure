//
//  A1012.cpp
//  DataStructure
//
//  Created by vancasola on 2019/12/26.
//  Copyright © 2019 none. All rights reserved.
// 8:09 8:55 9:06
/*
#include <stdio.h>
#include <iostream>
#include <string>
#include <string.h>
#include <map>
#include <algorithm>
using namespace std;
struct stu
{
    string id;
    int c,m,e,a;
    int r;
    char p;
}s[2000];
bool compa(const stu& a,const stu&b)
{
    return a.a>b.a;
}
bool compc(const stu& a,const stu&b)
{
    return a.c>b.c;
}
bool compm(const stu& a,const stu&b)
{
    return a.m>b.m;
}
bool compe(const stu& a,const stu&b)
{
    return a.e>b.e;
}
int main()
{
    int N,M;
    float a;
    string t;
    cin>>N>>M;
    for(int i=0;i<N;i++)
    {
        cin>>s[i].id>>s[i].c>>s[i].m>>s[i].e;
        a=(float)(s[i].c+s[i].m+s[i].e)/3;
        if((a-(int)a)<=0.4)s[i].a=(int)a;
        else s[i].a=(int)a+1;
    }
    sort(s,s+N,compa);
    int r=1,last=s[0].a;
    for(int i=0;i<N;i++)
    {
        if(last!=s[i].a)r=i+1;
        s[i].r=r;
        s[i].p='A';
        last=s[i].a;
        //cout<<s[i].id<<' '<<s[i].a<<' '<<s[i].r<<endl;
    }
    sort(s,s+N,compc);
    r=1,last=s[0].c;
    for(int i=0;i<N;i++)
    {
        if(last!=s[i].c)r=i+1;
        if(r<s[i].r)
        {
            s[i].r=r;
            s[i].p='C';
        }
        last=s[i].c;
    }
    sort(s,s+N,compm);
    r=1,last=s[0].m;
    for(int i=0;i<N;i++)
    {
        if(last!=s[i].m)r=i+1;
        if(r<s[i].r)
        {
            s[i].r=r;
            s[i].p='M';
        }
        last=s[i].m;
    }
    sort(s,s+N,compe);
    r=1,last=s[0].e;
    for(int i=0;i<N;i++)
    {
        if(last!=s[i].e)r=i+1;
        if(r<s[i].r)
        {
            s[i].r=r;
            s[i].p='E';
        }
        last=s[i].e;
    }
    map<string,int> mp;
    for(int i=0;i<N;i++)
    {
        mp[s[i].id]=i;
    }
    for(int i=0;i<M;i++)
    {
        cin>>t;
        if(mp.find(t)==mp.end())cout<<"N/A"<<endl;
        else cout<<s[mp[t]].r<<' '<<s[mp[t]].p<<endl;
    }
    return 0;
}
*/
