//
//  A1076.cpp
//  DataStructure
//
//  Created by vancasola on 2019/8/12.
//  Copyright © 2019 none. All rights reserved.
//
/*
#include <stdio.h>
#include <queue>
#include<iostream>
const int MAXN = 1010;
int G[MAXN][MAXN] = {0};
struct node
{
    int id;
    int layer;
};
int n,level=0;
using namespace std;
int BFS(int x)
{
    int vis[MAXN] = {false};
    queue<node> q;
    node N,next;
    N.id = x;
    N.layer = 0;
    q.push (N);
    vis[x] = true;
    int numlevel = 0;
    int num = -1;
    while(!q.empty())
    {
        N = q.front();
        num++;
        //cout<<"layer"<<N.layer<<' '<<"id:"<<N.id<<" num:"<<num<<endl;
        if(N.layer>level)
        {
            return num-1;
        }
        x = N.id;
        
        q.pop();
        for(int i=1;i<=n;i++)
        {
            if(G[x][i]>0)
            {
                if(vis[i]==false)
                {
                    next.id = i;
                    next.layer = N.layer+1;
                    q.push(next);
                    vis[i] = true;
                }
            }
        }
    }
    return num;
}
void BFSTrav(int post)
{
    cout<<BFS(post)<<endl;
}

int main()
{
    int follownum=0,follower=0;
    cin>>n>>level;
    for(int i=1;i<=n;i++)
    {
        cin>>follownum;
        for(int j=1;j<=follownum;j++)
        {
            cin>>follower;
            G[follower][i] = 1;
        }
        
    }
    //cout<<endl;
    //for(int i=1;i<=n;i++)
    //{
    //    for(int j=1;j<=n;j++)cout<<G[i][j]<<' ';
    //    cout<<endl;
    //        }
    int numperson,poster;
    cin>>numperson;
    for(int i=0;i<numperson;i++)
    {
        cin>>poster;
        BFSTrav(poster);
    }
    return 0;
}
*/
//10:10
/*
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
int N=0,L=0;
const int MAXN = 1010;
vector<int> a[MAXN];
int ly[MAXN];
bool vis[MAXN]={false};
int BFS(int u)
{
    queue<int> q;
    q.push(u);
    int num = 0;
    int layer=1;
    fill(ly,ly+N,1);
    fill(vis,vis+N,false);
    while(!q.empty())
    {
        q.front();
        cout<<q.front()<<' ';
        vis[q.front()]=true;
        if(ly[q.front()]>L)break;
        q.pop();
        num++;
        for(int i=0;i<a[u].size();i++)
        {
            if(vis[i]==false)
            {
            q.push(a[u][i]);
            ly[a[u][i]] = layer;
            }
        }
        layer++;
    }
    return num;
}
int main()
{
    cin>>N>>L;
    int m,t;
    for(int i=0;i<N;i++)
    {
        cin>>m;
        for(int j=0;j<m;j++)
        {
            cin>>t;
            ly[t] = 1;
            a[t].push_back(t);
        }
    }
    int K,u;
    cin>>K;
    for(int i=0;i<K-1;i++)
    {
        cin>>u;
        cout<<u<<' '<<BFS(u)<<' '<<endl;;
    }
    cin>>u;
    cout<<u<<' '<<BFS(u)<<' ';
    return 0;
}
*/
