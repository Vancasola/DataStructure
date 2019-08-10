//
//  graph.cpp
//  DataStructure
//
//  Created by vancasola on 2019/8/8.
//  Copyright © 2019 none. All rights reserved.
//
/*
#include <stdio.h>
#include<vector>
using namespace std;
 */
/*
int n=0;
const int maxn=1000,inf = 999999;
int G[maxn][maxn];
bool vis[maxn]={false};
void DFS(int x,int depth)
{
    vis[x] = true;
    for(int i=0;i<n;i++)
    {
        if(vis[maxn]==false&&G[x][i]!=inf)
        {
            DFS(x,depth+1);
        }
    }
}
void DFSTrave()
{
    for(int i=0;i<n;i++)
    {
        if(vis[i]==false)
        {
            DFS(i,0);
        }
    }
    return;
}*/
/*
int n;
const int maxn = 1000;
vector<int> Adj[maxn];
int vis[maxn] = {false};
void DFS(int x,int depth)
{
    vis[x]=true;
    int v;
    for(int i=0;i<Adj[x].size();i++)
    {
        v = Adj[x][i];
        if(vis[x]==false)
        {
            DFS(v,depth+1);
        }
    }
    return;
}
void DFSTrave()
{
    int i=0;
    for(i=0;i<n;i++)
    {
        if(vis[i]==false)
        {
            DFS(i,0);
        }
    }
    return;
}
int main()
{
    return 0;
}
*/
