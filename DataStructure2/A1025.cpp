//
//  A1025.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/13.
//  Copyright © 2020 none. All rights reserved.
//  9:44 10:01
/*
#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
struct student{
    string id;
    int sc,fr,lr,pos;
};
bool cmp1(const student& a,const student& b){
    return a.sc>b.sc;
}
bool cmp2(const student& a,const student& b){
    if(a.pos!=b.pos)return a.pos<b.pos;
    return a.sc>b.sc;
}
bool cmp3(const student& a,const student& b){
    if(a.fr!=b.fr)return a.fr<b.fr;
    return a.id<b.id;
}
int main(){
    vector<student> v;
    int n,k,sc;
    string s;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>k;
        for(int j=0;j<k;j++){
            cin>>s>>sc;
            student st;
            st.id=s;
            st.sc=sc;
            st.pos=i+1;
            v.push_back(st);
        }
    }
    sort(v.begin(),v.end(),cmp1);
    int p=1;
    v[0].fr=1;
    for(int i=1;i<v.size();i++){
        if(v[i].sc!=v[i-1].sc){
            p=i+1;
        }
        v[i].fr=p;
    }
    sort(v.begin(),v.end(),cmp2);
    p=1;
    int start=0;
    v[0].lr=1;
    for(int i=1;i<v.size();i++){
        if(v[i].sc!=v[i-1].sc){
            p=i+1-start;
        }
        if(v[i].pos!=v[i-1].pos){
            p=1;
            start=i;
        }
        v[i].lr=p;
    }
    sort(v.begin(),v.end(),cmp3);
    printf("%d\n",v.size());
    for(int i=0;i<v.size();i++){
        printf("%s %d %d %d\n",v[i].id.c_str(),v[i].fr,v[i].pos,v[i].lr);
    }
    return 0;
}
