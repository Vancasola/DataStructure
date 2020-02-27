//
//  A1141.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/27.
//  Copyright © 2020 none. All rights reserved.
//  6:35 7:12
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <stack>
#include <queue>
#include <algorithm>
#include <unordered_map>
using namespace std;
struct node{
    string id;
    int r=0,tws=0,num=0;
    int t=0,a=0,b=0;
};
bool cmp(const node& a,const node& b){
    return a.tws>b.tws;
}
bool cmp1(const node& a,const node& b){
    if(a.r!=b.r)return a.r<b.r;
    if(a.num!=b.num)return a.num<b.num;
    return a.id<b.id;
}
void convert(string &s){
    for(int i=0;i<s.size();i++){
        if(s[i]>='A'&& s[i]<='Z')
            s[i]='a'+s[i]-'A';
    }
}
int main(){
    int n,sc;
    string s1,s2;
    unordered_map<string,int> p,s;
    vector<node> v;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s1>>sc>>s2;
        convert(s2);
        if(p.find(s2)==p.end()){
            node t;
            t.id=s2;
            t.num++;
            if(s1[0]=='B')t.b=sc;
            else if(s1[0]=='T')t.t=sc;
            else t.a=sc;
            v.push_back(t);
            p[s2]=v.size()-1;
        }
        else {
            if(s1[0]=='B')v[p[s2]].b+=sc;
            else if(s1[0]=='T')v[p[s2]].t+=sc;
            else v[p[s2]].a+=sc;
            v[p[s2]].num++;
        }
    }
    
    for(int i=0;i<v.size();i++){
        v[i].tws=v[i].a+v[i].b/1.5+v[i].t*1.5;
    }
    sort(v.begin(),v.end(),cmp);
    int r=1;
    v[0].r=r;
    for(int i=1;i<v.size();i++){
        if(v[i].tws!=v[i-1].tws){
            r=i+1;
        }
        v[i].r=r;
    }
    sort(v.begin(),v.end(),cmp1);
    printf("%d\n",v.size());
    for(int i=0;i<v.size();i++){
        printf("%d %s %d %d\n",v[i].r,v[i].id.c_str(),v[i].tws,v[i].num);
    }
    return 0;
}
*/
