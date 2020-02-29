//
//  A1014.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/29.
//  Copyright © 2020 none. All rights reserved.
//  9:21
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
#include <unordered_map>
using namespace std;
struct node{
    int begin,t,finish=0;
};
int n,m,k,Q,t;
queue<int> q[20];
int find(){
    int Min=99999999,index=-1;
    for(int i=0;i<n;i++){
        if(q[i].size()<m && Min>q[i].size()){
            Min=q[i].size();
            index=i;
        }
    }
    return index;
}
int main(){
    vector<node> v;
    cin>>n>>m>>k>>Q;
    for(int i=0;i<k;i++){
        node t;
        scanf("%d",&t.t);
        t.t*=60;
        v.push_back(t);
    }
    int time=8*3600+1,p=0;
    while(1){
        int index=find();
        while(index!=-1&&p<k){
            q[index].push(p++);
            index=find();
        }
        bool f=false;
        for(int i=0;i<n;i++){
            if(q[i].empty()){continue;}
            else f=true;
            v[q[i].front()].t--;

            if(v[q[i].front()].t<=0){
                v[q[i].front()].finish=time;
                q[i].pop();
                if(!q[i].empty())v[q[i].front()].begin=time;
            }
        }
        if(!f)break;
        time++;
    }
    for(int i=0;i<Q;i++){
        cin>>t;
        t--;
        if(v[t].begin>=17*3600)printf("Sorry\n");
        else printf("%02d:%02d\n",v[t].finish/3600,v[t].finish%3600/60);
    }
    return 0;
}
*/g
