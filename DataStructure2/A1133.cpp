//
//  A1133.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/27.
//  Copyright © 2020 none. All rights reserved.
//  11:30 11:38
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <stack>
#include <queue>
#include <algorithm>
#include <unordered_map>
using namespace std;
struct node{
    int x,addr,next;
    bool f=false;
}a[100005];
int main(){
    int h,n,k,addr,next,x;
    vector<node> v;
    cin>>h>>n>>k;
    for(int i=0;i<n;i++){
        scanf("%d %d %d",&addr,&x,&next);
        a[addr].addr=addr;
        a[addr].x=x;
        a[addr].next=next;
    }
    for(int i=h;i!=-1;i=a[i].next){
        if(a[i].x<0){
            a[i].f=true;
            v.push_back(a[i]);
        }
    }
    for(int i=h;i!=-1;i=a[i].next){
        if(!a[i].f && a[i].x<=k){
            a[i].f=true;
            v.push_back(a[i]);
        }
    }
    for(int i=h;i!=-1;i=a[i].next){
        if(!a[i].f)v.push_back(a[i]);
    }
    if(v.size()){
        for(int i=0;i<v.size()-1;i++)
            printf("%05d %d %05d\n",v[i].addr,v[i].x,v[i+1].addr);
        printf("%05d %d -1\n",v.back().addr,v.back().x);
    }
    return 0;
}*/
