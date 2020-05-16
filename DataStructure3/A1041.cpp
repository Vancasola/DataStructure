//
//  A1041.cpp
//  DataStructure
//
//  Created by vancasola on 2020/5/16.
//  Copyright © 2020 none. All rights reserved.
//
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
int main(){
    int n,t;
    vector<int> v;
    unordered_map<int,int> p;
    cin>>n;
    for(int i=0;i<n;i++){
        scanf("%d",&t);
        if(p.find(t)==p.end()){
            v.push_back(t);
            p[t]=1;
        }else p[t]++;
    }
    for(int i=0;i<v.size();i++){
        if(p[v[i]]==1){
            printf("%d",v[i]);
            return 0;
        }
    }
    printf("None");
    return 0;
}

*/
