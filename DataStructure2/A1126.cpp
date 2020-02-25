//
//  A1126.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/25.
//  Copyright © 2020 none. All rights reserved.
//  9:54 10:09 11:15 11:18
/*
#include <stdio.h>
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
vector<int> v[505];
int n,m,a,b,sum=0;
bool vis[505]={false};
void dfs(int x){
    vis[x]=true;
    for(int i=0;i<v[x].size();i++){
        if(!vis[v[x][i]])dfs(v[x][i]);
    }
}
int main(){
    cin>>n>>m;
    for(int i=0;i<m;i++){
        scanf("%d %d",&a,&b);
        v[a].push_back(b);
        v[b].push_back(a);
    }
    bool f=true;
    dfs(1);
    for(int i=1;i<=n;i++){
        if(v[i].size()%2)sum++;
        if(!vis[i])f=false;
        if(i!=n)printf("%d ",v[i].size());
        else printf("%d\n",v[i].size()) ;
    }
    if(f&&!sum)printf("Eulerian");
    else if(f&&sum==2)printf("Semi-Eulerian");
    else printf("Non-Eulerian");
    return 0;
}

*/
