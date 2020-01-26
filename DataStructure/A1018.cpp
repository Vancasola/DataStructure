//
//  A1018.cpp
//  DataStructure
//
//  Created by vancasola on 2020/1/26.
//  Copyright © 2020 none. All rights reserved.
//  3:45 4:05 4:22 5:59
/*
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
int INF=0x9999999;
int MAXN=510,Min=INF;
int a,b,t;
vector<vector<int>> G(MAXN,vector<int>(MAXN,INF)),pre(MAXN,vector<int>());
vector<bool> vis(MAXN,false);
vector<int> d(MAXN),c(MAXN),tmp,ans;
int CMAX,N,S,M,takeback=0;
void dijstra(int s){
    fill(d.begin(),d.begin()+N+5,INF);
    d[s]=0;
    for(int i=0;i<=N;i++){
        int MIN=INF,u=-1;
        for(int j=0;j<=N;j++){
            if(!vis[j] && d[j]<MIN){
                MIN=d[j];
                u=j;
            }
        }
        if(u==-1)return;
        vis[u]=true;
        for(int v=0;v<=N;v++){
            if(!vis[v]&& G[u][v]!=INF){
                if(d[u]+G[u][v]<d[v]){
                    d[v]=d[u]+G[u][v];
                    pre[v].clear();
                    pre[v].push_back(u);
                }
                else if(d[u]+G[u][v]==d[v]){
                    pre[v].push_back(u);
                }
            }
        }
    }
    return;
}

int dfs(int v){
    if(v==0){
        int r=0,C=CMAX/2,owe=0;
        for(int i=tmp.size()-1;i>=0;i--){
            int x=tmp[i];
            if(c[x]>=C)r+=c[x]-C;
            else{
                if(r<C-c[x]){
                owe+=C-c[x]-r;
                r=0;
                }
                else
                    r-=C-c[x];
            }
        }
        if(owe<Min){
            Min=owe;
            takeback=r;
            ans=tmp;
            ans.push_back(0);
        }
        else if(owe==Min && r<takeback){
            Min=owe;
            takeback=r;
            ans=tmp;
            ans.push_back(0);
        }
        return 0;
    }
    tmp.push_back(v);
    for(int i=0;i<pre[v].size();i++)
        dfs(pre[v][i]);
    tmp.pop_back();
}
int main(){
    cin>>CMAX>>N>>S>>M;
    for(int i=1;i<=N;i++){
        scanf("%d",&c[i]);
    }
    for(int i=0;i<M;i++){
        scanf("%d %d %d",&a,&b,&t);
        G[a][b]=G[b][a]=t;
    }
    dijstra(0);
    dfs(S);
    cout<<Min<<' ';
    int i=0;
    for( i=ans.size()-1;i>=1;i--){
        cout<<ans[i]<<"->";
    }
    cout<<ans[i]<<' '<<takeback;
    return 0;
}
*/
