//
//  A1048.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/15.
//  Copyright © 2020 none. All rights reserved.
//  4:23 4:29 4:37 4:49 4:56
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
int main(){
    int n,m,t;
    bool f=false;
    vector<int> v;
    unordered_map<int,int> p;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        scanf("%d",&t);
        v.push_back(t);
        p[t]++;
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        if(p.find(m-v[i])!=p.end()){
            if(v[i]==m-v[i] && p[v[i]]>=2){
                printf("%d %d",v[i],v[i]);
                return 0;
            }
            else if(v[i]!=m-v[i]){
                printf("%d %d",v[i],m-v[i]);
                return 0;
            }
        }
    }
    printf("No Solution\n");
    return 0;
}
*/
