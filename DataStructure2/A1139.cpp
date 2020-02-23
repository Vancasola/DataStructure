//
//  A1139.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/23.
//  Copyright © 2020 none. All rights reserved.
//  10:12 10:42
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
#include <unordered_map>
using namespace std;
bool cmp(const pair<string,string>&a,const pair<string,string>&b){
    if(a.first!=b.first)return a.first<b.first;
    return a.second<b.second;
}
int judge(string &a){
    if(a[0]=='-')return -1;
    return 1;
}
int main(){
    int n,m,k;
    unordered_map<string,set<string>> p;
    string a,b,t,c;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>a>>b;
        p[a].insert(b);
        p[b].insert(a);
    }
    cin>>k;
    for(int i=0;i<k;i++){
        cin>>a>>b;
        vector<pair<string,string>> v;
        for(set<string>::iterator it=p[a].begin();it!=p[a].end();it++){
            if(*it==b)continue;
            t=*it;
            if(judge(t) + judge(a)==0)continue;
            for(set<string>::iterator it1=p[*it].begin();it1!=p[*it].end();it1++){
                if(*it1==b || *it1==a)continue;
                if(p[*it1].find(b)!=p[*it1].end()){
                    t=*it1;
                    if(judge(t) + judge(b)==0)continue;
                    c=*it;
                    if(judge(t)==-1)t=t.substr(1,t.size());
                    if(judge(c)==-1)c=c.substr(1,c.size());
                    v.push_back(pair<string,string>(c,t));
                }
            }
        }
        sort(v.begin(),v.end(),cmp);
        printf("%d\n",v.size());
        for(int j=0;j<v.size();j++){
            printf("%s %s\n",v[j].first.c_str(),v[j].second.c_str());
        }
    }
    return 0;
}
*/
 
 
