//
//  A1087.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/17.
//  Copyright © 2020 none. All rights reserved.
//  11:24 11:54
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
const int maxn=205,inf=99999999;
int G[maxn][maxn];
int vis[maxn]={false};
unordered_map<string,int> p;
unordered_map<int,string> s;
int d[maxn],h[maxn]={0},n,m;
vector<int> pre[maxn];
string src,dst;
void dijstra(int x){
    fill(d,d+maxn,inf);
    d[x]=0;
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
                if(d[v]==d[u]+G[u][v]){
                    pre[v].push_back(u);
                }
                else if(d[v]>d[u]+G[u][v]){{
                    pre[v].clear();
                    pre[v].push_back(u);
                    d[v]=d[u]+G[u][v];
                }
            }
        }
    }
    }
}
int cnt=0,Max=-1;
vector<int> tmp,ans;
void dfs(int x){
    if(x==p[src]){
        tmp.push_back(x);
        cnt++;
        int sum=0;
        for(int i=0;i<tmp.size();i++){
            sum+=h[tmp[i]];
        }
        if(sum>Max){
            Max=sum;
            ans=tmp;
        }
        tmp.pop_back();
        return ;
    }
    tmp.push_back(x);
    for(int i=0;i<pre[x].size();i++){
        dfs(pre[x][i]);
    }
    tmp.pop_back();
}
int main(){
    for(int i=0;i<maxn;i++)fill(G[i],G[i]+maxn,inf);
    cin>>n>>m>>src;
    dst="ROM";
    s[0]=src;
    p[src]=0;
    string str,s1,s2;
    int t,a,b;
    for(int i=1;i<=n-1;i++){
        cin>>str>>t;
        p[str]=i;
        s[i]=str;
        h[i]=t;
    }
    for(int i=0;i<m;i++){
        cin>>s1>>s2>>t;
        a=p[s1];
        b=p[s2];
        G[a][b]=G[b][a]=t;
    }
    dijstra(p[src]);
    dfs(p[dst]);
    int cost=0;
    //for(int i=0;i<n;i++)printf("%d ",d[i]);
    for(int i=1;i<ans.size();i++){
        cost+=G[ans[i-1]][ans[i]];
    }
    printf("%d %d %d %d\n",cnt,cost,Max,Max/(ans.size()-1));
    for(int i=ans.size()-1;i>=0;i--){
        if(i)printf("%s->",s[ans[i]].c_str());
        else printf("%s",s[ans[i]].c_str());
    }
    return 0;
}
*/
