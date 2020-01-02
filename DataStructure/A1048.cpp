//
//  A1048.cpp
//  DataStructure
//
//  Created by vancasola on 2020/1/2.
//  Copyright © 2020 none. All rights reserved.
//  7:25 7:48
/*
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main()
{
    int n,m,t;
    unordered_map <int,int> s;
    cin>>n>>m;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&t);
        v.push_back(t);
        if(s.find(v[i])==s.end())
            s[v[i]]=1;
        else
            s[v[i]]++;
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        if(s.find(m-v[i])!=s.end())
        {
            if(v[i]!=m-v[i])
            {
                printf("%d %d",v[i],m-v[i]);
                return 0;
            }
            else if (v[i]==m-v[i] && s[v[i]]>1)
            {
                printf("%d %d",v[i],m-v[i]);
                return 0;
            }
        }
    }
    printf("No Solution");
    return 0;
}
*/
