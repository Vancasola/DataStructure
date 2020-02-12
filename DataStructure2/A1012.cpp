//
//  A1012.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/12.
//  Copyright © 2020 none. All rights reserved.
//  9:52 10:11 10:49 11:03

#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
struct student{
    string id,sub;
    int c,m,e,a,r=999999;
}s[2005];
bool cmp1(const student& a,const student& b){
    return a.a>b.a;
}
bool cmp2(const student& a,const student& b){
    return a.c>b.c;
}
bool cmp3(const student& a,const student& b){
    return a.m>b.m;
}
bool cmp4(const student& a,const student& b){
    return a.e>b.e;
}
int main(){
    int n,m;
    string str;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>s[i].id;
        scanf("%d %d %d",&s[i].c,&s[i].m,&s[i].e);
        s[i].a=(s[i].c+s[i].m+s[i].e)/3;
    }
    int p=0;
    sort(s,s+n,cmp4);
    for(int i=0;i<n;i++){
        if(i && s[i].e!=s[i-1].e)p=i;
        if(p+1<s[i].r){
            s[i].r=p+1;
            s[i].sub="E";
        }
        else if(p+1==s[i].r)
            s[i].sub="E";
    }
    sort(s,s+n,cmp3);
    p=0;
    for(int i=0;i<n;i++){
        if(i && s[i].m!=s[i-1].m)p=i;
        if(p+1<s[i].r){
            s[i].r=p+1;
            s[i].sub="M";
        }
        else if(p+1==s[i].r)
            s[i].sub="M";
    }
    sort(s,s+n,cmp2);
    p=0;
    for(int i=0;i<n;i++){
        if(i && s[i].c!=s[i-1].c)p=i;
        if(p+1<s[i].r){
            s[i].r=p+1;
            s[i].sub="C";
        }
        else if(p+1==s[i].r)
            s[i].sub="C";
    }
    sort(s,s+n,cmp1);
    p=0;
    for(int i=0;i<n;i++){
        if(i && s[i].a!=s[i-1].a)p=i;
        if(p+1<s[i].r){
            s[i].r=p+1;
            s[i].sub="A";
        }
        else if(p+1==s[i].r)
            s[i].sub="A";
    }
    for(int i=0;i<m;i++){
        cin>>str;
        bool f=false;
        for(int j=0;j<n;j++){
            if(str==s[j].id){
                f=true;
                printf("%d %s\n",s[j].r,s[j].sub.c_str());
            }
        }
        if(!f)printf("N/A\n");
    }
    return 0;
}

