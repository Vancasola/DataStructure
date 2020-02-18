//
//  A1107.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/18.
//  Copyright © 2020 none. All rights reserved.
//  4:48 5:15
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
const int maxn=1010;
int father[maxn];
void init(){
    for(int i=0;i<maxn;i++)father[i]=i;
}
int find(int x){
    while(x!=father[x]){
        x=father[x];
    }
    return x;
}
void un(int a,int b){
    int fa=find(a);
    int fb=find(b);
    father[fa]=fb;
}
int main(){
    init();
    int n,k,t,r;
    vector<int> h[maxn];
    cin>>n;
    for(int i=1;i<=n;i++){
        scanf("%d:",&k);
        for(int j=0;j<k;j++){
            scanf("%d",&t);
            h[t].push_back(i);
        }
    }
    for(int i=0;i<maxn;i++){
        if(!h[i].size())continue;
        for(int j=1;j<h[i].size();j++){
            un(h[i][0],h[i][j]);
        }
    }
    vector<int> ans(1010),res;
    int cnt=0;
    for(int i=1;i<=n;i++){
        t=find(i);
        ans[t]++;
    }
    for(int i=1;i<=n;i++){
        if(ans[i]){
            cnt++;
            res.push_back(ans[i]);
        }
    }
    cout<<cnt<<endl;
    sort(res.begin(),res.end(),greater<int>());
    for(int i=0;i<res.size();i++){
        if(i==res.size()-1)printf("%d",res[i]);
        else printf("%d ",res[i]);
    }
    return 0;
}
*/
