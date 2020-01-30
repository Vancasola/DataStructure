//
//  A1094.cpp
//  DataStructure
//
//  Created by vancasola on 2020/1/30.
//  Copyright © 2020 none. All rights reserved.
//  10:48 11:03
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
vector<vector<int>> v(105,vector<int>());
int cnt=1,maxlayer=1;
unordered_map<int,int> mp;
void dfs(int r,int layer){
    if(mp.find(layer)==mp.end())mp[layer]=1;
    else mp[layer]++;
    if(!v[r].size())return;
    for(int i=0;i<v[r].size();i++)
        dfs(v[r][i],layer+1);
}
int main(){
    int n,m,k,id,t;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>id>>k;
        for(int j=0;j<k;j++){
            cin>>t;
            v[id].push_back(t);
        }
    }
    dfs(1,1);
    for(unordered_map<int, int>::iterator it=mp.begin();it!=mp.end();it++){
        if(it->second>cnt){
            cnt=it->second;
            maxlayer=it->first;
        }
    }
    cout<<cnt<<' '<<maxlayer<<endl;
    return 0;
}
*/
