//
//  A1013.cpp
//  DataStructure
//
//  Created by vancasola on 2019/12/26.
//  Copyright © 2019 none. All rights reserved.
// 9:43 new 7:36 8:04
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <set>
#include <queue>
using namespace std;
vector<vector<int>> v(1010);
vector<bool> vis(1010);
int n,m,k;
int a,b;
int out;
void dfs(int x){
    vis[x]=true;
    for(int i=0;i<v[x].size();i++){
        int t=v[x][i];
        if(t==out)continue;
        if(!vis[t])dfs(t);
    }
    return;
}
int check(){
    fill(vis.begin(),vis.begin()+n+10,false);
    vis[out]=true;
    int sum=0;
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            dfs(i);
            sum++;
        }
    }
    return sum-1;
}
int main()
{
    cin>>n>>m>>k;
    for(int i=0;i<m;i++){
        scanf("%d %d",&a,&b);
        v[a].push_back(b);
        v[b].push_back(a);
    }
    for(int i=0;i<k;i++){
        scanf("%d",&a);
        out=a;
        cout<<check()<<endl;
    }
    return 0;
}
*/
/*
 3 2 3
 1 2
 1 3
 1 2 3
 */
