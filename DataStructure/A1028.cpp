//
//  A1028.cpp
//  DataStructure
//
//  Created by vancasola on 2019/12/31.
//  Copyright © 2019 none. All rights reserved.
//  4:49 5:04
/*
#include <stdio.h>
#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;
struct record
{
    int id;
    string name;
    int grade;
};
bool cmp1(const record& a,const record& b)
{
    return a.id<b.id;
}
bool cmp2(const record& a,const record& b)
{
    if(a.name!=b.name)return a.name<b.name;
    return a.id<b.id;
}
bool cmp3(const record& a,const record& b)
{
    if(a.grade!=b.grade)return a.grade<b.grade;
    return a.id<b.id;
}
int main()
{
    int n,c;
    vector< record> v;
    cin>>n;
    if(!n)return 0;
    cin>>c;
    for(int i=0;i<n;i++)
    {
        record r;
        cin>>r.id>>r.name>>r.grade;
        v.push_back(r);
    }
    
    if(c==1)
        sort(v.begin(), v.end(), cmp1);
    else if(c==2)
        sort(v.begin(), v.end(), cmp2);
    else if(c==3)
        sort(v.begin(), v.end(), cmp3);
    for(int i=0;i<v.size();i++)
    {
        printf("%06d %s %d\n",v[i].id,v[i].name.c_str(),v[i].grade);
    }
    return 0;
}
*/
