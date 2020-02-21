//
//  A1075.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/21.
//  Copyright © 2020 none. All rights reserved.
//  10:31 11:08
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <queue>
using namespace std;
int sc[7]={0};
int n,m,k;
struct node{
    int id,r,sum=0,cnt=0;
    int s[7];
    bool f=false;
}a[10005];
bool cmp(const node& a,const node&b){
    return a.sum>b.sum;
}
bool cmp2(const node&a,const node& b){
    if(a.f!=b.f)return a.f>b.f;
    else if(a.r!=b.r)return a.r<b.r;
    else if(a.cnt!=b.cnt)return a.cnt>b.cnt;
    else return a.id<a.id;
}
int main(){
    cin>>n>>m>>k;
    int id,index,score;
    for(int i=1;i<=m;i++){
        scanf("%d",&sc[i]);
    }
    for(int i=0;i<=n;i++){
        fill(a[i].s,a[i].s+7,-1);
    }
    for(int i=0;i<k;i++){
        scanf("%d %d %d",&id,&index,&score);
        a[id].id=id;
        if(score==-1 && a[id].s[index]==-1)a[id].s[index]=0;
        else if(a[id].s[index]<score){
            a[id].f=true;
            a[id].s[index]=score;
        }
    }
    for(int i=1;i<=n;i++)
    {
        int cnt=0,sum=0;
        for(int j=1;j<=m;j++){
            if(a[i].s[j]==sc[j])cnt++;
            if(a[i].s[j]!=-1)sum+=a[i].s[j];
        }
        a[i].cnt=cnt;
        a[i].sum=sum;
    }
    sort(a+1,a+n+1,cmp);
    int r=1;
    a[1].r=1;
    for(int i=2;i<=n;i++){
        if(a[i].sum!=a[i-1].sum){
            r=i;
        }
        a[i].r=r;
    }
    sort(a+1,a+n+1,cmp2);
    for(int i=1;i<=n;i++){
        if(!a[i].f)continue;
        printf("%d %05d %d",a[i].r,a[i].id,a[i].sum);
        for(int j=1;j<=m;j++){
            if(a[i].s[j]==-1)printf(" -");
            else printf(" %d",a[i].s[j]);
        }
        printf("\n");
    }
    return 0;
}*/
/*
1 00002 63 20 25 - 18
2 00005 42 20 0 22 -
2 00007 42 - 25 - 17
2 00001 42 18 18 4 2
5 00004 40 15 0 25 -
*/
