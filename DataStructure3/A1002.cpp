//
//  A1002.cpp
//  DataStructure
//
//  Created by vancasola on 2020/3/3.
//  Copyright © 2020 none. All rights reserved.
//  4:42 4:54
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <iostream>
#include <map>
using namespace std;
int main(){
    map<int,double,greater<int>> p;
    int n,x;
    double y;
    cin>>n;
    for(int i=0;i<n;i++){
        scanf("%d %lf",&x,&y);
        p[x]=y;
    }
    cin>>n;
    for(int i=0;i<n;i++){
        scanf("%d %lf",&x,&y);
        p[x]+=y;
    }
    vector<pair<int,double>> v;
    for(map<int,double>::iterator it=p.begin();it!=p.end();it++){
        if(it->second!=0)v.push_back(pair<int,double>(it->first,it->second));
    }
    printf("%d",v.size());
    for(int i=0;i<v.size();i++){
        printf(" %d %.1lf",v[i].first,v[i].second);
    }
    return 0;
}
*/
