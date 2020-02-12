//
//  A1013.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/12.
//  Copyright © 2020 none. All rights reserved.
//  10:16 10:28
/*
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
vector<int> v[1010];
bool vis[1010]={false};
void dfs(int x,int b){
    vis[x]=true;
    for(int i=0;i<v[x].size();i++){
        if(!vis[v[x][i]] && b!=v[x][i])dfs(v[x][i],b);
    }
}
int main(){
    int n,m,k,a,b,x;
    cin>>n>>m>>k;
    for(int i=0;i<m;i++){
        scanf("%d %d",&a,&b);
        v[a].push_back(b);
        v[b].push_back(a);
    }
    for(int i=0;i<k;i++){
        scanf("%d",&b);
        fill(vis,vis+n+1,false);
        int sum=0;
        for(int j=1;j<=n;j++){
            if(!vis[j] && b!=j){
                dfs(j,b);
                sum++;
            }
        }
        printf("%d\n",sum-1);
    }
    return 0;
}
*/
