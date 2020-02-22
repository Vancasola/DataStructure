//
//  A1094.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/22.
//  Copyright © 2020 none. All rights reserved.
//  3:47 4:00
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <queue>
using namespace std;
vector<int> v[105];
int n,m;
int id,k,t;
int Max=-1,g=0;
void bfs(int x){
    queue<int> q,p;
    q.push(x);
    int cnt=0;
    while(!q.empty()){
        cnt++;
        p=q;
        while(!q.empty())q.pop();
        int sum=0;
        while(!p.empty()){
            sum++;
            x=p.front();
            p.pop();
            for(int i=0;i<v[x].size();i++){
                q.push(v[x][i]);
            }
        }
        if(sum>Max){
            Max=sum;
            g=cnt;
        }
    }
}
int main(){
    cin>>n>>m;
    for(int i=0;i<m;i++){
        scanf("%d %d",&id,&k);
        for(int j=0;j<k;j++)
        {
            scanf("%d",&t);
            v[id].push_back(t);
        }
    }
    bfs(1);
    printf("%d %d",Max,g);
    return 0;
}
*/
