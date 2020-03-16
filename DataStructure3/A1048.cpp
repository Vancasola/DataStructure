//
//  A1048.cpp
//  DataStructure
//
//  Created by vancasola on 2020/3/16.
//  Copyright © 2020 none. All rights reserved.
//  10:27 10:34
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <unordered_map>
using namespace std;
int main(){
    int n,m,t,a=-1,b=-1;
    cin>>n>>m;
    vector<int> v;
    unordered_map<int,int> p;
    for(int i=0;i<n;i++){
        scanf("%d",&t);
        v.push_back(t);
        p[t]++;
    }
    for(int i=0;i<n;i++){
        if(v[i]!=m-v[i]){
            if(p.find(m-v[i])!=p.end())
            {
                a=v[i];
                b=m-v[i];
                if(a>b)swap(a,b);
            }
        }
        else {
            if(p[v[i]]>=2){
                a=b=v[i];
            }
        }
    }
    if(a==-1&&b==-1)printf("No Solution");
    else printf("%d %d",a,b);
    return 0;
}
*/
