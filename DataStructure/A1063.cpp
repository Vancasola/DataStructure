//
//  A1063.cpp
//  DataStructure
//
//  Created by vancasola on 2020/1/5.
//  Copyright © 2020 none. All rights reserved.
//  9:52 10:05 10:17
/*
#include <stdio.h>
#include <iostream>
#include <set>
#include <vector>
#include <map>
using namespace std;
int main()
{
    int n,m,k,t;
    set<int> s[50];
    set<int> s1;
    map<pair<int,int>,float> mp;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&m);
        for(int j=0;j<m;j++)
        {
            scanf("%d",&t);
            s[i].insert(t);
        }
    }
    cin>>k;
    int a,b;
    for(int i=0;i<k;i++)
    {
        scanf("%d %d",&a,&b);
        if(a>b)swap(a,b);
        if(mp.find(pair<int,int>(a,b))!=mp.end())
        {
            printf("%.1f%%\n",mp[pair<int,int>(a,b)]);
            continue;
        }
        s1=s[a-1];
        int nt=0;
        for(set<int>::iterator it=s[b-1].begin();it!=s[b-1].end();it++)
        {
            if(s1.find(*it)==s1.end())s1.insert(*it);
            else nt++;
        }
        printf("%.1f%%\n",((float)nt/(float)s1.size())*100);
        mp[pair<int, int>(a,b)]=((float)nt/(float)s1.size())*100;
    }
    return 0;
}
*/
