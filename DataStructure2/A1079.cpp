//
//  A1079.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/21.
//  Copyright © 2020 none. All rights reserved.
//  8:26 8:43
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <queue>
#include <cmath>
using namespace std;
vector<int> v[100005];
double sum=0.0;
double p,r;
unordered_map<int,double> mp;
void dfs(int x,int cnt){
    if(mp.find(x)!=mp.end()){
        sum+=p*mp[x]*pow(1+r*0.01,cnt);
        return;
    }
    for(int i=0;i<v[x].size();i++){
        dfs(v[x][i],cnt+1);
    }
}
int main(){
    int n,k,t;
    cin>>n>>p>>r;
    for(int i=0;i<n;i++){
        scanf("%d",&k);
        if(k==0){
            double t;
            scanf("%lf",&t);
            mp[i]=t;
        }
        else {
            for(int j=0;j<k;j++){
                scanf("%d",&t);
                v[i].push_back(t);
            }
        }
    }
    dfs(0,0);
    printf("%.1lf",sum);
    return 0;
}
*/
