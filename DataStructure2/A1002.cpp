//
//  A1002.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/11.
//  Copyright © 2020 none. All rights reserved.
//  11:13 11:28 11:41 12:14
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
bool cmp(const pair<double,double> &a,const pair<double,double> &b){
    return a.first>b.first;
}
int main(){
    unordered_map<double,double> p;
    int n;
    double e;
    double c;
    cin>>n;
    for(int i=0;i<n;i++){
        scanf("%lf %lf",&e,&c);
        p[e]+=c;
    }
    cin>>n;
    for(int i=0;i<n;i++){
        scanf("%lf %lf",&e,&c);
        p[e]+=c;
    }
    vector<pair<double,double>> v;
    for(unordered_map<double, double>::iterator it=p.begin();it!=p.end();it++){
        if(it->second)
        v.push_back(pair<double,double>( it->first,it->second));
    }
    sort(v.begin(),v.end(),cmp);
    printf("%d",v.size());
    for(int i=0;i<v.size();i++)
    printf(" %.lf %.1lf",v[i].first,v[i].second);
    printf("\n");
    return 0;
}
*/
