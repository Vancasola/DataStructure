//
//  A1012.cpp
//  DataStructure
//
//  Created by vancasola on 2020/5/3.
//  Copyright © 2020 none. All rights reserved.
//  2:36 2:56
/*
#include <stdio.h>
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <iostream>
#include <unordered_map>
using namespace std;
struct student{
    string id,s;
    int c,m,e,a,r=99999999;
}v[2005];
bool cmpe(const student&a,const student&b){
    return a.e>b.e;
}
bool cmpm(const student&a,const student&b){
    return a.m>b.m;
}
bool cmpc(const student&a,const student&b){
    return a.c>b.c;
}
bool cmpa(const student&a,const student&b){
    return a.a>b.a;
}
int main(){
    int n,k;
    char id[8];
    cin>>n>>k;
    for(int i=0;i<n;i++){
        scanf("%s %d %d %d",id,&v[i].c,&v[i].m,&v[i].e);
        v[i].id=id;
        v[i].a=(v[i].c+v[i].m+v[i].e)/3;
    }
    sort(v,v+n,cmpe);
    int r=1;
    if(r<=v[0].r){
        v[0].r=r;
        v[0].s='E';
    }
    for(int i=1;i<n;i++){
        if(v[i].e!=v[i-1].e)r=i+1;
        if(r<=v[i].r){
            v[i].r=r;
            v[i].s='E';
        }
    }
    sort(v,v+n,cmpm);
    r=1;
    if(r<=v[0].r){
        v[0].r=r;
        v[0].s='M';
    }
    for(int i=1;i<n;i++){
        if(v[i].m!=v[i-1].m)r=i+1;
        if(r<=v[i].r){
            v[i].r=r;
            v[i].s='M';
        }
    }
    sort(v,v+n,cmpc);
    r=1;
    if(r<=v[0].r){
        v[0].r=r;
        v[0].s='C';
    }
    for(int i=1;i<n;i++){
        if(v[i].c!=v[i-1].c)r=i+1;
        if(r<=v[i].r){
            v[i].r=r;
            v[i].s='C';
        }
    }
    sort(v,v+n,cmpa);
    r=1;
    if(r<=v[0].r){
        v[0].r=r;
        v[0].s='A';
    }
    for(int i=1;i<n;i++){
        if(v[i].a!=v[i-1].a)r=i+1;
        if(r<=v[i].r){
            v[i].r=r;
            v[i].s='A';
        }
    }
    unordered_map<string,student> p;
    for(int i=0;i<n;i++){
        p[v[i].id]=v[i];
    }
    for(int i=0;i<k;i++){
        scanf("%s",id);
        if(p.find(id)==p.end()){
            printf("N/A");
        }
        else printf("%d %s",p[id].r,p[id].s.c_str());
        printf("\n");
    }
    return 0;
}
*/
