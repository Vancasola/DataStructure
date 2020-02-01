//
//  A1133.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/1.
//  Copyright © 2020 none. All rights reserved.
//  11:01 11:10 11:29
/*
#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
struct node{
    int addr,data,next;
};
int main(){
    node a[100010];
    bool vis[100010]={false};
    int n,h,k;
    int addr,data,next;
    vector<node> v;
    scanf("%d %d %d",&h,&n,&k);
    for(int i=0;i<n;i++){
        scanf("%d %d %d",&addr,&data,&next);
        vis[addr]=true;
        a[addr].addr=addr;
        a[addr].data=data;
        a[addr].next=next;
    }
    int x=h;
    while(x!=-1){
        if(a[x].data<0)v.push_back(a[x]);
        x=a[x].next;
    }
    x=h;
    while(x!=-1){
        if(a[x].data>=0 && a[x].data<=k)v.push_back(a[x]);
        x=a[x].next;
    }
    x=h;
    while(x!=-1){
        if(a[x].data>k)v.push_back(a[x]);
        x=a[x].next;
    }
    for(int i=0;i<v.size()-1;i++)
        printf("%05d %d %05d\n",v[i].addr,v[i].data,v[i+1].addr);
    printf("%05d %d -1\n",v[v.size()-1].addr,v[v.size()-1].data);
    return 0;
}
*/
