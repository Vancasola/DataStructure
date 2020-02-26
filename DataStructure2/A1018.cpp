//
//  A1018.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/26.
//  Copyright © 2020 none. All rights reserved.
//  3:12 4:08
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <queue>
#include <cmath>
using namespace std;
const int maxn=505,inf=99999999;
int c,n,dst,src,m,t,s[maxn];
bool vis[maxn]={false};
int G[maxn][maxn];
int d[maxn],a,b;
vector<int> pre[maxn],tmp,ans;
int Mintake=inf,Minback=inf;
void dijstra(int src){
    fill(vis,vis+maxn,false);
    fill(d,d+maxn,inf);
    d[src]=0;
    for(int i=0;i<=n;i++){
        int u=-1,Min=inf;
        for(int j=0;j<=n;j++){
            if(!vis[j]&&d[j]<Min){
                Min=d[j];
                u=j;
            }
        }
        if(u==-1)return ;
        vis[u]=true;
        for(int v=0;v<=n;v++){
            if(!vis[v] && G[u][v]!=inf){
                if(d[v]>G[u][v]+d[u]){
                    d[v]=G[u][v]+d[u];
                    pre[v].clear();
                    pre[v].push_back(u);
                }
                else if(d[v]==G[u][v]+d[u]){
                    pre[v].push_back(u);
                }
            }
        }
    }
}
void dfs(int x){
    if(x==0){
        tmp.push_back(x);
        int take=0,back=0,bring=0;
        for(int i=tmp.size()-2;i>=0;i--){
            if(s[tmp[i]]>c/2){
                bring+=s[tmp[i]]-c/2;
            }
            else if(s[tmp[i]]<c/2){
                if(bring>=(c/2-s[tmp[i]])){
                    bring-=(c/2-s[tmp[i]]);
                }
                else {
                    take+=(c/2-s[tmp[i]]-bring);
                    bring=0;
                }
            }
        }
        back=bring;
        if(take<Mintake){
            Mintake=take;
            Minback=back;
            ans=tmp;
        }
        else if(take==Mintake && back<Minback){
            Minback=back;
            ans=tmp;
        }
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
    cin>>c>>n>>dst>>m;
    src=0;
    for(int i=0;i<maxn;i++)fill(G[i],G[i]+maxn,inf);
    for(int i=1;i<=n;i++)
        scanf("%d",&s[i]);
    for(int i=0;i<m;i++){
        scanf("%d %d %d",&a,&b,&t);
        G[a][b]=G[b][a]=t;
    }
    dijstra(0);
    dfs(dst);
    printf("%d ",Mintake);
    printf("%d",src);
    for(int i=ans.size()-2;i>=0;i--)printf("->%d",ans[i]);
    printf(" %d",Minback);
    return 0;
}
*/
