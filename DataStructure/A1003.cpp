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
