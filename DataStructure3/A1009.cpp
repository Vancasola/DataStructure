//
//  A1009.cpp
//  DataStructure
//
//  Created by vancasola on 2020/5/11.
//  Copyright © 2020 none. All rights reserved.
//  5:38 5:51
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <iostream>
#include <unordered_map>
#include <map>
using namespace std;
bool cmp(const pair<int,double>& a,const pair<int,double>& b){
    return a.first>b.first;
}
int main(){
    vector<pair<int,double>> v1,v2,v;
    unordered_map<int,double> p;
    int k1,k2,e;
    double c;
    cin>>k1;
    for(int i=0;i<k1;i++){
        scanf(" %d %lf",&e,&c);
        v1.push_back(pair<int,double>(e,c));
    }
    cin>>k2;
    for(int i=0;i<k2;i++){
        scanf(" %d %lf",&e,&c);
        v2.push_back(pair<int,double>(e,c));
    }
    for(int i=0;i<k1;i++){
        for(int j=0;j<k2;j++){
            e=v1[i].first+v2[j].first;
            c=v1[i].second*v2[j].second;
            p[e]+=c;
        }
    }
    for(unordered_map<int, double>::iterator it=p.begin();it!=p.end();it++){
        if(it->second!=0.0){
            v.push_back(pair<int,double>(it->first,it->second));
        }
    }
    sort(v.begin(),v.end(),cmp);
    printf("%d",v.size());
    for(int i=0;i<v.size();i++){
        printf(" %d %.1lf",v[i].first,v[i].second);
    }
    return 0;
}
*/
