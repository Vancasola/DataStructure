//
//  A1129.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/2.
//  Copyright © 2020 none. All rights reserved.
//  9:05
/*
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <vector>
#include <cmath>
using namespace std;
unordered_map<int,int> p;
bool cmp(const int& a,const int&b){
    if(p[a]!=p[b])return p[a]>p[b];
    return a<b;
}
int main(){
    vector<int> v;
    int n,k,t,j;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&t);
        if(i){
            printf("%d:",t);
            j=0;
            for(;j<k && j<v.size();j++)
                printf(" %d",v[j]);
            printf("\n");
        }
        p[t]++;
        if(find(v.begin(),v.end(),t)==v.end()){
            if(v.size()<k)
                v.push_back(t);
            else if(p[t]>p[v[v.size()-1]] || (p[t]==p[v[v.size()-1]] && t<v[v.size()-1]))
                v[v.size()-1]=t;
        }
        sort(v.begin(),v.begin()+min(k,int(v.size())),cmp);
    }
    return 0;
}
*/
