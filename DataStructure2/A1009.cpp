
//
//  A1009.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/11.
//  Copyright © 2020 none. All rights reserved.
//  3:04 3:14
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <map>
using namespace std;
int main(){
    int n,m,e,te;
    double c,tc;
    vector<pair<int,double>> v1,v2,v3;
    map<int,double,greater<int>> mp;
    cin>>n;
    for(int i=0;i<n;i++){
        scanf("%d %lf",&e,&c);
        v1.push_back(pair<int,double>(e,c));
    }
    cin>>m;
    for(int i=0;i<m;i++){
        scanf("%d %lf",&e,&c);
        v2.push_back(pair<int,double>(e,c));
    }
    for(int i=0;i<v1.size();i++){
        e=v1[i].first;
        c=v1[i].second;
        for(int j=0;j<v2.size();j++){
            te=e+v2[j].first;
            tc=c*v2[j].second;
            mp[te]+=tc;
        }
    }
    for(map<int,double>::iterator it=mp.begin();it!=mp.end();it++){
        if(it->second)v3.push_back(pair<int,double>(it->first,it->second));
    }
    cout<<v3.size();
    for(int i=0;i<v3.size();i++){
        printf(" %d %.1lf",v3[i].first,v3[i].second);
    }
    return 0;
}
*/
