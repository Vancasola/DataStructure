//
//  A1122.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/3.
//  Copyright © 2020 none. All rights reserved.
//  7:26 7:56
/*
#include <stdio.h>
#include <set>
#include <algorithm>
#include <iostream>
using namespace std;
int main(){
    int n,m,k,e,a,b,v[205];
    set<int> s[205];
    cin>>n>>m;
    for(int i=0;i<m;i++){
        scanf("%d %d",&a,&b);
        s[a].insert(b);
        s[b].insert(a);
    }
    cin>>k;
    bool vis[205];
    int cnt[205]={0};
    for(int i=0;i<k;i++){
        scanf("%d",&e);
        fill(vis,vis+205,false);
        fill(cnt,cnt+205,0);
        bool f=false;
        for(int j=0;j<e;j++){
            scanf("%d",&v[j]);
            vis[v[j]]=true;
            cnt[v[j]]++;
            if(j==0)continue;
            if(s[v[j]].find(v[j-1])==s[v[j]].end())f=true;
        }
        if(f){printf("NO\n");continue;}
        if(v[0]!=v[e-1]){
            printf("NO\n");
            continue;
        }
        for(int j=1;j<=n;j++)
            if(!vis[j]){
                f=true;
                printf("NO\n");
                break;
            }
        if(!f){
            for(int j=1;j<=n;j++){
                if((j==v[0] && cnt[j]>2) ||(j!=v[0] && cnt[j]>1))
                {
                    f=true;
                    printf("NO\n");
                    break;
                }
            }
        }
        if(!f)printf("YES\n");
    }
    return 0;
}
*/
