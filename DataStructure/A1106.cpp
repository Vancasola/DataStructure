//
//  A1106.cpp
//  DataStructure
//
//  Created by vancasola on 2020/1/29.
//  Copyright © 2020 none. All rights reserved.
//  5:32 5:43
/*
#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;
int n,k,id,num=1;
double p,r;
double Min=9999999;
vector<vector<int>> v(100010,vector<int>());
void dfs(int x,double times){
    if(!v[x].size()){
        double t=p*times;
        if(t==0.0)return;
        if(t==Min){
            num++;
        }
        else if(t<Min){
            Min=t;
            num=1;
        }
        return ;
    }
    for(int i=0;i<v[x].size();i++)
        dfs(v[x][i],times*(1+r));
    return ;
}
int main(){
    cin>>n;
    cin>>p>>r;
    r/=100;
    for(int i=0;i<n;i++){
        scanf("%d",&k);
        if(k){
            for(int j=0;j<k;j++){
                scanf("%d",&id);
                v[i].push_back(id);
            }
        }
    }
    dfs(0,1);
    printf("%.4lf %d",Min,num);
    return 0;
}
*/
