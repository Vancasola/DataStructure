//
//  A1097.cpp
//  DataStructure
//
//  Created by vancasola on 2020/1/30.
//  Copyright © 2020 none. All rights reserved.
//  9:37 10:31
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <cmath>
#include <set>
using namespace std;
struct node{
    int addr,next,key;
}a[100010],b[100010];
int main(){
    int h,n,x,p=0;
    int addr,next,key;
    set<int> s;
    vector<node> r,ans;
    cin>>h>>n;
    for(int i=0;i<n;i++){
        cin>>addr>>key>>next;
        a[addr].addr=addr;
        a[addr].key=key;
        a[addr].next=next;
    }
    x=h;
    while(x!=-1){
        b[p].addr=a[x].addr;
        b[p].key=a[x].key;
        x=a[x].next;
        p++;
    }
    for(int i=0;i<p;i++){
        if(s.find(abs(b[i].key))!=s.end())
            r.push_back(b[i]);
        else if(s.find(abs(b[i].key))==s.end()){
            ans.push_back(b[i]);
            s.insert(abs(b[i].key));
        }
    }
    for(int i=0;i<ans.size()-1;i++)
        printf("%05d %d %05d\n",ans[i].addr,ans[i].key,ans[i+1].addr);
    printf("%05d %d -1\n",ans[ans.size()-1].addr,ans[ans.size()-1].key);
    if(r.size()>1){
        for(int i=0;i<r.size()-1;i++)
        printf("%05d %d %05d\n",r[i].addr,r[i].key,r[i+1].addr);
    }
    if(r.size())printf("%05d %d -1\n",r[r.size()-1].addr,r[r.size()-1].key);
    return 0;
}
*/
