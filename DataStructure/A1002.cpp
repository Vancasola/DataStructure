//
//  A1002.cpp
//  DataStructure
//
//  Created by vancasola on 2019/12/24.
//  Copyright © 2019 none. All rights reserved.
//
/*
#include <stdio.h>
#include <iostream>
#include <map>
using namespace std;
int main()
{
    int m,n;
    int e=0;
    float c=0.0;
    map<int,float,greater<int>> mp;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        scanf("%d %f",&e,&c);
        mp[e]=c;
    }
    cin>>m;
    for(int j=0;j<m;j++)
    {
        scanf("%d %f",&e,&c);
        if(mp.find(e)==mp.end())mp[e]=c;
        else mp[e]+=c;
        if(!(int)mp[e]*10){mp.erase(e);}
    }
    printf("%d",mp.size());
    if(mp.size())printf(" ");
    for(map<int,float>::iterator it=mp.begin(); it!=mp.end();)
    {
        printf("%d %.1f",it->first,it->second);
        it++;
        if(it!=mp.end())printf(" ");
    }
    return 0;
}*/
