//
//  A1030.cpp
//  DataStructure
//
//  Created by vancasola on 2019/8/15.
//  Copyright © 2019 none. All rights reserved.
//
/*
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;
const int MAXN = 510, INF = 0x3fffffff;
int N,M,S,D;
int a,b,w,c;
int G[MAXN][MAXN];
int d[MAXN] = {0};
bool vis[MAXN] = {false};
int weight[MAXN],cost[MAXN][MAXN]={0};
vector<int> pre[MAXN];
vector<int> tmp;
vector<int> ans;
vector<int> ansMIN;
int value=0,minv=INF,total=0,totalmin=0;
void dijkstra(int src)
{
    fill(d,d+MAXN,INF);
    //fill();
    d[src] = 0;
    for(int i=0;i<N;i++)
    {
        int MIN = INF, u = -1;
        for(int j=0;j<N;j++)
        {
            if(vis[j]==false&&d[j]<MIN)
            {
                u=j;
                MIN = d[j];
            }
        }
        if(u==-1)return;
        vis[u]=true;
        for(int v=0;v<N;v++)
        {
            if(vis[v]==false&&G[u][v]!=INF)
            {
                if(d[v]>d[u]+G[u][v])
                {
                    d[v] = d[u]+G[u][v];
                    pre[v].clear();
                    pre[v].push_back(u);
                }
                else if(d[v]==d[u]+G[u][v])
                {
                    pre[v].push_back(u);
                }
            }
        }
    }
}

void DFS(int v)
{
    if(v==S)
    {
        tmp.push_back(v);
        ans = tmp;
        value = 0;
        total =0;
        int last = D;
        for(int i=0;i<ans.size();i++)
        {
            value+=cost[ans[i]][last];
            if(ans[i]!=last)total+=G[ans[i]][last];
            last = ans[i];
        }
        if(value<minv)
        {
            minv = value;
            ansMIN = ans;
            totalmin =total;
        }
        ans.clear();
        tmp.pop_back();
        return;
    }
    tmp.push_back(v);
    for(int i=0;i<pre[v].size();i++)
    {
        DFS(pre[v][i]);
    }
    tmp.pop_back();
}
int main()
{
    fill(G[0],G[0]+MAXN*MAXN,INF);
    cin>>N>>M>>S>>D;
    for(int i=0;i<M;i++)
    {
        cin>>a>>b>>w>>c;
        G[a][b]=G[b][a]=w;
        cost[a][b]=cost[b][a]=c;
    }
    dijkstra(S);
    DFS(D);
    for(int i=ansMIN.size()-1;i>=0;i--)
    {
        cout<<ansMIN[i]<<' ';
    }
    //cout<<endl;
    //for(int i=0;i<N;i++)cout<<d[i]<<' ';
    //cout<<endl;
    cout<<total<<' '<<minv<<endl;
    return 0;
}
*/
//10:03-10:24-10:32
/*
#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<stack>
using namespace std;
const int MAXN = 510, INF = 0x3ffffff;
int G[MAXN][MAXN] ;
bool vis[MAXN]={false};
int d[MAXN];
int n,e,S,D;
int a,b,w,c;
vector<int> pre[MAXN];
vector<int> tmp;
int cost[MAXN][MAXN]={0};
void dijkstra(int src)
{
    fill(d,d+MAXN,INF);
    d[src]=0;
    for(int i=0;i<n;i++)
    {
        int MIN = INF, u = -1;
        for(int j=0;j<n;j++)
        {
            if(vis[j]==false&&d[j]<MIN)
            {
                MIN = d[j];
                u=j;
            }
        }
        if(u==-1)return;
        vis[u] = true;
        for(int v=0;v<n;v++)
        {
            if(vis[v]==false&&G[u][v]!=INF)
            {
                if(d[u]+G[u][v]<d[v])
                {
                    d[v] = d[u]+G[u][v];
                    pre[v].clear();
                    pre[v].push_back( u);
                }
                else if(d[u]+G[u][v]==d[v])
                {
                    pre[v].push_back( u);
                }
            }
        }
    }
}
vector<int> ans;
int MINCOST=INF;
void DFS(int u)
{
    if(u==S)
    {
        tmp.push_back(u);
        int tmpcost=0;
        for(int i=0;i<tmp.size()-1;i++)
        {
            tmpcost+= cost[tmp[i]][tmp[i+1]];
        }
        if(tmpcost<MINCOST)
        {
            ans = tmp;
            MINCOST = tmpcost;
        }
        tmp.pop_back();
        return;
    }
    tmp.push_back(u);
    for(int i=0;i<pre[u].size();i++)
    {
        DFS(pre[u][i]);
    }
    tmp.pop_back();
    return;
}
int main()
{
    fill(G[0],G[0]+MAXN*MAXN,INF);
    cin>>n>>e>>S>>D;
    for(int i=0;i<e;i++)
    {
        cin>>a>>b>>w>>c;
        G[a][b]=G[b][a]=w;
        cost[a][b]=cost[b][a]=c;
    }
    dijkstra(S);
    DFS(D);
    vector<int> res;
    for(int i=ans.size()-1;i>=0;i--)
    {
        cout<<ans[i]<<' ';
    }
    cout<<d[D]<<' '<<MINCOST;
    
    return 0;
}
*/
