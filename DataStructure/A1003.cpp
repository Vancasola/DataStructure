//
//  A1003.cpp
//  DataStructure
//
//  Created by vancasola on 2019/8/14.
//  Copyright © 2019 none. All rights reserved.
//

/*
 #include <stdio.h>
 #include <algorithm>
 #include <iostream>
 using namespace std;
 const int MAXN=510,INF = 0x3fffffff;
 int G[MAXN][MAXN];
 bool vis[MAXN]={false};
 int n,e,src,dst;
 int w[MAXN]={0},num[MAXN]={0};
 int weight[MAXN]={0};
 int u,v,wei;
 int d[MAXN];
 void dijkstra(int src)
 {
 fill(vis,vis+n,false);
 fill(w,w+n,0);
 fill(d,d+MAXN,INF);
 w[src]=weight[src];
 num[src]=1;
 d[src]=0;
 
 for(int i=0;i<n;i++)
 {
 int MIN=INF, u=-1;
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
 if(d[v]>d[u]+G[u][v])
 {
 d[v] = d[u]+G[u][v];
 num[v] = num[u];
 w[v]=w[u]+weight[v];
 }
 else if(d[v]==d[u]+G[u][v])
 {
 if(w[u]+weight[v]>w[v])
 {
 w[v]=w[u]+weight[v];
 }
 num[v]+=num[u];
 }
 }
 }
 
 }
 return;
 }
 int main()
 {
 fill(G[0],G[0]+MAXN*MAXN,INF);
 cin>>n>>e>>src>>dst;
 for(int i=0;i<n;i++)cin>>weight[i];
 for(int i=0;i<e;i++)
 {
 cin>>u>>v>>wei;
 G[u][v]=G[v][u]=wei;
 }
 dijkstra(src);
 cout<<num[dst]<<' '<<w[dst]<<endl;
 return 0;
 }
 */
/*
#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
const int MAXN=510,INF = 0x3fffffff;
int G[MAXN][MAXN],d[MAXN];
int n,e,src,dst;
int u,v,wei;
int w[MAXN]={false};
int num[MAXN]={false};
int weight[MAXN];
bool vis[MAXN]={false};
vector<int> pre[MAXN];
vector<int> pretemp;
vector<int> ans;
void dijkstra(int src)
{
    fill(vis,vis+MAXN,false);
    fill(d,d+MAXN,INF);
    d[src]=0;
    for(int i=0;i<n;i++)
    {
        int u = -1, MIN = INF;
        for(int j=0;j<n;j++)
        {
            if(vis[j]==false&&d[j]<MIN)
            {
                MIN = d[j];
                u=j;
            }
        }
        if(u==-1)return;
        vis[u]=true;
        for(int v=0;v<n;v++)
        {
            if(vis[v]==false&&G[u][v]!=INF)
            {
                if(d[u]+G[u][v]<d[v])
                {
                    d[v] = d[u]+G[u][v];
                    pre[v].clear();
                    pre[v].push_back(u);
                }
                else if(d[u]+G[u][v]==d[v]){
                    pre[v].push_back(u);
                }
            }
            
        }
    }
    return;
}
int MAXV=0;
void DFS(int v)
{
    if(v==src)
    {
        pretemp.push_back(v);
        num[dst]++;
        ans=pretemp;
        int value=0;
        for(vector<int>::iterator it=ans.begin();it!=ans.end();it++)
        {
            value+=weight[*it];
        }
        if(value>=MAXV){MAXV = value;w[dst] = MAXV;}
        ans.clear();
        pretemp.pop_back();
        return;
    }
    pretemp.push_back(v);
    for(int i=0;i<pre[v].size();i++)
    {
        DFS(pre[v][i]);
    }
    pretemp.pop_back();
    
}
int main()
{
    fill(G[0],G[0]+MAXN*MAXN,INF);
    cin>>n>>e>>src>>dst;
    for(int i=0;i<n;i++)cin>>weight[i];
    for(int i=0;i<e;i++)
    {
        cin>>u>>v>>wei;
        G[u][v]=G[v][u]=wei;
    }
    dijkstra(src);
    //for(int i=0;i<n;i++)
    //    cout<<d[i]<<endl;
    DFS(dst);
    cout<<num[dst]<<' '<<w[dst]<<endl;
    return 0;
}
*/
/*
#include<iostream>
#include<stdio.h>
#include<map>
#include<vector>
using namespace std;
int N,E,S,D;
const int MAXN = 510,INF = 0x3fffffff;
int G[MAXN][MAXN];
int d[MAXN] = {0};
int weight[MAXN] = {0};
int vis[MAXN] = {false};
vector<int > pre[MAXN];
vector<int > tmp;
vector<int > ans;
int num=0,numperson=0;
void dijsktra(int src)
{
    fill(d,d+MAXN,INF);
    fill(vis,vis+MAXN,false);
    d[src] = 0;
    for(int i=0;i<N;i++)
    {
        int MIN = INF, u=-1;
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
                    d[v] = d[u] + G[u][v];
                    pre[v].clear();
                    pre[v].push_back(u);
                }else if(d[v]==d[u]+G[u][v])
                {
                    pre[v].push_back(u);
                }
            }
        }
    }
}
void DFS(int u)
{
    if(u==S)
    {
        int nump=0;
        tmp.push_back(u);
        num++;
        for(int i=tmp.size()-1;i>=0;i--)
        {
            cout<<tmp[i]<<' ';
            nump+=weight[tmp[i]];
        }
        cout<<endl;
        if(nump>numperson) numperson = nump;
        tmp.pop_back();
        return;
    }
    tmp.push_back(u);
    for(int i=0;i<pre[u].size();i++)
    {
        DFS(pre[u][i]);
    }
    tmp.pop_back();
}
int main()
{
    cin>>N>>E>>S>>D;
    fill(G[0],G[0]+MAXN*MAXN,INF);
    int a,b,w;
    for(int i=0;i<N;i++)
    {
        cin>>weight[i];
    }
    for(int i=0;i<E;i++)
    {
        cin>>a>>b>>w;
        G[a][b] = G[b][a] = w;
        
    }
    dijsktra(S);
    DFS(D);
    cout<<num<<' '<<numperson<<endl;
    return 0;
}
*/
