//
//  A1090.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/22.
//  Copyright © 2020 none. All rights reserved.
//  10:23 10:32
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <cmath>
using namespace std;
int n,t;
double p,r,sum,Max=-1;
int num=0;;
vector<int> v[100005];
void dfs(int x,int cnt){
    if(v[x].size()==0){
        sum=pow(1+0.01*r,cnt)*p;
        if(sum>Max)
        {
            num=1;
            Max=sum;
        }
        else if (sum==Max){
            num++;
        }
    }
    for(int i=0;i<v[x].size();i++){
        dfs(v[x][i],cnt+1);
    }
}
int main(){
    cin>>n>>p>>r;
    int root=-1;
    for(int i=0;i<n;i++){
        scanf("%d",&t);
        if(t==-1)root=i;
        v[t].push_back(i);
    }
    dfs(root,0);
    printf("%.2lf %d",Max,num);
    return 0;
}
*/
