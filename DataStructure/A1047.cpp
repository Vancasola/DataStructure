//
//  A1047.cpp
//  DataStructure
//
//  Created by vancasola on 2020/1/2.
//  Copyright © 2020 none. All rights reserved.
//  7:05 7:22
/*
#include <stdio.h>
#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main()
{
    unordered_map<int ,vector<string>> mp;
    int n,k,c,t;
    string name;
    char ch[5];
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        scanf("%s %d",ch,&c);
        for(int j=0;j<c;j++)
        {
            scanf("%d",&t);
            if(mp.find(t)==mp.end())
            {
                vector<string> v;
                v.push_back(ch);
                mp[t]=v;
            }
            else{
                mp[t].push_back(ch);
            }
        }
    }
    for(int i=1;i<=k;i++)
    {
        printf("%d %d\n",i,mp[i].size());
        sort(mp[i].begin(),mp[i].end());
        for(int j=0;j<mp[i].size();j++)
        {
            printf("%s\n",mp[i][j].c_str());
        }
    }
    return 0;
}
*/
