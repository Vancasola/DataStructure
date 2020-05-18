//
//  A1097.cpp
//  DataStructure
//
//  Created by vancasola on 2020/5/17.
//  Copyright © 2020 none. All rights reserved.
//  8:00 8:11
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <set>
#include <unordered_map>
using namespace std;
struct node{
    int data,next,addr;
}a[100005];
int main(){
    int h,n,addr,data,next;;
    scanf("%d %d",&h,&n);
    for(int i=0;i<n;i++){
        scanf("%d %d %d",&addr,&data,&next);
        a[addr].addr=addr;
        a[addr].data=data;
        a[addr].next=next;
    }
    set<int> s;
    vector<node> v1,v2;
    for(int i=h;i!=-1;i=a[i].next){
        if(s.find(abs(a[i].data))==s.end()){
            v1.push_back(a[i]);
            s.insert(abs(a[i].data));
        }
        else {
            v2.push_back(a[i]);
        }
    }
    for(int i=0;i<v1.size();i++){
        if(i<v1.size()-1)printf("%05d %d %05d",v1[i].addr,v1[i].data,v1[i+1].addr);
        else printf("%05d %d %d",v1[i].addr,v1[i].data,-1);
        printf("\n");
    }
    for(int i=0;i<v2.size();i++){
        if(i<v2.size()-1)printf("%05d %d %05d",v2[i].addr,v2[i].data,v2[i+1].addr);
        else printf("%05d %d %d",v2[i].addr,v2[i].data,-1);
        printf("\n");
    }
    return 0;
}
*/
