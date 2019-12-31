//
//  A1036.cpp
//  DataStructure
//
//  Created by vancasola on 2019/12/31.
//  Copyright © 2019 none. All rights reserved.
//  7:00 7:30
/*
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
struct student
{
    string name,id;
    char gender;
    int grade;
};
bool cmp(const student & a,const student & b)
{
    if(a.gender==b.gender)return a.grade>b.grade;
    return a.gender<b.gender;
}
int main()
{
    int n;
    bool m=false,f=false;
    vector<student> v;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        student s;
        cin>>s.name>>s.gender>>s.id>>s.grade;
        if(s.gender=='M')m=true;
        if(s.gender=='F')f=true;
        v.push_back(s);
    }
    sort(v.begin(),v.end(),cmp);
    if(f)printf("%s %s\n",v[0].name.c_str(),v[0].id.c_str());
    else cout<<"Absent"<<endl;
    if(m)printf("%s %s\n",v[n-1].name.c_str(),v[n-1].id.c_str());
    else cout<<"Absent"<<endl;
    if(m && f)printf("%d",v[0].grade-v[n-1].grade);
    else cout<<"NA";
    return 0;
}
*/
