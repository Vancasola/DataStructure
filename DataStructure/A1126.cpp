//
//  A1126.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/3.
//  Copyright © 2020 none. All rights reserved.
//  7:58 8:13 8:22
/*
#include <stdio.h>
#include <iostream>
#include <set>
#include <vector>
using namespace std;
vector<int> d[505];
bool v[505]={false};
void dfs(int x){
    v[x]=true;
    for(int i=0;i<d[x].size();i++){
        if(!v[d[x][i]])dfs(d[x][i]);
    }
}
int main(){
    int n,m;
    int a[510]={0},x,y;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        scanf("%d%d",&x,&y);
        a[x]++;
        a[y]++;
        d[x].push_back(y);
        d[y].push_back(x);
    }
    int even=0;
    dfs(1);
    bool f=false;
    for(int i=1;i<=n;i++){
        if(i==n)printf("%d\n",a[i]);
        else printf("%d ",a[i]);
        if(a[i]%2!=0)even++;
        if(!v[i])f=true;
    }
    if(f){printf("Non-Eulerian");return 0;}
    if(!n)printf("Eulerian");
    if(!even)printf("Eulerian");
    else if(even==2)printf("Semi-Eulerian");
    else printf("Non-Eulerian");
    return 0;
}
*/
