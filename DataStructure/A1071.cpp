//
//  A1071.cpp
//  DataStructure
//
//  Created by vancasola on 2020/1/6.
//  Copyright © 2020 none. All rights reserved.
//  9:20 10:01
/*
#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;
bool judge(char c)
{
    if(c>='a' && c<='z')return true;
    else if(c>='0' && c<='9')return true;
    return false;
}
char change(char c)
{
    if(c>='A' && c<='Z')return c-'A'+'a';
    return c;
}
bool cmp(const pair<string, int>&a,const pair<string, int>&b)
{
    if(a.second!=b.second)return a.second>b.second;
    return a.first<b.first;
}
int main()
{
    map<string,int,greater<>> ground;
    string s,t;
    getline(cin, s);
    bool f=false;
    for(int i=0;i<s.size();i++)
    {
        s[i]=change(s[i]);
        //cout<<s[i];
        if(!f)
        {
            if(!judge(s[i]))continue;
            t+=s[i];
            f=true;
            continue;
        }
        else{
            if(judge(s[i]))t+=s[i];
            else{
                f=false;
                if(ground.find(t)==ground.end())
                {
                    ground[t]=1;
                    //cout<<t<<' ';
                }
                else ground[t]++;
                t.clear();
            }
        }
    }
    if(t.size())ground[t]=1;
    vector<pair<string,int>> v;
    for(map<string,int>::iterator it = ground.begin();it!=ground.end();it++)
    {
        v.push_back(pair<string, int>(it->first,it->second));
    }
    sort(v.begin(), v.end(), cmp);
    if(v.size())printf("%s %d",v[0].first.c_str(),v[0].second);
    return 0;
}
*/
