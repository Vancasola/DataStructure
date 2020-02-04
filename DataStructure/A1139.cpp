
//
//  A1139.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/4.
//  Copyright © 2020 none. All rights reserved.
//  3:51 5:19
/*
#include <stdio.h>
#include <iostream>
#include <set>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
int n,m,k;
set<string> s[10010];
vector<pair<int,int>> v;
bool cmp(const pair<int,int>& a,const pair<int,int>&b){
    if(a.first!=b.first)return a.first<b.first;
    return a.second<b.second;
}
int main(){
    string a,b;
    int x,y;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>a>>b;
        x=stoi(a);
        y=stoi(b);
        s[abs(x)].insert(b);
        s[abs(y)].insert(a);
    }
    cin>>k;
    for(int i=0;i<k;i++){
        cin>>a>>b;
        v.clear();
        x=stoi(a);
        y=stoi(b);
        for(set<string>::iterator ita=s[abs(x)].begin();ita!=s[abs(x)].end();ita++){
            if( (*ita).size()==a.size() && (*ita)!=b &&(*ita)!=a){
                for(set<string>::iterator itc=s[abs(stoi(*ita))].begin();itc!=s[abs(stoi(*ita))].end();itc++){
                    if((*itc).size()==b.size() &&(*itc)!=b &&(*itc)!=a){
                        if( s[abs(y)].find((*itc))!=s[abs(y)].end())
                        v.push_back(pair<int,int>(abs(stoi(*ita)),abs(stoi(*itc))));
                    }
                }
            }
        }
        printf("%d\n",v.size());
        sort(v.begin(),v.end(),cmp);
        for(int i=0;i<v.size();i++){
            printf("%04d %04d\n",v[i].first,v[i].second);
        }
    }
    return 0;
}
*/
