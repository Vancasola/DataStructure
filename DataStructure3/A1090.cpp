//
//  A1090.cpp
//  DataStructure
//
//  Created by vancasola on 2020/4/6.
//  Copyright © 2020 none. All rights reserved.
//  3:14  3:23
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <stack>
#include <unordered_map>
using namespace std;
int n,t,root,num=0;
double p,r,h=-1;
vector<int> v[100005];
void dfs(int x,int sum){
    if(!v[x].size()){
        double t=p*pow(1+r*0.01,sum);
        if(t>h){
            h=t;
            num=1;
        }
        else if(t==h)num++;
        return;
    }
    for(int i=0;i<v[x].size();i++){
        dfs(v[x][i],sum+1);
    }
}
int main(){
    cin>>n>>p>>r;
    for(int i=0;i<n;i++){
        scanf("%d",&t);
        if(t!=-1)v[t].push_back(i);
        else root=i;
    }
    dfs(root,0);
    printf("%.2lf %d",h,num);
    return 0;
}
*/
