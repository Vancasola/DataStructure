//
//  A1111.cpp
//  DataStructure
//
//  Created by vacansola on 2020/2/17.
//  Copyright © 2020 none. All rights reserved.
//  5:39 6:20
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <set>
using namespace std;
const int inf=99999999,maxn=505;
bool vis[maxn]={false};
int d1[maxn],d2[maxn],g[maxn][maxn],h[maxn][maxn],n,m;
int a,b,c,e,f,src,dst;
vector<int> pre1[maxn],pre2[maxn];
void dijstra1(int x){
    fill(vis,vis+maxn,false);
    fill(d1,d1+maxn,inf);
    d1[x]=0;
    for(int i=0;i<n;i++){
        int u=-1,Min=inf;
        for(int j=0;j<n;j++){
            if(!vis[j]&&d1[j]<Min){
                Min=d1[j];
                u=j;
            }
        }
        if(u==-1)return ;
        vis[u]=true;
        for(int v=0;v<n;v++){
            if(!vis[v]&&g[u][v]!=inf){
                if(d1[v]>d1[u]+g[u][v]){
                    d1[v]=d1[u]+g[u][v];
                    pre1[v].clear();
                    pre1[v].push_back(u);
                }
                else if(d1[v]==d1[u]+g[u][v]){
                    pre1[v].push_back(u);
                }
            }
        }
    }
}
vector<int> tmp,ans1;
int Min=inf;
void dfs1(int x){
    if(x==src){
        tmp.push_back(x);
        int sum=0;
        for(int i=tmp.size()-1;i>=1;i--){
            sum+=h[tmp[i]][tmp[i-1]];
        }
        if(sum<Min){
            Min=sum;
            ans1=tmp;
        }
        tmp.pop_back();
        return;
    }
    tmp.push_back(x);
    for(int i=0;i<pre1[x].size();i++){
        dfs1(pre1[x][i]);
    }
    tmp.pop_back();
}
//-----------------
void dijstra2(int x){
    fill(vis,vis+maxn,false);
    fill(d2,d2+maxn,inf);
    d2[x]=0;
    for(int i=0;i<n;i++){
        int u=-1,Min=inf;
        for(int j=0;j<n;j++){
            if(!vis[j]&&d2[j]<Min){
                Min=d2[j];
                u=j;
            }
        }
        if(u==-1)return ;
        vis[u]=true;
        for(int v=0;v<n;v++){
            if(!vis[v]&&g[u][v]!=inf){
                if(d2[v]>d2[u]+h[u][v]){
                    d2[v]=d2[u]+h[u][v];
                    pre2[v].clear();
                    pre2[v].push_back(u);
                }
                else if(d2[v]==d2[u]+h[u][v]){
                    pre2[v].push_back(u);
                }
            }
        }
    }
}
vector<int> tmp2,ans2;
void dfs2(int x){
    if(x==src){
        tmp2.push_back(x);
        if(!ans2.size() ||ans2.size()>tmp2.size()){
            ans2=tmp2;
        }
        tmp2.pop_back();
        return;
    }
    tmp2.push_back(x);
    for(int i=0;i<pre2[x].size();i++){
        dfs2(pre2[x][i]);
    }
    tmp2.pop_back();
}
int main(){
    cin>>n>>m;
    for(int i=0;i<maxn;i++)fill(g[i],g[i]+maxn,inf);
    for(int i=0;i<maxn;i++)fill(h[i],h[i]+maxn,inf);
    for(int i=0;i<m;i++){
        scanf("%d %d %d %d %d",&a,&b,&c,&e,&f);
        if(c){
            g[a][b]=e;
            h[a][b]=f;
        }
        else{
            g[a][b]=g[b][a]=e;
            h[a][b]=h[b][a]=f;
        }
    }
    cin>>src>>dst;
    dijstra1(src);
    dfs1(dst);
    Min=inf;
    dijstra2(src);
    dfs2(dst);
    bool f=true;
    if(ans2.size()!=ans1.size())f=false;
    if(ans1.size()==ans2.size()){
        for(int i=0;i<ans1.size();i++){
            if(ans1[i]!=ans2[i]){
                f=false;
                break;
            }
        }
    }
    if(f){
        printf("Distance = %d; Time = %d: %d",d1[dst],d2[dst],src);
        for(int i=ans1.size()-2;i>=0;i--)printf(" -> %d",ans1[i]);
    }
    else{
        printf("Distance = %d: %d",d1[dst],ans1[ans1.size()-1]);
        for(int i=ans1.size()-2;i>=0;i--)printf(" -> %d",ans1[i]);
        printf("\n");
        printf("Time = %d: %d",d2[dst],ans2[ans2.size()-1]);
        for(int i=ans2.size()-2;i>=0;i--)printf(" -> %d",ans2[i]);
        printf("\n");
    }
    return 0;
}
*/
