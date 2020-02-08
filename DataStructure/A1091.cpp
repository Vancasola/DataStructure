//
//  A1091.cpp
//  DataStructure
//
//  Created by vancasola on 2020/1/31.
//  Copyright © 2020 none. All rights reserved.
//  10:29 11:15 11:44
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
struct node{
    int x,y,z;
    node(int a,int b,int c){
        x=a;
        y=b;
        z=c;
    }
};
int n,m,l,t;
int ans=0;
int v[61][1287][129];
bool vis[61][1287][129]={0};
void bfs(int x0,int y0,int z0){
    queue<node> q;
    q.push(node(x0,y0,z0));
    node p(x0,y0,z0);
    int x,y,z;
    vis[x0][y0][z0]=true;
    while(!q.empty()){
        p=q.front();
        q.pop();
        x=p.x;
        y=p.y;
        z=p.z;
        ans++;
        if(x-1>=0 && !vis[x-1][y][z] && v[x-1][y][z])
        {
            q.push(node(x-1,y,z));
            vis[x-1][y][z]=true;
        }
        if(x+1<l && !vis[x+1][y][z] && v[x+1][y][z])
        {
            q.push(node(x+1,y,z));
            vis[x+1][y][z]=true;
        }
        if(y-1>=0 && !vis[x][y-1][z] && v[x][y-1][z])
        {
            q.push(node(x,y-1,z));
            vis[x][y-1][z]=true;
        }
        if(y+1<n && !vis[x][y+1][z] && v[x][y+1][z])
        {
            q.push(node(x,y+1,z));
            vis[x][y+1][z]=true;
        }
        if(z-1>=0 && !vis[x][y][z-1] && v[x][y][z-1])
        {
            q.push(node(x,y,z-1));
            vis[x][y][z-1]=true;
        }
        if(z+1<m && !vis[x][y][z+1] && v[x][y][z+1])
        {
            q.push(node(x,y,z+1));
            vis[x][y][z+1]=true;
        }
    }
    return ;
}
int main(){
    cin>>n>>m>>l>>t;
    int x;
    for(int i=0;i<l;i++)
        for(int j=0;j<n;j++)
            for(int k=0;k<m;k++)
                scanf("%d",&v[i][j][k]);
    int res=0;
    for(int i=0;i<l;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<m;k++){
                ans=0;
                if(!vis[i][j][k] && v[i][j][k])bfs(i,j,k);
                else continue;
                if(ans>=t)res+=ans;
            }
        }
    }
    cout<<res<<endl;
    return 0;
}
*/
