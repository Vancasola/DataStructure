//
//  A1070.cpp
//  DataStructure
//
//  Created by vacansola on 2020/2/17.
//  Copyright © 2020 none. All rights reserved.
//  5:30 5:39
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <set>
using namespace std;
bool cmp (const pair<double,double>& a, const pair<double,double>& b){
    return a.second>b.second;
}
int main(){
    int n,m;
    double a,b;
    vector<pair<double,double>> v;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        scanf("%lf",&a);
        v.push_back(pair<double,double>(a,0));
    }
    for(int i=0;i<n;i++){
        scanf("%lf",&a);
        v[i].second=a/v[i].first;
    }
    sort(v.begin(), v.end(), cmp);
    double sum=0;
    for(int i=0;i<n;i++){
        if(v[i].first>=m){
            sum+=m*v[i].second;
            break;
        }
        else if(v[i].first<m){
            sum+=v[i].first*v[i].second;
            m-=v[i].first;
        }
    }
    printf("%.2lf",sum);
    return 0;
}

*/
