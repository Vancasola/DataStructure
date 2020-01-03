//
//  A1054.cpp
//  DataStructure
//
//  Created by vancasola on 2020/1/3.
//  Copyright © 2020 none. All rights reserved.
//  8:17 8:27
/*
#include <stdio.h>
#include <iostream>
#include <cmath>
#include <unordered_map>
using namespace std;
int main()
{
    int th,N,M,t;
    unordered_map<int,int> mp;
    cin>>M>>N;
    th=N*M/2;
    for(int i=0;i<M;i++)
        for(int j=0;j<N;j++)
        {
            scanf("%d",&t);
            if(mp.find(t)==mp.end())mp[t]=1;
            else mp[t]++;
        }
    for(unordered_map<int, int>::iterator it=mp.begin();it!=mp.end();it++)
        if(it->second>th){cout<<it->first;return 0;}
    return 0;
}*/
