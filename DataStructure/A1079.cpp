//
//  A1079.cpp
//  DataStructure
//
//  Created by vancasola on 2020/1/29.
//  Copyright © 2020 none. All rights reserved.
//  4:33 4:56 5:06
/*
#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;
int n,k,id;
double p,r;
double sum=0.0;
struct node{
    int id,s;
    vector<int> v;
}m[100010];
void dfs(int x,double times){
    if(!m[x].v.size()){
        sum+=p*times*m[x].s;
        return ;
    }
    for(int i=0;i<m[x].v.size();i++)
        dfs(m[x].v[i],times*(1+r));
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
                m[i].v.push_back(id);
            }
        }
        else{
            scanf("%d",&m[i].s);
        }
    }
    dfs(0,1);
    printf("%.1f",sum);
    return 0;
}
*/
