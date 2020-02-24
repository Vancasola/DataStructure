//
//  A1106.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/24.
//  Copyright © 2020 none. All rights reserved.
//  10:02 10:15 10:23 10:28
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
#include <cmath>
#include <unordered_map>
using namespace std;
int n,t,k,num=0;;
double p,r,Min=99999999;
vector<int> v[100005];
void dfs(int x,int cnt){
    if(v[x].size()==0)
    {
        double x=p*pow(1+0.01*r,cnt);
        //printf("%.4lf\n",x);
        if(x<Min){
            Min=x;
            num=1;
        }
        else if(x==Min){
            num++;
        }
        return ;
    }
    for(int i=0;i<v[x].size();i++){
        dfs(v[x][i],cnt+1);
    }
}
int main(){
    cin>>n>>p>>r;
    for(int i=0;i<n;i++){
        scanf("%d",&k);
        for(int j=0;j<k;j++){
            scanf("%d",&t);
            v[i].push_back(t);
        }
    }
    dfs(0,0);
    printf("%.4lf %d",Min,num);
    return 0;
}
*/
