//
//  A1137.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/27.
//  Copyright © 2020 none. All rights reserved.
//  11:41 12:30
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
    int p,m,f,s;
    node(string str){
        p=m=f=-1;
        s=0;
        id=str;
    }
};
bool cmp(const node& a,const node& b){
    if(a.s!=b.s)return a.s>b.s;
    return a.id<b.id;
}
int main(){
    int n,m,k;
    string str;
    unordered_map<string, int> p;
    vector<node> v;
    int x;
    cin>>n>>m>>k;
    for(int i=0;i<n;i++){
        cin>>str>>x;
        if(x>=200){
            v.push_back(node(str));
            v.back().p=x;
            p[str]=v.size()-1;
        }
    }
    for(int i=0;i<m;i++){
        cin>>str>>x;
        if(p.find(str)!=p.end())
            v[p[str]].m=x;
    }
    for(int i=0;i<k;i++){
        cin>>str>>x;
        if(p.find(str)!=p.end()){
            v[p[str]].f=x;
        }
    }
    vector<node> ans;
    for(int i=0;i<v.size();i++){
        if( p.find(str)!=p.end() && v[i].f!=-1){
            if(v[i].m<=v[i].f)v[i].s=v[i].f;
            else v[i].s=int((0.6*v[i].f + 0.4*v[i].m)+0.5);
            if(v[i].s>=60)ans.push_back(v[i]);
        }
    }
    sort(ans.begin(),ans.end(),cmp);
    
    for(int i=0;i<ans.size();i++){
        printf("%s %d %d %d %d\n",ans[i].id.c_str(),ans[i].p,ans[i].m,ans[i].f,ans[i].s);
    }
    return 0;
}
*/
