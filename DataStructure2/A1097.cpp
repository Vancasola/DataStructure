//
//  A1097.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/23.
//  Copyright © 2020 none. All rights reserved.
//  10:00 10:12
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <unordered_map>
#include <set>
using namespace std;
struct node{
    int x,addr,next;
}a[100005];
int main(){
    int h,addr,x,next,n;
    set<int> s;
    vector<node> b,c;
    cin>>h>>n;
    for(int i=0;i<n;i++){
        scanf("%d %d %d",&addr,&x,&next);
        a[addr].addr=addr;
        a[addr].x=x;
        a[addr].next=next;
    }
    for(int i=h;i!=-1;i=a[i].next){
        int t=abs(a[i].x);
        if(s.find(t)==s.end()){
            s.insert(t);
            b.push_back(a[i]);
        }
        else{
            c.push_back(a[i]);
        }
    }
    if(b.size()){
        for(int i=0;i<b.size()-1;i++)
            printf("%05d %d %05d\n",b[i].addr,b[i].x,b[i+1].addr);
        printf("%05d %d -1\n",b[b.size()-1].addr,b[b.size()-1].x);
    }
    if(c.size()){
        for(int i=0;i<c.size()-1;i++)
            printf("%05d %d %05d\n",c[i].addr,c[i].x,c[i+1].addr);
        printf("%05d %d -1\n",c[c.size()-1].addr,c[c.size()-1].x);
    }
    
    return 0;
}
*/
