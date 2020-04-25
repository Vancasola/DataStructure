//
//  A1052.cpp
//  DataStructure
//
//  Created by vancasola on 2020/4/25.
//  Copyright © 2020 none. All rights reserved.
//
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <unordered_map>
using namespace std;
struct node{
    int x;
    int addr,next;
}a[100005];
bool cmp(const node&a,const node&b){
    return a.x<b.x;
}
int main(){
    int n,h;
    int x,addr,next;
    vector<node> v;
    cin>>n>>h;
    for(int i=0;i<n;i++){
        scanf("%d %d %d",&addr,&x,&next);
        a[addr].addr=addr;
        a[addr].x=x;
        a[addr].next=next;
    }
    for(int i=h;i!=-1;i=a[i].next)
        v.push_back(a[i]);
    sort(v.begin(),v.end(),cmp);
    if(v.size())printf("%d %05d\n",v.size(),v[0].addr);
    else printf("0 -1\n");
    for(int i=0;i<v.size();i++){
        if(i<v.size()-1)printf("%05d %d %05d\n",v[i].addr,v[i].x,v[i+1].addr);
        else printf("%05d %d -1",v[i].addr,v[i].x);
    }
    return 0;
}
*/
