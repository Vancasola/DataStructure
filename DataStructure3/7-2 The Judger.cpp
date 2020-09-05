//
//  7-2 The Judger.cpp
//  DataStructure
//
//  Created by vancasola on 2020/8/14.
//  Copyright © 2020 none. All rights reserved.
//
/*
#include<iostream>
#include<cstdio>
#include<string>
#include<vector>
#include<stack>
#include<set>
#include<unordered_map>
#include<queue>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<cstdlib>
using namespace std;
const int maxn=1000005;
bool ans[maxn]={false},vis[maxn]={false},win[11]={false};
int n,m,t,a,b,diff;
vector<int> v[11],res,out;
int main(){
    cin>>a>>b;
    cin>>n>>m;
    if(n==0){
    printf("No winner.");
    return 0;
    }
    res.push_back(a);
    res.push_back(b);
    vis[a]=vis[b]=true;
    ans[abs(a-b)]=true;
    for(int i=0;i<n;i++){
        win[i]=true;
        for(int j=0;j<m;j++){
            scanf("%d",&t);
            v[i].push_back(t);
        }
    }
    int cnt=0;
    for(int i=0;i<m;i++){
        out.clear();
        if(cnt==n){
            printf("No winner.");
            return 0;
        }
        for(int j=0;j<n;j++){
            if(cnt==n)break;
            if(!win[j])continue;
            t=v[j][i];
            if(!ans[t]||vis[t]){
                win[j]=false;
                printf("Round #%d: %d is out.\n",i+1,j+1);
                cnt++;
                continue;
            }
            for(int k=0;k<res.size();k++){
                diff=abs(t-res[k]);
                //if(!ans[diff])res.push_back(diff);
                ans[diff]=true;
            }
            res.push_back(t);
            //ans[t]=true;
            vis[t]=true;
        }
    }
    if(cnt==n)printf("No winner.");
    else{
        printf("Winner(s):");
        for(int i=0;i<n;i++){
            if(win[i])printf(" %d",i+1);
        }
    }
    return 0;
}
*/
