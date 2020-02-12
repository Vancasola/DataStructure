//
//  A1080.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/12.
//  Copyright © 2020 none. All rights reserved.
//  9:46 10:17
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int n,m,k,t;
int q[105]={0};
struct student{
    int id,ge,gi,gf,r;
    vector<int> v;
}s[40005];
bool cmp(const student& a,const student &b){
    if(a.gf!=b.gf)return a.gf>b.gf;
    else if(a.ge!=b.ge)return a.ge>b.ge;
    return a.gi>b.gi;
}
bool cmp2(const student& a,const student &b){
    return a.id<b.id;
}
vector<student> a[105];
int main(){
    cin>>n>>m>>k;
    for(int i=0;i<m;i++)scanf("%d",&q[i]);
    for(int i=0;i<n;i++){
        scanf("%d %d",&s[i].ge,&s[i].gi);
        s[i].id=i;
        s[i].gf=(s[i].ge+s[i].gi)/2;
        for(int j=0;j<k;j++){
            scanf("%d",&t);
            s[i].v.push_back(t);
        }
    }
    sort(s,s+n,cmp);
    int r=1;
    s[0].r=1;
    for(int i=1;i<n;i++){
        if(s[i].gf!=s[i-1].gf)r=i+1;
        else if(s[i].gf==s[i-1].gf && s[i].ge!=s[i-1].ge)r=i+1;
        s[i].r=r;
    }
    int x;
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            x=s[i].v[j];
            if(a[x].size()<q[x]){
                a[x].push_back(s[i]);
                break;
            }
            else if(q[x]){
                //==0?
                int p=a[x].size()-1;
                if(a[x][p].r==s[i].r){
                    a[x].push_back(s[i]);
                    break;
                }
            }
        }
    }
    for(int i=0;i<m;i++){
        sort(a[i].begin(),a[i].end(),cmp2);
        for(int j=0;j<a[i].size();j++){
            if(j!=a[i].size()-1)printf("%d ",a[i][j].id);
            else printf("%d",a[i][j].id);
        }
        printf("\n");
    }
    return 0;
}
*/
