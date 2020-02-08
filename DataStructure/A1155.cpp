//
//  A1155.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/8.
//  Copyright © 2020 none. All rights reserved.
//  1:15 1:32
/*
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
int n,a[1010],type=-1;;
vector<int> v;
void display(vector<int> &v){
    for(int i=0;i<v.size()-1;i++)
        printf("%d ",v[i]);
    printf("%d\n",v[v.size()-1]);
}
int judge(vector<int> &v){
    bool big=true,small=true;
    for(int i=0;i<v.size()-1;i++){
        if(v[i+1]>v[i])big=false;
        else if(v[i+1]<v[i])small=false;
        if(!small && !big)return 0;
    }
    if(big)return 1;
    return 2;
}
void dfs(int r){
    v.push_back(a[r]);
    if(2*r+1>=n && 2*r+2>=n){
        display(v);
        int t=0;
        t=judge(v);
        if(type==-1)type=t;
        else if(type!=t)type=-2;
        v.pop_back();
        return;
    }
    if(2*r+2<n)dfs(2*r+2);
    if(2*r+1<n)dfs(2*r+1);
    v.pop_back();
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    dfs(0);
    if(type==0 || type==-2)printf("Not Heap\n");
    else if(type==1)printf("Max Heap\n");
    else printf("Min Heap\n");
    return 0;
}
*/ 
