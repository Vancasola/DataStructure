//
//  A1039.cpp
//  DataStructure
//
//  Created by vancasola on 2020/1/1.
//  Copyright © 2020 none. All rights reserved.
//  9:18 9:51
/*
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main()
{
    int N,K,n,id;
    string name;
    vector<int> course;
    unordered_map<string,vector<int>> mp;
    cin>>N>>K;
    for(int i=0;i<K;i++)
    {
        cin>>id>>n;
        course.push_back(id);
        for(int i=0;i<n;i++)
        {
            cin>>name;
            if(mp.find(name)==mp.end())
            {
                vector<int> v;
                mp[name]=v;
                mp[name].push_back(id);
            }
            else{
                mp[name].push_back(id);
            }
        }
    }
    int i=0;
    for(unordered_map<string, vector<int>>::iterator it=mp.begin();it!=mp.end();it++)
        sort(it->second.begin(),it->second.end());
    char a[5];
    for(int j=0;j<N;j++)
    {
        scanf("%s",a);
        name=a;
        printf("%s %d",a,mp[name].size());
        if(!mp[name].size()){printf("\n");continue;}
        for( i=0;i<mp[name].size();i++)
            printf(" %d",mp[name][i]);
        printf("\n");
    }
    return 0;
}
*/
