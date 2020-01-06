//
//  A1070.cpp
//  DataStructure
//
//  Created by vancasola on 2020/1/6.
//  Copyright © 2020 none. All rights reserved.
//  8:24 8:40
/*
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
struct mooncake {
    float amount,total,price;
};
bool cmp(const mooncake&a,const mooncake& b)
{
    return a.price>b.price;
}
int main()
{
    int n,d;
    float profit=0;
    vector<mooncake> v(1000);
    cin>>n>>d;
    for(int i=0;i<n;i++)
        scanf("%f",&v[i].amount);
    for(int i=0;i<n;i++)
    {
        scanf("%f",&v[i].total);
        v[i].price=v[i].total/v[i].amount;
    }
    sort(v.begin(), v.end(), cmp);
    for(int i=0;i<v.size();i++)
    {
        if(!d)break;
        if(d>v[i].amount)
        {
            profit+=v[i].amount*v[i].price;
            d-=v[i].amount;
        }
        else
        {
            profit+=d*v[i].price;
            break;
        }
    }
    printf("%.2f",profit);
    return 0;
}
*/
