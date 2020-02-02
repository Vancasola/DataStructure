//
//  A1146.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/2.
//  Copyright © 2020 none. All rights reserved.
//  5:43 6:15
/*
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
const int maxn=1010;
vector<int> in[maxn];
vector<int> ans;
bool vis[maxn]={false};
int n,m,k;
int main(){
    cin>>n>>m;
    int a,b;
    for(int i=0;i<m;i++){
        scanf("%d %d",&a,&b);
        in[b].push_back(a);
    }
    cin>>k;
    for(int i=0;i<k;i++){
        bool f=false;
        fill(vis,vis+maxn,false);
        for(int k=0;k<n;k++){
            scanf("%d",&a);
            if(!f){
                vis[a]=true;
                for(int j=0;j<in[a].size();j++){
                    if(!vis[in[a][j]]){
                        f=true;
                        ans.push_back(i);
                        break;
                    }
                }
            }
        }
    }
    if(ans.size()){
        for(int i=0;i<ans.size()-1;i++)
            printf("%d ",ans[i]);
        printf("%d",ans[ans.size()-1]);
    }
    return 0;
}
*/
