
//
//  A1030.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/11.
//  Copyright © 2020 none. All rights reserved.
//  3:14 3:33
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
const int inf=99999999,maxn=510;
bool vis[maxn];
int d[maxn],G[maxn][maxn],C[maxn][maxn],n,m,src,dst;
vector<int> pre[maxn],tmp,ans;
int cost=inf;
void dijstra(int s){
    fill(vis,vis+maxn,false);
    fill(d,d+maxn,inf);
    d[s]=0;
    for(int i=0;i<n;i++){
        int u=-1,Min=inf;
        for(int j=0;j<n;j++){
            if(!vis[j] && d[j]<Min){
                Min=d[j];
                u=j;
            }
        }
        if(u==-1)return ;
        vis[u]=true;
        for(int v=0;v<n;v++){
            if(!vis[v]&&G[u][v]!=inf){
                if(d[v]>d[u]+G[u][v]){
                    d[v]=d[u]+G[u][v];
                    pre[v].clear();
                    pre[v].push_back(u);
                }
                else if(d[v]==d[u]+G[u][v]){
                    pre[v].push_back(u);
                }
            }
        }
    }
}
void dfs(int x){
    if(x==src){
        tmp.push_back(x);
        int sum=0;
        for(int i=tmp.size()-2;i>=0;i--){
            sum+=C[tmp[i+1]][tmp[i]];
        }
        if(sum<cost){
            cost=sum;
            ans=tmp;
        }
        tmp.pop_back();
    }
    tmp.push_back(x);
    for(int i=0;i<pre[x].size();i++){
        dfs(pre[x][i]);
    }
    tmp.pop_back();
}
int main(){
    for(int i=0;i<maxn;i++)fill(G[i],G[i]+maxn,inf);
    for(int i=0;i<maxn;i++)fill(C[i],C[i]+maxn,0);
    cin>>n>>m>>src>>dst;
    int a,b,x,y;
    for(int i=0;i<m;i++){
        scanf("%d %d %d %d",&a,&b,&x,&y);
        G[a][b]=G[b][a]=x;
        C[a][b]=C[b][a]=y;
    }
    dijstra(src);
    
    dfs(dst);
    int dis=0;
    printf("%d",ans[ans.size()-1]);
    for(int i=ans.size()-2;i>=0;i--){
        printf(" %d",ans[i]);
        dis+=G[ans[i+1]][ans[i]];
    }
    cout<<' '<<dis<<' '<<cost;
    
    return 0;
}
*/
