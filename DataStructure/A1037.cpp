//
//  A1037.cpp
//  DataStructure
//
//  Created by vancasola on 2020/1/1.
//  Copyright © 2020 none. All rights reserved.
//  7:21 7:43
/*
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int C,P;
    int sum=0;
    vector<int> cp,cn;
    vector<int> vp,vn;
    int t;
    cin>>C;
    for(int i=0;i<C;i++)
    {
        scanf("%d",&t);
        if(t>0)cp.push_back(t);
        else if(t<0)cn.push_back(t);
    }
    cin>>P;
    for(int i=0;i<P;i++)
    {
        scanf("%d",&t);
        if(t>0)vp.push_back(t);
        else if(t<0)vn.push_back(t);
    }
    sort(cp.begin(),cp.end(),greater<int>());
    sort(cn.begin(),cn.end(),less<int>());
    sort(vp.begin(),vp.end(),greater<int>());
    sort(vn.begin(),vn.end(),less<int>());
    int n=(cp.size()<vp.size())?cp.size():vp.size();
    for(int i=0;i<n;i++)sum+=cp[i]*vp[i];
    n=(cn.size()<vn.size())?cn.size():vn.size();
    for(int i=0;i<n;i++)sum+=cn[i]*vn[i];
    cout<<sum;
    return 0;
}*/
