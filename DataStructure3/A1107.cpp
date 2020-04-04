//
//  A1107.cpp
//  DataStructure
//
//  Created by vancasola on 2020/4/4.
//  Copyright © 2020 none. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
#include <iostream>
#include <unordered_map>
using namespace std;
const int maxn=1005;
int father[maxn];
void init(){
    for(int i=0;i<maxn;i++)father[i]=i;
}
int findfather(int x){
    while(father[x]!=x)
        x=father[x];
    return x;
}
void un(int a,int b){
    int fa=findfather(a);
    int fb=findfather(b);
    father[fb]=fa;
};
int main(){
    init();
    int n,k,t;
    bool vis[maxn]={false};
    unordered_map<int, vector<int>> p;
    cin>>n;
    for(int i=0;i<n;i++){
        scanf("%d:",&k);
        for(int j=0;j<k;j++){
            scanf("%d",&t);
            vis[i]=true;
            p[t].push_back(i);
        }
    }
    for(unordered_map<int, vector<int>>::iterator it=p.begin();it!=p.end();it++){
        for(int i=1;i<it->second.size();i++)
            un(it->second[0],it->second[i]);
    }
    unordered_map<int,int> mp;
    for(int i=0;i<maxn;i++){
        if(vis[i])mp[findfather(i)]++;
    }
    vector<int> v;
    for(unordered_map<int,int>::iterator it=mp.begin();it!=mp.end();it++)
        v.push_back(it->second);
    sort(v.begin(),v.end(),greater<int>());
    printf("%d\n",v.size());
    for(int i=0;i<v.size();i++){
        if(i)printf(" %d",v[i]);
        else printf("%d",v[i]);
    }
}
