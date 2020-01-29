//
//  A1090.cpp
//  DataStructure
//
//  Created by vancasola on 2020/1/29.
//  Copyright © 2020 none. All rights reserved.
//  5:10 5:28
/*
#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;
int n,num=0;
double p,r,m=0.0;
vector<vector<int>> v(100010,vector<int>());
void dfs(int x,double times){
    if(!v[x].size()){
        double t=times*p;
        if(m==t){
            num++;
        }else if(t>m){
            m=t;
            num=1;
        }
        return;
    }
    for(int i=0;i<v[x].size();i++){
        dfs(v[x][i],times*(1+r));
    }
}
int main(){
    cin>>n>>p>>r;
    r/=100;
    int t;
    int root;
    for(int i=0;i<n;i++){
        scanf("%d",&t);
        if(t==-1)root=i;
        else v[t].push_back(i);
    }
    dfs(root, 1.0);
    printf("%.2f %d",m,num);
    return 0;
}
*/
