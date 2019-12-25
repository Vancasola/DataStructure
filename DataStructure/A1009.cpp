//
//  A1009.cpp
//  DataStructure
//
//  Created by vancasola on 2019/12/25.
//  Copyright © 2019 none. All rights reserved.
//
//9:48 10:17 10:23
/*
#include <stdio.h>
#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int,float,greater<int>> p1,p;
    int k,e,e1;
    float c,c1;
    cin>>k;
    for(int i=0;i<k;i++)
    {
        scanf("%d %f",&e,&c);
        p1[e]=c;
    }
    cin>>k;
    for(int i=0;i<k;i++)
    {
        scanf("%d %f",&e,&c);
        for(map<int,float>::iterator it=p1.begin();it!=p1.end();it++)
        {
            e1=it->first+e;
            c1=it->second*c;
            if(p.find(e1)==p.end())
            {
                p[e1]=c1;
            }
            else p[e1]+=c1;
        }
    }
    int sum=0;
    for(map<int,float>::iterator it=p.begin();it!=p.end();it++)if(it->second)sum++;
    if(sum)cout<<sum<<' ';
    else cout<<sum;
    map<int,float>::iterator it=p.begin();
    for(;it!=p.end();it++)
    {
        it++;
        if(it!=p.end()){
            it--;
            if((int)(it->second*10))printf("%d %.1f ",it->first,it->second);
            continue;
        }
        it--;
    }
    it--;
    if((int)it->second*10)printf("%d %.1f",it->first,it->second);
    return 0;
}
*/
