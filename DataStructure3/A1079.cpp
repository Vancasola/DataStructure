//
//  A1079.cpp
//  DataStructure
//
//  Created by vancasola on 2020/4/12.
//  Copyright © 2020 none. All rights reserved.
//
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <stack>
#include <unordered_map>
using namespace std;
double p,r,total=0.0,m;
unordered_map<int, double> mp;
int n,k,t;
vector<int> v[100005];
void dfs(int x,int sum){
    if(!v[x].size()){
        double t=mp[x]*p*pow(1+r*0.01,sum);
        total+=t;
        return;
    }
    for(int i=0;i<v[x].size();i++){
        dfs(v[x][i],sum+1);
    }
}
int main(){
    cin>>n>>p>>r;
    for(int i=0;i<n;i++){
        scanf("%d",&k);
        if(!k){
            scanf("%lf",&m);
            mp[i]=m;
            continue;
        }
        for(int j=0;j<k;j++){
            scanf("%d",&t);
            v[i].push_back(t);
        }
    }
    dfs(0,0);
    printf("%.1lf",total);
    return 0;
}
*/
