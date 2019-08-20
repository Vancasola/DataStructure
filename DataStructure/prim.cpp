//
//  prim.cpp
//  DataStructure
//
//  Created by vancasola on 2019/8/20.
//  Copyright © 2019 none. All rights reserved.
//
/*
#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;
const int MAXN = 510, INF=0x3fffffff;
int n,e,a,b,w;
int d[MAXN];
int G[MAXN][MAXN];
int vis[MAXN] ={false};
int prim(int s)
{
    fill(d,d+MAXN,INF);
    d[s] = 0;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        int u=-1,MIN = INF;
        for(int j=0;j<n;j++)
        {
            if(vis[j]==false&&d[j]<MIN)
            {
                MIN = d[j];
                u=j;
            }
        }
        if(u==-1)return -1;
        vis[u] = true;
        ans += d[u];
        for(int v=0;v<n;v++)
        {
            if(vis[v]==false&&G[u][v]!=INF&&d[v]>G[u][v])
            {
                d[v] = G[u][v];
            }
        }
    }
    return ans;
}
 */
/*
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
const int MAXN = 510, INF = 0x3fffffff;
int n,e,a,b,w;
bool vis[MAXN] = {false};
int d[MAXN] ;
struct node
{
    int v,dis;
    node(int _v,int _dis):v(_v),dis(_dis){}
    node(){}
};
vector<node> adj[MAXN];
int prim(int s)
{
    fill(d,d+MAXN,INF);
    d[s] = 0;
    int ans=0;
    int dis;
    for(int i=0;i<n;i++)
    {
        int MIN = INF,u = -1;
        for(int j=0;j<n;j++)
        {
            if(vis[j]==false&&d[j]<MIN)
            {
                u = j;
                MIN = d[j];
            }
        }
        if(u==-1)return -1;
        vis[u] = true;
        ans+=d[u];
        for(int k=0;k<adj[u].size();k++)
        {
            int v = adj[u][k].v;
            dis = adj[u][k].dis;
            if(vis[v] == false&&d[v]>dis)
            {
                d[v] = dis;
            }
        }
    }
    return ans;
}
int main()
{
    cin>>n>>e;
    for(int i=0;i<e;i++)
    {
        cin>>a>>b>>w;
        adj[a].push_back(node(b,w));
        adj[b].push_back(node(a,w));
    }
    cout<<prim(0);
    return 0;
}
 */
/*
6 10
0 1 4
0 4 1
0 5 2
1 2 6
1 5 3
2 3 6
2 5 5
3 4 4
3 5 5
4 5 3
*/
