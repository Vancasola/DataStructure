//
//  A1129.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/26.
//  Copyright © 2020 none. All rights reserved.
//  4:08 4:28 5:06
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <queue>
#include <cmath>
#include <set>
using namespace std;
unordered_map<int,int> p;
bool cmp(const int& a,const int& b){
    if(p[a]!=p[b])return p[a]>p[b];
    return a<b;
}
int main(){
    int n,m,t;
    vector<int> v;
    set<int> s;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&t);
        if(v.size()){
            printf("%d:",t);
            for(int j=0;j<v.size();j++)printf(" %d",v[j]);
            printf("\n");
        }
        p[t]++;
        if(s.find(t)==s.end()){
            if(v.size()<m){
                v.push_back(t);
                s.insert(t);
            }
            else if(v.size()==m)
            {
                if(p[t]>p[v.back()] || (p[t]==p[v.back()] && t<v.back())){
                    s.erase(v.back());
                    v.back()=t;
                    s.insert(t);
                }
            }
        }
        sort(v.begin(),v.end(),cmp);
    }
    return 0;
}
*/
 
  
