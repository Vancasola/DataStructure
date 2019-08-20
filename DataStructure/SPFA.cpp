//
//  SPFA.cpp
//  DataStructure
//
//  Created by vancasola on 2019/8/20.
//  Copyright © 2019 none. All rights reserved.
//
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <queue>
#include <set>
using namespace std;
const int MAXN = 510, INF = 0x3fffffff;
int n,e,S,D;
int weight[MAXN], w[MAXN]={0};
int d[MAXN],num[MAXN]={0},numroad[MAXN]={0};
bool inq[MAXN]={false};
set<int> pre[MAXN];
struct node
{
    int id,dis;
    node(int _id,int _dis):id(_id),dis(_dis){}
    node(){}
};
vector<node> adj[MAXN];
bool SPFA(int s)
{
    fill(d,d+MAXN,INF);
    d[s]=0;
    queue<int> q;
    q.push(s);
    w[s] = weight[s];
    numroad[s] = 1;
    int u;
    while(!q.empty())
    {
        u = q.front();
        q.pop();
        inq[u] = false;
        for(int i=0;i<adj[u].size();i++)
        {
            int v = adj[u][i].id,dis=adj[u][i].dis;
            if(d[v]>d[u]+dis)
            {
                d[v] = d[u] +dis;
                pre[v].clear();
                pre[v].insert(u);
                w[v]=w[u]+weight[v];
                numroad[v] = numroad[u];
                if(!inq[v])
                {
                    q.push(v);
                    inq[v]=true;
                    num[v]++;
                    if(num[v]>=n)return false;
                }
            }
            else if(d[v]==d[u]+dis)
            {
                if(w[v]<w[u]+weight[v])
                {
                    w[v]=w[u]+weight[v];
                }
                pre[v].insert(u);
                numroad[v] = 0;
                for(set<int>::iterator it=pre[v].begin();it!=pre[v].end();it++)
                {
                    numroad[v]+=numroad[*it];
                }
            }
        }
        
    }
    return true;
}
int main()
{
    cin>>n>>e>>S>>D;
    int a,b,we;
    for(int i=0;i<n;i++)
    {
        cin>>weight[i];
    }
    for(int i=0;i<e;i++)
    {
        cin>>a>>b>>we;
        adj[a].push_back(node(b,we));
        adj[b].push_back(node(a,we));
    }
    SPFA(S);
    //for(int i=0;i<n;i++)cout<<numroad[i]<<endl;
    cout<<numroad[D]<<' '<<w[D];
    return 0;
}
*/

