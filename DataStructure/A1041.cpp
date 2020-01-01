//
//  A1041.cpp
//  DataStructure
//
//  Created by vancasola on 2020/1/1.
//  Copyright © 2020 none. All rights reserved.
//  9:57 10:07
/*
#include <stdio.h>
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
int main()
{
    int n;
    int t;
    unordered_map<int, int> cnt;
    vector<int> v;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&t);
        v.push_back(t);
        if(cnt.find(t)==cnt.end())cnt[t]=1;
        else cnt[t]++;
    }
    for(int i=0;i<v.size();i++)
        if(cnt[v[i]]==1){cout<<v[i];return 0;}
    cout<<"None";
    return 0;
}
*/
