//
//  A1083.cpp
//  DataStructure
//
//  Created by vancasola on 2020/1/8.
//  Copyright © 2020 none. All rights reserved.
//  6:55 7:11
/*
#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
struct student
{
    string name,id;
    int grade;
};
bool cmp(const student&a, const student&b)
{
    return a.grade>b.grade;
}
int main()
{
    int n;
    vector<student> v;
    char name[20],id[20];
    int grade;
    int low,up;
    cin>>n;
    if(!n){cout<<"NONE";return 0;}
    for(int i=0;i<n;i++)
    {
        scanf("%s %s %d",name,id,&grade);
        student s;
        s.name=name;
        s.id=id;
        s.grade=grade;
        v.push_back(s);
    }
    cin>>low>>up;
    sort(v.begin(), v.end(), cmp);
    bool f=false;
    for(int i=0;i<v.size();i++)
    {
        if(v[i].grade<low)continue;
        if(v[i].grade>up)continue;
        else{
            f=true;
        printf("%s %s\n",v[i].name.c_str(),v[i].id.c_str());
        }
    }
    if(!f)cout<<"NONE";
    return 0;
}
*/
