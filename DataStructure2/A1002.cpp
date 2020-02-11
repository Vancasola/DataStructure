//
//  A1002.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/11.
//  Copyright © 2020 none. All rights reserved.
//  11:13 11:28
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
bool cmp(const pair<int,double> &a,const pair<int,double> &b){
    return a.first>b.first;
}
int main(){
    unordered_map<int,double> p;
    int n,m;
    int e;
    double c;
    cin>>n;
    for(int i=0;i<n;i++){
        scanf("%d %lf",&e,&c);
        if(p.find(e)==p.end())p[e]=c;
        else p[e]+=c;
    }
    cin>>n;
    for(int i=0;i<n;i++){
        scanf("%d %lf",&e,&c);
        if(p.find(e)==p.end())p[e]=c;
        else p[e]+=c;
    }
//    for(unordered_map<int, double>::iterator it=p2.begin();it!=p2.end();it++){
//        p1[it->first]+=it->second;
//    }
    vector<pair<int,double>> v;
    for(unordered_map<int, double>::iterator it=p.begin();it!=p.end();it++){
        v.push_back(pair<int,double>( it->first,it->second));
    }
    sort(v.begin(),v.end(),cmp);
    printf("%d",v.size());
    for(int i=0;i<v.size();i++)
    printf(" %d %.1lf",v[i].first,v[i].second);
    return 0;
}

*/
