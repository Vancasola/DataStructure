//
//  A1062.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/17.
//  Copyright © 2020 none. All rights reserved.
//  10:35 
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
struct men{
    int id,t,v,s;
    int f;
};
bool cmp(const men& a,const men& b){
    if(a.f!=b.f)return a.f>b.f;
    else if(a.s!=b.s)return a.s>b.s;
    else if(a.v!=b.v)return a.v>b.v;
    return a.id<b.id;
}
int main(){
    int n,l,h,a,b,c;
    vector<men> v;
    cin>>n>>l>>h;
    for(int i=0;i<n;i++){
        scanf("%d %d %d",&a,&b,&c);
        if(b<l || c<l)continue;
        men m;
        m.id=a;m.v=b;m.t=c;
        m.s=m.v+m.t;
        if(m.v>=h && m.t>=h)m.f=3;
        else if(m.v>=h && m.t<h)m.f=2;
        else if(m.v>=m.t && m.v<h && m.t<h)m.f=1;
        else m.f=0;
        v.push_back(m);
    }
    sort(v.begin(),v.end(),cmp);
    printf("%d\n",v.size());
    for(int i=0;i<v.size();i++){
        printf("%8d %d %d\n",v[i].id,v[i].v,v[i].t);
    }
    return 0;
}
*/
