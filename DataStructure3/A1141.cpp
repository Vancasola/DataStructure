//
//  A1141.cpp
//  DataStructure
//
//  Created by vancasola on 2020/3/22.
//  Copyright © 2020 none. All rights reserved.
//  6:46 7:02
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <iostream>
#include <unordered_map>
#include <set>
using namespace std;
struct school{
    string s;
    int b=0,a=0,t=0,sum=0,sc=0,r=0;
};
void lowcase(string& s){
    for(int i=0;i<s.size();i++){
        if(s[i]>='A'&&s[i]<='Z')s[i]=s[i]-'A'+'a';
    }
}
bool cmp(const school& a,const school& b){
    if(a.sc!=b.sc)return a.sc>b.sc;
    else if(a.sum!=b.sum)return a.sum<b.sum;
    return a.s<b.s;
}
int main(){
    int n=0;
    map<string,school> p;
    string sch,id;
    int sc;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>id>>sc>>sch;
        lowcase(sch);
        p[sch].sum++;
        p[sch].s=sch;
        if(id[0]=='A')p[sch].a+=sc;
        else if(id[0]=='B')p[sch].b+=sc;
        else if(id[0]=='T')p[sch].t+=sc;
    }
    vector<school> v;
    school t;
    for(map<string,school>::iterator it=p.begin();it!=p.end();it++){
        t=it->second;
        t.sc=t.b/1.5+t.a+t.t*1.5;
        v.push_back(t);
    }
    sort(v.begin(),v.end(),cmp);
    v[0].r=1;
    int r=1;
    for(int i=1;i<n;i++){
        if(v[i].sc!=v[i-1].sc)r=i+1;
        v[i].r=r;
    }
    printf("%d\n",v.size());
    for(int i=0;i<v.size();i++){
        printf("%d %s %d %d\n",v[i].r,v[i].s.c_str(),v[i].sc,v[i].sum);
    }
    return 0;
}*/
