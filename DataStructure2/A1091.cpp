//
//  A1091.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/19.
//  Copyright © 2020 none. All rights reserved.
//  6:37
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
int a[63][1290][130];
int m,n,l,th,t;
bool v[63][1290][130]={false};
int volumn=0;
struct node{
    int x,y,z;
    node(int c,int a,int b){
        x=a;y=b;z=c;
    }
};
void bfs(int z,int x,int y){
    queue<node> q;
    q.push(node(z,x,y));
    node tmp(z,x,y);
    v[z][x][y]=true;
    while(!q.empty()){
        tmp=q.front();
        q.pop();
        x=tmp.x;
        y=tmp.y;
        z=tmp.z;
        if(a[z][x][y])volumn++;
        if(z-1>=0 && !v[z-1][x][y] && a[z-1][x][y]){
            q.push(node(z-1,x,y));
            v[z-1][x][y]=true;
        }
         if(z+1<l && !v[z+1][x][y]&& a[z+1][x][y]){
            q.push(node(z+1,x,y));
             v[z+1][x][y]=true;
        }
         if(x-1>=0 && !v[z][x-1][y]&& a[z][x-1][y]){
            q.push(node(z,x-1,y));
             v[z][x-1][y]=true;
        }
         if(x+1<m && !v[z][x+1][y]&& a[z][x+1][y]){
            q.push(node(z,x+1,y));
             v[z][x+1][y]=true;
        }
         if(y-1>=0 && !v[z][x][y-1] && a[z][x][y-1]){
            q.push(node(z,x,y-1));
             v[z][x][y-1]=true;
        }
         if(y+1<n && !v[z][x][y+1]&& a[z][x][y+1]){
            q.push(node(z,x,y+1));
             v[z][x][y+1]=true;
        }
    }
}
int main(){
    cin>>m>>n>>l>>th;
    for(int i=0;i<l;i++)
        for(int j=0;j<m;j++)
            for(int k=0;k<n;k++){
                scanf("%d",&a[i][j][k]);
                v[i][j][k]=false;
                }
    int cnt=0;
    for(int i=0;i<l;i++)
        for(int j=0;j<m;j++)
            for(int k=0;k<n;k++)
                if(!v[i][j][k]&&a[i][j][k]){
                    volumn=0;
                    bfs(i,j,k);
                    if(volumn>=th)cnt+=volumn;
                }
    cout<<cnt;
    return 0;
}
*/
