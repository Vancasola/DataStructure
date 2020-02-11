//
//  A1004.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/11.
//  Copyright © 2020 none. All rights reserved.
//  11:28 11:41
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
vector<int> v[105],ans;
void layerorder(){
    queue<int> q,p;
    q.push(1);
    int x;
    while (!q.empty()) {
        p=q;
        int sum=0;
        while(!q.empty()){
            x=q.front();
            if(!v[x].size())sum++;
            q.pop();
        }
        ans.push_back(sum);
        while(!p.empty()){
            x=p.front();
            p.pop();
            for(int i=0;i<v[x].size();i++)
                q.push(v[x][i]);
        }
    }
}
int main(){
    int n,m,k,r,x;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        scanf("%d %d",&r,&k);
        for(int j=0;j<k;j++){
            scanf("%d",&x);
            v[r].push_back(x);
        }
    }
    layerorder();
    for(int i=0;i<ans.size();i++){
        if(i<ans.size()-1)printf("%d ",ans[i]);
        else printf("%d",ans[i]);
    }
    return 0;
}
*/
