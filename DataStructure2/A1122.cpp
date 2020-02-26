//
//  A1122.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/26.
//  Copyright © 2020 none. All rights reserved.
//  9:44 9:57 10:02 10:05 10:44 10:54 
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <set>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
int main(){
    int n,m,k,h;
    int a,b,t;
    vector<int> v;
    set<int> g[205];
    cin>>n>>m;
    for(int i=0;i<m;i++){
        scanf("%d %d",&a,&b);
        g[a].insert(b);
        g[b].insert(a);
    }
    
    cin>>k;
    for(int i=0;i<k;i++){
        scanf("%d",&h);
        int cnt[205]={0};
        bool f=true;
        v.clear();
        for(int j=0;j<h;j++){
            scanf("%d",&t);
            cnt[t]++;
            v.push_back(t);
        }
        if(*v.begin()!=v.back()||cnt[v[0]]!=2){
            printf("NO\n");
            continue;
        }
        for(int j=1;j<h;j++){
            if(g[v[j]].find(v[j-1])==g[v[j]].end()){
                printf("NO\n");
                f=false;
                break;
            }
        }
        if(!f)continue;
        for(int j=1;j<=n;j++){
            if(!cnt[j]){
                printf("NO\n");
                f=false;
                break;
            }
            else if(j!=v[0] && j!=v.back()){
                if(cnt[j]!=1){
                    printf("NO\n");
                    f=false;
                    break;
                }
            }
        }
        if(f)
            printf("YES\n");
    }
    return 0;
}
*/
