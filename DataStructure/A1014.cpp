//
//  A1014.cpp
//  DataStructure
//
//  Created by vancasola on 2019/12/28.
//  Copyright © 2019 none. All rights reserved.
// 7:09 7:51 new 8:18 10:18
/*
#include <stdio.h>
#include <iostream>
#include <queue>
using namespace std;
int N,M,K,Q;
struct men{
    int begin,t,finish;
    bool s=false;
}m[1010];
queue<int> q[20];
int findmin(){
    int MIN=M,mi=-1;
    for(int i=0;i<N;i++){
        int t=q[i].size();
        if(t<MIN){
            MIN=t;
            mi=i;
        }
    }
    return mi;
}
int main()
{
    cin>>N>>M>>K>>Q;
    if(!M)M=1;
    int a;
    int timestamp=8*60+1;
    for(int i=1;i<=K;i++){
        scanf("%d",&m[i].t);
        m[i].s=true;
    }
    int i=1;
    while(1){
        int t=findmin();
        while(t!=-1 && i<=K){
            q[t].push(i);
            t=findmin();
            i++;
        }
        bool f=true;
        for(int j=0;j<N;j++){
            if(q[j].empty()){continue;}
            else f=false;
            int x=q[j].front();
            m[x].t--;
            if(!m[x].t){
                m[x].finish=timestamp;
                q[j].pop();
                if(!q[j].empty())m[q[j].front()].begin=timestamp;
            }
        }
        if(f)break;
        timestamp++;
    }
    for(int i=0;i<Q;i++){
        scanf("%d",&a);
        int t=m[a].finish,s=m[a].begin;
        if(s<17*60 )printf("%02d:%02d\n",t/60,t%60);
        else printf("Sorry\n");
    }
    return 0;
}
*/
