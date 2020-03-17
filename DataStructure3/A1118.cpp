//
//  A1118.cpp
//  DataStructure
//
//  Created by vancasola on 2020/3/17.
//  Copyright © 2020 none. All rights reserved.
//  3:51 4:06
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <iostream>
#include <cmath>
using namespace std;
const int maxn=10005;
int father[maxn]={0};
bool vis[maxn]={false};
void init(){
    for(int i=0;i<maxn;i++){
        father[i]=i;
    }
}
int findfather(int x){
    while(x!=father[x]){
        x=father[x];
    }
    return x;
}
void un(int a,int b){
    int fa=findfather(a);
    int fb=findfather(b);
    father[fb]=fa;
}
int main(){
    int n,m,k,t,x,f,a,b;
    init();
    cin>>n;
    for(int i=0;i<n;i++){
        scanf("%d",&k);
        if(k){
            scanf("%d",&x);
            vis[x]=true;
            for(int j=0;j<k-1;j++){
                scanf("%d",&t);
                vis[t]=true;
                un(x,t);
            }
        }
    }
    int cnt=0,sum=0;
    for(int i=0;i<maxn;i++){
        if(vis[i]){
            sum++;
            f=findfather(i);
            if(i==f)cnt++;
            father[i]=f;
        }
    }
    cin>>m;
    printf("%d %d\n",cnt,sum);
    for(int i=0;i<m;i++){
        scanf("%d %d",&a,&b);
        if(findfather(a)==findfather(b))printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
*/
