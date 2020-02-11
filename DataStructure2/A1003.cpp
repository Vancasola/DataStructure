//
//  A1003.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/11.
//  Copyright © 2020 none. All rights reserved.
//  11:41 11:56
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const int inf=99999999,maxn=510;
bool vis[maxn]={false};
int G[maxn][maxn],d[maxn];
int n,m,c1,c2,k,c[maxn],a,b,t;
vector<int> pre[maxn];
void dijstra(int c1){
    fill(vis,vis+maxn,false);
    fill(d,d+maxn,inf);
    d[c1]=0;
    for(int i=0;i<n;i++){
        int u=-1,Min=inf;
        for(int j=0;j<n;j++){
            if(!vis[j] && d[j]<Min){
                Min=d[j];
                u=j;
            }
        }
        if(u==-1)return;
        vis[u]=true;
        for(int v=0;v<n;v++){
            if(!vis[v]&&G[u][v]!=inf){
                if(d[v]==d[u]+G[u][v]){
                    pre[v].push_back(u);
                }
                else if(d[v]>d[u]+G[u][v]){
                    pre[v].clear();
                    d[v]=d[u]+G[u][v];
                    pre[v].push_back(u);
                }
            }
        }
    }
}
vector<int> tmp;
int MAX=0,cnt=0;
void dfs(int x){
    if(x==c1){
        cnt++;
        tmp.push_back(x);
        int sum=0;
        for(int i=0;i<tmp.size();i++)sum+=c[tmp[i]];
        if(sum>MAX)MAX=sum;
        tmp.pop_back();
        return;
    }
    tmp.push_back(x);
    for(int i=0;i<pre[x].size();i++){
        dfs(pre[x][i]);
    }
    tmp.pop_back();
}
int main(){
    for(int i=0;i<maxn;i++) fill(G[i],G[i]+maxn,inf);
    cin>>n>>m>>c1>>c2;
    for(int i=0;i<n;i++)scanf("%d",&c[i]);
    for(int i=0;i<m;i++){
        scanf("%d %d %d",&a,&b,&t);
        G[a][b]=G[b][a]=t;
    }
    dijstra(c1);
    dfs(c2);
    cout<<cnt<<' '<<MAX;
    return 0;
}
*/
