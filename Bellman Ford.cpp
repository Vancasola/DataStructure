//
//  Bellman Ford.cpp
//  DataStructure
//
//  Created by vancasola on 2019/8/15.
//  Copyright © 2019 none. All rights reserved.
//
/*
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
const int MAXN = 1000, INF = 0x3fffffff;
int n, d[MAXN];
int e, src,dst,u,v,wei;
int weight[MAXN];
struct node
{
    int v,dis;
    node(int _v,int _dis):v(_v),dis(_dis){}
 
};
vector<node> adj[MAXN];
bool Bellman(int s)
{
    fill(d,d+MAXN,INF);
    d[s]=0;
    int v,dis;
    for(int i=0;i<n-1;i++)
    {
        for(int u=0 ;u<n;u++)
        {
            for(int j=0;j<adj[u].size();j++)
            {
                
                v = adj[u][j].v;
                dis = adj[u][j].dis;
                cout<<u<<' '<<v<<' '<<dis<<endl;
                if(d[u]+dis<d[v])
                {
                    d[v]=d[u]+dis;
                }
            }
        }
    }
    for(int u=0 ;u<n;u++)
    {
        for(int j=0;j<adj[u].size();j++)
        {
            v = adj[u][j].v;
            dis = adj[u][j].dis;
            if(d[u]+dis<d[v])
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    cin>>n>>e>>src>>dst;
    for(int i=0;i<n;i++)cin>>weight[i];
    for(int i=0;i<e;i++)
    {
        cin>>u>>v>>wei;
        adj[u].push_back(node(v,wei));
        adj[v].push_back(node(u,wei));
    }
    Bellman(src);
    //for(int i=0;i<n;i++)
    //    cout<<d[i]<<endl;
    
    //cout<<num[dst]<<' '<<w[dst]<<endl;
    return 0;
}
*/
/*
#include <iostream>
#include <vector>
#include <set>
using namespace std;
int n,e,S,D;
const int MAXN=510,INF=0x3fffffff;
int d[MAXN];
int num[MAXN],men[MAXN];
int weight[MAXN];

struct node
{
    int id,dis;
    node(int _id,int _dis):id(_id),dis(_dis){}
};
vector<node> adj[MAXN];
set<int> pre[MAXN];
void bellman(int s)
{
    fill(d,d+MAXN,INF);
    fill(num,num+MAXN,0);
    fill(men,men+MAXN,0);
    d[s] = 0;
    num[s]=1;
    men[s]=weight[s];
    for(int i=0;i<n-1;i++)
    {
        for(int u=0;u<n;u++)
        {
            for(int j=0;j<adj[u].size();j++)
            {
                int v = adj[u][j].id;
                int dis = adj[u][j].dis;
                if(d[v]>d[u]+dis)
                {
                    d[v]=d[u]+dis;
                    num[v]=num[u];
                    men[v] = men[u]+weight[v];
                    pre[v].clear();
                    pre[v].insert(u);
                }
                else if(d[v]==d[u]+dis)
                {
                    if(men[v]<men[u]+weight[v])men[v]=men[u]+weight[v];
                    pre[v].insert(u);
                    num[v]=0;
                    for(set<int>::iterator x=pre[v].begin();x!=pre[v].end();x++)
                    {
                        num[v]+=num[*x];
                    }
                }
            }
        }
    }
}
int main()
{
    cin>>n>>e>>S>>D;
    int a,b,w;
    for(int i=0;i<n;i++)
    {
        cin>>weight[i];
    }
    for(int i=0;i<e;i++)
    {
        cin>>a>>b>>w;
        adj[a].push_back(node(b,w));
        adj[b].push_back(node(a,w));
    }
    bellman(S);
    //for(int i=0;i<n;i++)cout<<d[i]<<endl;
    cout<<num[D]<<' '<<men[D];
    return 0;
}
*/
