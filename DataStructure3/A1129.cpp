//
//  A1129.cpp
//  DataStructure
//
//  Created by vancasola on 2020/3/14.
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
#include <set>
using namespace std;
unordered_map<int,int> p;
bool cmp(const int &a,const int& b){
    if(p[a]!=p[b])return p[a]>p[b];
    return a<b;
}
int main(){
    int n,k,t;
    vector<int> v;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        scanf("%d",&t);
        if(v.size())printf("%d:",t);
        for(int i=0;i<k && i<v.size();i++)
            printf(" %d",v[i]);
        if(v.size())printf("\n");
        p[t]++;
        if(find(v.begin(),v.end(),t)==v.end()){
            if(v.size()<k)
                v.push_back(t);
            else{
                if(p[v.back()]<p[t]||(p[v.back()]==p[t] && t<v.back()))
                    v.back()=t;
            }
        }
        sort(v.begin(),v.end(),cmp);
    }
    return 0;
}
*/
