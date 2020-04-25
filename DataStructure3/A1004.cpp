//
//  A1004.cpp
//  DataStructure
//
//  Created by vancasola on 2020/4/25.
//  Copyright © 2020 none. All rights reserved.
//
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <iostream>
#include <map>
using namespace std;
vector<int> v[105],ans;
void layerorder(){
    queue<int> q,p;
    q.push(1);
    int x;
    while(!q.empty()){
        p=q;
        int sum=0;
        while(!q.empty()){
            if(!v[q.front()].size())sum++;
            q.pop();
        }
        ans.push_back(sum);
        while(!p.empty()){
            x=p.front();
            for(int i=0;i<v[x].size();i++)
                q.push(v[x][i]);
            p.pop();
        }
        
    }
}
int main()
{
    int n,m,id,k,t;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        scanf("%d %d",&id,&k);
        for(int j=0;j<k;j++){
            scanf("%d",&t);
            v[id].push_back(t);
        }
    }
    layerorder();
    for(int i=0;i<ans.size();i++){
        if(i)printf(" %d",ans[i]);
        else printf("%d",ans[i]);
    }
    return 0;
}
*/
