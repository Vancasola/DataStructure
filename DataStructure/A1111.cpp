//
//  A1111.cpp
//  DataStructure
//
//  Created by visancasola on 2020/2/4.
//  Copyright © 2020 none. All rights reservised.
//  9:33 10:55
/*
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;
const int maxn=510,inf=999999;
int n,m,src,dst,G[maxn][maxn],H[maxn][maxn],d[maxn];
map<pair<int,int>,int> mp;
bool vis[maxn]={false};
int a,b,c,x,t,MIN=inf,MINtime=inf;
vector<int> pre1[maxn],pre2[maxn],tmp,ans,ans2;
void dijstra1(int s){
    fill(vis,vis+maxn,false);
    fill(d,d+maxn,inf);
    d[src]=0;
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
                if(!vis[v] && G[u][v]!=inf){
                    if(d[v]==d[u]+G[u][v])
                        pre1[v].push_back(u);
                    else if (d[v]>d[u]+G[u][v]){
                        d[v]=d[u]+G[u][v];
                        pre1[v].clear();
                        pre1[v].push_back(u);
                    }
                }
            }
    }
}
void dfs1(int x){
    if(x==src){
        tmp.push_back(x);
        int sum=0;
        for(int i=tmp.size()-2;i>=0;i--)
            sum+=H[tmp[i+1]][tmp[i]];
        if(sum<MIN){
            MIN=sum;
            ans=tmp;
        }
        else if(sum==MIN){
            if(tmp.size()<ans.size())
                ans=tmp;
        }
        tmp.pop_back();
        return;
    }
    tmp.push_back(x);
    for(int i=0;i<pre1[x].size();i++)
        dfs1(pre1[x][i]);
    tmp.pop_back();
}

void dijstra2(int s){
    fill(vis,vis+maxn,false);
    fill(d,d+maxn,inf);
    d[src]=0;
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
                if(!vis[v] && H[u][v]!=inf){
                    if(d[v]==d[u]+H[u][v]){
                        pre2[v].push_back(u);
                    }
                    else if (d[v]>d[u]+H[u][v]){
                        d[v]=d[u]+H[u][v];
                        pre2[v].clear();
                        pre2[v].push_back(u);
                    }
                }
            }
    }
}
void dfs2(int x){
    if(x==src){
        tmp.push_back(x);
        int sum=0;
        if(!ans2.size() ||ans2.size()>tmp.size()){
            ans2=tmp;
        }
        tmp.pop_back();
        return;
    }
    tmp.push_back(x);
    for(int i=0;i<pre2[x].size();i++){
        dfs2(pre2[x][i]);
    }
    tmp.pop_back();
}
int main(){
    for(int i=0;i<maxn;i++)fill(G[i],G[i]+maxn,inf);
    for(int i=0;i<maxn;i++)fill(H[i],H[i]+maxn,inf);
    cin>>n>>m;
    for(int i=0;i<m;i++){
        scanf("%d %d %d %d %d",&a,&b,&c,&x,&t);
        if(c){
            G[a][b]=x;
            H[a][b]=t;
        }
        else {
            G[a][b]=G[b][a]=x;
            H[a][b]=H[b][a]=t;
        }
    }
    cin>>src>>dst;
    dijstra1(src);
    dfs1(dst);
    tmp.clear();
    dijstra2(src);
    dfs2(dst);
    MINtime =0;
    for(int i=ans2.size()-2;i>=0;i--)
        MINtime+=H[ans2[i+1]][ans2[i]];
    int MINdis =0;
    for(int i=ans.size()-2;i>=0;i--)
        MINdis+=G[ans[i+1]][ans[i]];
    bool f=false;
    if(ans.size()!=ans2.size())f=true;
    else {
        for(int i=0;i<ans.size();i++){
            if(ans[i]!=ans2[i])
            {
                f=true;
                break;
            }
        }
    }
    if(f){
        printf("Distance = %d: %d",MINdis,ans[ans.size()-1]);
        for(int i=ans.size()-2;i>=0;i--)
            printf(" -> %d",ans[i]);
        printf("\n");
        printf("Time = %d: %d",MINtime,ans2[ans2.size()-1]);
        for(int i=ans2.size()-2;i>=0;i--)
            printf(" -> %d",ans2[i]);
        printf("\n");
    }
    else{
        printf("Distance = %d; Time = %d: %d",MINdis,MINtime,ans2[ans2.size()-1]);
        for(int i=ans2.size()-2;i>=0;i--)
            printf(" -> %d",ans2[i]);
        printf("\n");
    }
    return 0;
}
*/
