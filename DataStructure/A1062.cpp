//
//  A1062.cpp
//  DataStructure
//
//  Created by vancasola on 2020/1/5.
//  Copyright © 2020 none. All rights reserved.
//  9:20 9:45

/*
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
struct men{
    int id;
    int t;
    int v;
};
bool cmp(const men& a,const men& b)
{
    if(a.t+a.v!=b.t+b.v)return a.t+a.v>b.t+b.v;
    else if(a.v!=b.v)return a.v>b.v;
    return a.id<b.id;
}
int main()
{
    int n,l,h;
    vector<men> v1,v2,v3,v4;
    cin>>n>>l>>h;
    for(int i=0;i<n;i++)
    {
        men m;
        scanf("%d %d %d",&m.id,&m.v,&m.t);
        if(m.t<l || m.v<l)continue;
        else if(m.t>=h && m.v>=h)v1.push_back(m);
        else if(m.v>=h)v2.push_back(m);
        else if( m.v>=m.t)v3.push_back(m);
        else v4.push_back(m);
    }
    sort(v1.begin(),v1.end(),cmp);
    sort(v2.begin(),v2.end(),cmp);
    sort(v3.begin(),v3.end(),cmp);
    sort(v4.begin(),v4.end(),cmp);
    cout<<v1.size()+v2.size()+v3.size()+v4.size()<<endl;
    for(int i=0;i<v1.size();i++)printf("%d %d %d\n",v1[i].id,v1[i].v,v1[i].t);
    for(int i=0;i<v2.size();i++)printf("%d %d %d\n",v2[i].id,v2[i].v,v2[i].t);
    for(int i=0;i<v3.size();i++)printf("%d %d %d\n",v3[i].id,v3[i].v,v3[i].t);
    for(int i=0;i<v4.size();i++)printf("%d %d %d\n",v4[i].id,v4[i].v,v4[i].t);
    return 0;
}
*/
