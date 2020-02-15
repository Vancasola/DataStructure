//
//  A1044.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/15.
//  Copyright © 2020 none. All rights reserved.
//  9:57 10:11
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
int main(){
    unordered_map<int,int> mp;
    vector<pair<int,int>> v;
    int n,m,a[100005],q=0,p=0;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    while(!v.size()){
        q=0;
        int sum=0;
        for(int p=-1;p<n;){
            if(sum<m){
                p++;
                sum+=a[p];
            }
            else if(sum>m){
                sum-=a[q];
                q++;
            }
            else if(sum==m){
                v.push_back(pair<int,int>(q,p));
                p++;
                sum+=a[p];
            }
        }
        m++;
    }
    if(v.size())
    for(int i=0;i<v.size();i++){
        printf("%d-%d\n",v[i].first+1,v[i].second+1);
    }
    return 0;
}
*/
