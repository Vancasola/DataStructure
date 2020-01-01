//
//  A1042.cpp
//  DataStructure
//
//  Created by vancasola on 2020/1/1.
//  Copyright © 2020 none. All rights reserved.
//  10:09 10:15 10:34
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
struct card
{
    string id;
    int p;
};
bool cmp(const card & a,const card& b)
{
    return a.p<b.p;
}
int main()
{
    int k;
    int i;
    vector<card> v;
    vector<int> p(54);
    for(int i=0;i<13;i++)
    {
        card c;
        c.id="S";
        c.id+=to_string(i+1);
        c.p=i+1;
        v.push_back(c);
    }
    for(int i=0;i<13;i++)
    {
        card c;
        c.id="H";
        c.id+=to_string(i+1);
        c.p=13+i+1;
        v.push_back(c);
    }
    for(int i=0;i<13;i++)
    {
        card c;
        c.id="C";
        c.id+=to_string(i+1);
        c.p=26+i+1;
        v.push_back(c);
    }
    for(int i=0;i<13;i++)
    {
        card c;
        c.id="D";
        c.id+=to_string(i+1);
        c.p=39+i+1;
        v.push_back(c);
    }
    for(int i=0;i<2;i++)
    {
        card c;
        c.id="J";
        c.id+=to_string(i+1);
        c.p=52+i+1;
        v.push_back(c);
    }
    cin>>k;
    int t;
    for(int i=0;i<54;i++)
    {
        scanf("%d",&t);
        p[i]=t;
    }
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<54;j++)v[j].p = p[j];
        sort(v.begin(),v.end(),cmp);
    }
    for( i=0;i<53;i++)printf("%s ",v[i].id.c_str());
    printf("%s",v[i].id.c_str());
    return 0;
}*/
