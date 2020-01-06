//
//  A1075.cpp
//  DataStructure
//
//  Created by vancasola on 2020/1/6.
//  Copyright © 2020 none. All rights reserved.
//
/*
#include <stdio.h>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
struct user
{
    int id;
    int p[5],total;
    int perfect;
    bool f;
}u[10001];
bool cmp(const user& a,const user& b)
{
    if(a.f!=b.f)return a.f>b.f;
    if(a.total!=b.total)return a.total>b.total;
    if(a.perfect!=b.perfect)return a.perfect>b.perfect;
    return a.id<b.id;
}
int main()
{
    int n,k,m,id,pr,g;
    int p[5]={0};
    cin>>n>>k>>m;
    for(int i=0;i<k;i++)
    {
        cin>>p[i];
    }
    for(int i=0;i<n;i++)
    {
        u[i].f=false;
        for(int j=0;j<k;j++)u[i].p[j]=-2;
        u[i].total=0;
        u[i].perfect=0;
    }
    
    for(int i=0;i<m;i++)
    {
        scanf("%d %d %d",&id,&pr,&g);
        u[id-1].id=id;
        if(u[id-1].p[pr-1]<g){u[id-1].p[pr-1]=g;if(g==-1)u[id-1].p[pr-1]=0;}
        if(g!=-1)u[id-1].f=true;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++)
        {
            if(u[i].p[j]>0)u[i].total+=u[i].p[j];
            if(u[i].p[j]==p[j])u[i].perfect++;
        }
    }
    sort(u, u+n,cmp);
    int r=1,total=0;
    printf("%d %05d %d",r,u[0].id,u[0].total);
    for(int j=0;j<k;j++)
    {
        if(u[0].p[j]==-2)printf(" -");
        else printf(" %d",u[0].p[j]);
    }
    printf("\n");
    for(int i=1;i<n;i++)
    {
        if(u[i].total!=u[i-1].total)r=i+1;
        
        if(u[i].f)
        {
            printf("%d %05d %d",r,u[i].id,u[i].total);
            for(int j=0;j<k;j++)
            {
                if(u[i].p[j]==-2)printf(" -");
                else printf(" %d",u[i].p[j]);
            }
            printf("\n");
        }
    }
    return 0;
}
*/
