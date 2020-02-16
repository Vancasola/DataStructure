//
//  A1095.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/16.
//  Copyright © 2020 none. All rights reserved.
//  10:48 11:32 11:40 11:42
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <unordered_map>
using namespace std;
struct record{
    string id;
    int t;
    bool f;
}a[10005];
struct node{
    string id;
    int in,out;
};
bool cmp1(const record& a,const record& b){
    if(a.id!=b.id) return a.id<b.id;
    else if(a.t!=b.t)return a.t<b.t;
    return a.f>b.f;
}
bool cmp2(const node& a,const node& b){
    if(a.in!=b.in)return a.in<b.in;
    return a.out<b.out;
}
int main(){
    int n,m,hh,mm,ss;
    char ch[8],flag[4];
    unordered_map<string, int> p;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        scanf("%s %d:%d:%d %s",ch,&hh,&mm,&ss,flag);
        a[i].id=ch;
        a[i].t=hh*3600+mm*60+ss;
        if(!strcmp(flag,"in"))a[i].f=true;
        else a[i].f=false;
    }
    sort(a,a+n,cmp1);
    vector<node> v;
    vector<string> ans;
    int Max=-1;
    for(int i=1;i<n;i++){
        if(a[i-1].id==a[i].id && a[i-1].f==true && a[i].f==false){
            node t;
            t.id=a[i].id;
            t.in=a[i-1].t;
            t.out=a[i].t;
            v.push_back(t);
            p[t.id]+=t.out-t.in;
            i++;
        }
    }
    for(unordered_map<string, int>::iterator it=p.begin();it!=p.end();it++){
        if(it->second>Max){
            ans.clear();
            Max=it->second;
            ans.push_back(it->first);
        }
        else if(it->second==Max)ans.push_back(it->first);
    }
    sort(v.begin(),v.end(),cmp2);
    for(int j=0;j<m;j++){
        scanf("%d:%d:%d",&hh,&mm,&ss);
        int t=hh*3600+mm*60+ss;
        int sum=0;
        for(int i=0;i<v.size();i++){
            if(v[i].in>t)break;
            if(v[i].in<=t && v[i].out>t){
                sum++;
            }
        }
        printf("%d\n",sum);
    }
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        printf("%s ",ans[i].c_str());
    }
    printf("%02d:%02d:%02d",Max/3600,Max/60-60*(Max/3600),Max%60);
    return 0;
}
*/
