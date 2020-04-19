//
//  A1126.cpp
//  DataStructure
//
//  Created by vancasola on 2020/4/17.
//  Copyright © 2020 none. All rights reserved.
//
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
#include <iostream>
#include <cmath>
using namespace std;
bool vis[505]={false};
int n,k,a,b;
vector<int> v[505];
void dfs(int x){
    vis[x]=true;
    if(!v[x].size()){
        return;
    }
    for(int i=0;i<v[x].size();i++){
        if(!vis[v[x][i]])dfs(v[x][i]);
    }
}
int main(){
    cin>>n>>k;
    for(int i=0;i<k;i++){
        scanf("%d %d",&a,&b);
        v[b].push_back(a);
        v[a].push_back(b);
    }
    int sum=0;
    for(int i=1;i<=n;i++)
        if(!vis[i]){
            dfs(i);
            sum++;
        }
    int x=0;
    for(int i=1;i<=n;i++){
        if(i<=n-1)printf("%d ",v[i].size());
        else printf("%d\n",v[i].size());
        if(v[i].size()%2)x++;
    }
    if(sum==1&&!x)printf("Eulerian\n");
    else if(sum==1&&x==2)printf("Semi-Eulerian\n");
    else printf("Non-Eulerian\n");
    return 0;
}
*/
 
