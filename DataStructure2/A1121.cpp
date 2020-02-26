//
//  A1121.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/26.
//  Copyright © 2020 none. All rights reserved.
//  9:33 9:43
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <queue>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <set>
using namespace std;
int main(){
    int n,m,a,b;
    vector<int> v;
    set<int> s1,s2;
    unordered_map<int,int> p;
    cin>>n;
    for(int i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        p[a]=b;
        p[b]=a;
        s1.insert(a);
        s1.insert(b);
    }
    cin>>m;
    for(int j=0;j<m;j++){
        scanf("%d",&a);
        if(s1.find(a)==s1.end()){
            v.push_back(a);
            continue;
        }
        else s2.insert(a);
    }
    for(set<int>::iterator it=s2.begin();it!=s2.end();it++){
        b=p[*it];
        if(s2.find(b)==s2.end())v.push_back(*it);
    }
    sort(v.begin(), v.end());
    printf("%d\n",v.size());
    for(int i=0;i<v.size();i++)
        if(!i)printf("%05d",v[i]);
        else printf(" %05d",v[i]);
    return 0;
}
*/
