//
//  A1076.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/20.
//  Copyright © 2020 none. All rights reserved.
//  11:02 11:20
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <queue>
using namespace std;
int n,l;
vector<int> v[1005];
bool vis[1005];
int bfs(int x){
    queue<int> p,q;
    fill(vis,vis+1005,false);
    q.push(x);
    vis[x]=true;;
    int sum=0;
    int layer=0;
    while(!q.empty()){
        p=q;
        if(layer>=l)break;
        while(!q.empty())q.pop();
        while(!p.empty()){
            x=p.front();
            p.pop();
            for(int i=0;i<v[x].size();i++){
                if(!vis[v[x][i]]){
                    q.push(v[x][i]);
                sum++;
                vis[v[x][i]]=true;
                }
            }
        }
        //cout<<sum<<endl;
        layer++;
    }
    return sum;
}
int main(){
    int k,t;
    cin>>n>>l;
    for(int i=1;i<=n;i++){
        scanf("%d",&k);
        for(int j=0;j<k;j++){
            scanf("%d",&t);
            v[t].push_back(i);
        }
    }
    cin>>k;
    for(int i=0;i<k;i++){
        scanf("%d",&t);
        cout<<bfs(t)<<endl;
    }
    return 0;
}
*/
