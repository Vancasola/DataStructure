//
//  A1055.cpp
//  DataStructure
//
//  Created by vancasola on 2020/1/5.
//  Copyright © 2020 none. All rights reserved.
//  8:10 9:02
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;
struct student
{
    string name;
    int age;
    int wealth;
};
bool cmp(const student& a,const student& b)
{
    return a.age<b.age;
};
bool cmp1(const student& a,const student& b)
{
    if(a.wealth!=b.wealth)return a.wealth>b.wealth;
    else if(a.age!=b.age)return a.age<b.age;
    return a.name<b.name;
}
int main()
{
    student s[100005];
    char name[10];
    int age,wealth;
    int m,k,agemin,agemax,count;
    cin>>m>>k;
    for(int i=0;i<m;i++)
    {
        scanf("%s %d %d",name,&age,&wealth);
        s[i].name=name;;
        s[i].age=age;
        s[i].wealth=wealth;
    }
    sort(s,s+m,cmp1);
    for(int i=0;i<k;i++)
    {
        scanf("%d %d %d",&count,&agemin,&agemax);
        printf("Case #%d:\n",i+1);
        bool f=false;
        for(int j=0;count>0 && j<m;j++)
        {
            if(s[j].age>=agemin && s[j].age<=agemax)
            {
                printf("%s %d %d\n",s[j].name.c_str(),s[j].age,s[j].wealth);
                count--;
                f=true;
            }
        }
        if(!f) printf("None\n");
    }
    return 0;
}
*/
