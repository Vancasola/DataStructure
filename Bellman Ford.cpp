//
//  Bellman Ford.cpp
//  DataStructure
//
//  Created by vancasola on 2019/8/15.
//  Copyright © 2019 none. All rights reserved.
//

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
