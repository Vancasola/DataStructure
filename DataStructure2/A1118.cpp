//
//  A1118.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/25.
//  Copyright © 2020 none. All rights reserved.
//  3:30 3:50
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <queue>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
const int maxn=10005;
int father[maxn];
bool vis[maxn]={false};
void init(){
    for(int i=0;i<maxn;i++)father[i]=i;
}
int findfather(int x){
    while(x!=father[x]){
        x=father[x];
    }
    return x;
}
void un(int x,int y){
    int fx=findfather(x);
    int fy=findfather(y);
    father[fy]=fx;
}
void adjust(int x){
    int f=findfather(x);
    int t;
    while(x!=father[x]){
        t=father[x];
        father[x]=f;
        x=t;
    }
}
int main(){
    init();
    int n,k,t;
    cin>>n;
    for(int i=0;i<n;i++){
        scanf("%d",&k);
        vector<int> v;
        for(int j=0;j<k;j++){
            scanf("%d",&t);
            vis[t]=true;
            v.push_back(t);
        }
        for(int i=1;i<v.size();i++)un(v[0],v[i]);
    }
    int sum=0,cnt=0;
    for(int i=0;i<maxn;i++){
        if(vis[i]){
            adjust(i);
            sum++;
            if(i==findfather(i)){
                cnt++;
            }
        }
    }
    printf("%d %d\n",cnt,sum);
    cin>>n;
    int a,b,fa,fb;
    for(int i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        fa=findfather(a);
        fb=findfather(b);
        if(fa==fb)printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
*/
