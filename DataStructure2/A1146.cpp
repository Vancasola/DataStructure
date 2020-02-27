//
//  A1146.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/27.
//  Copyright © 2020 none. All rights reserved.
//  7:45 8:00
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <stack>
#include <queue>
#include <algorithm>
#include <unordered_map>
using namespace std;
int main(){
    int n,m,a,b,k,t;
    int c[1005];
    vector<int> v[1005];
    cin>>n>>m;
    for(int i=0;i<m;i++){
        scanf("%d %d",&a,&b);
        v[b].push_back(a);
    }
    bool vis[1005]={false};
    cin>>k;
    vector<int> ans;
    for(int i=0;i<k;i++){
        fill(vis,vis+n+5,false);
        for(int j=0;j<n;j++){
            scanf("%d",&c[j]);
        }
        bool f=true;
        for(int j=0;j<n;j++){
            for(int k=0;k<v[c[j]].size();k++){
                if(!vis[v[c[j]][k]])
                {
                    ans.push_back(i);
                    f=false;
                    break;
                }
            }
            vis[c[j]]=true;
            if(!f)break;
        }
    }
    for(int i=0;i<ans.size();i++)
    {
        if(i!=ans.size()-1)printf("%d ",ans[i]);
        else printf("%d",ans[i]);
    }
    return 0;
}
