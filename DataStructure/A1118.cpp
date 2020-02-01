//
//  A1118.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/1.
//  Copyright © 2020 none. All rights reserved.
//  10:01 10:22 10:26
/*
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <iostream>
#include <unordered_map>
using namespace std;
const int maxn=10010;
int father[maxn];
bool vis[maxn]={false};
void init(){
    for(int i=0;i<maxn;i++)
        father[i]=i;
}
int findfather(int x){
    while(x!=father[x])
        x=father[x];
    return x;
}
void adjust(int x){
    int z,r=findfather(x);
    while(x!=r){
        z=x;
        father[x]=r;
        x=father[z];
    }
}
void un(int a,int b){
    int fa,fb;
    fa=findfather(a);
    fb=findfather(b);
    father[fa]=fb;
}
int main(){
    int n,m,q,t,first=0;
    cin>>n;
    init();
    for(int i=0;i<n;i++){
        scanf("%d",&m);
        for(int j=0;j<m;j++){
            scanf("%d",&t);
            vis[t]=true;
            if(j==0){first=t;continue;}
            else un(first,t);
        }
    }
    cin>>q;
    unordered_map<int,int> mp;
    int cnt=0;
    for(int i=0;i<maxn;i++){
        if(vis[i]){
            adjust(i);
            int x=findfather(i);
            mp[x]++;
            cnt++;
        }
    }
    cout<<mp.size()<<' '<<cnt<<endl;
    int x,y;
    for(int i=0;i<q;i++){
        scanf("%d %d",&x,&y);
        if(findfather(x)==findfather(y))printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
*/
