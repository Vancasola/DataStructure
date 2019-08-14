//
//  dijkstra.cpp
//  DataStructure
//
//  Created by vancasola on 2019/8/13.
//  Copyright © 2019 none. All rights reserved.
//
/*
#include <stdio.h>
#include <algorithm>
using namespace std;
const int MAXV = 1000, INF = 0x3FFFFFFF;
bool vis[MAXV] = {false};
int d[MAXV] = {INF};
int n, G[MAXV][MAXV];
void dijkstra(int s)
{
    fill(d,d+MAXV,INF);
    d[s] = 0;
    for(int i=0;i<MAXV;i++)
    {
        int u = -1, MIN = INF;
        for(int j=0;j<n;i++)
        {
            if(vis[j]==false&&d[j]<MIN)
            {
                u = j;
                MIN = d[j];
            }
        }
        if(u = -1)return;
        vis[u] = true;
        for(int v=0;v<n;v++)
        {
            if(vis[v]==false&&G[u][v]!=INF&&d[u]+G[u][v]<d[v])
            {
                d[v] = d[u] + G[u][v];
            }
        }
    }
}
*/
/*
#include <stdio.h>
#include <algorithm>
#include <iostream>
using namespace std;
const int MAXN = 1000, INF = 0x3FFFFFF;
int G[MAXN][MAXN];
int d[MAXN] = {INF};
bool vis[MAXN] = {false};
int n;
int pre[MAXN];
void dijsktra(int s)
{
    fill(d,d+MAXN,INF);
    d[s]=0;
    for(int i=0;i<n;i++)pre[i]=i;
    
    for(int i=0;i<n;i++)
    {
        int MIN = INF,u=-1;
        for(int j=0;j<n;j++)
        {
            if(vis[j]==false&&d[j]<MIN)
            {
                MIN = d[j];
                u = j;
            }
        }
        if(u==-1)return;
        vis[u]=true;
        for(int v=0;v<n;v++)
        {
            if(vis[v]==false&&G[u][v]!=INF&&d[u]+G[u][v]<d[v])
            {
                d[v] = d[u]+G[u][v];
                pre[v]=u;
                
            }
        }
    }
}
void DFS(int s,int v)
{
    if(v==s)
    {
        cout<<s<<' '<<endl;
        return;
    }
    DFS(s,pre[v]);
    //if(v!=pre[v])
    cout<<"pre:"<<pre[v]<<' '<<v<<' '<<endl;
}
int main()
{
    int e,s;
    int u,v,w;
    cin>>n>>e>>s;
    fill(G[0],G[0]+MAXN*MAXN,INF);
    for(int i=0;i<e;i++)
    {
        cin>>u>>v>>w;
        G[u][v] = w;
    }
    dijsktra(s);
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<< d[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<=n;i++)cout<<i<<":"<<pre[i]<<' ';
    cout<<endl;
    DFS(0,5);
    return 0;
}
*/
/*
6 8 0
0 1 1
0 3 4
0 4 4
1 3 2
2 5 1
3 2 2
3 4 3
4 5 3
 */

/*
5 6 0 2
1 2 1 5 3
0 1 1
0 2 2
0 3 1
1 2 1
2 4 1
3 4 1
*/
/*
#include <stdio.h>
#include <algorithm>
#include <iostream>
using namespace std;
const int MAXN = 510, INF = 0x3fffffff;
int G[MAXN][MAXN];
int nump[MAXN]={0},res[MAXN]={0},num[MAXN]={0};
int d[MAXN];
bool vis[MAXN] = {false};
int n,e,src,dst;
void dijsktra(int s)
{
    fill(vis,vis+n,false);
    fill(d,d+n,INF);
    d[s]=0;
    res[s]=nump[s];
    num[s]=1;
    for(int i=0;i<n;i++)
    {
        int MIN=INF,u = -1;
        for(int j=0;j<n;j++)
        {
            if(vis[j]==false&&d[j]<MIN)
            {
                u=j;
                MIN=d[j];
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
                    res[v] = res[u]+nump[v];
                    num[v] = num[u];
                }
                else if(d[u]+G[u][v]==d[v])
                {
                    if(res[u]+nump[v]>res[v])
                    {
                        res[v]=res[u]+nump[v];
                    }
                    num[v]+=num[u];
                }
                
            }
        }
        
    }
}
 
int main()
{
    cin>>n>>e>>src>>dst;
    int a,b,w;
    fill(G[0],G[0]+MAXN*MAXN,INF);
    for(int i=0;i<n;i++)
    {
        cin>>nump[i];
    }
    for(int i=0;i<e;i++)
    {
        cin>>a>>b>>w;
        G[a][b] = w;
        G[b][a] = w;
    }
    
    dijsktra(src);
    cout<<num[dst]<<' '<<res[dst]<<endl;
}
*/
