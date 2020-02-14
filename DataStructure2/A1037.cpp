//
//  A1037.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/14.
//  Copyright © 2020 none. All rights reserved.
//  11:04 11:15
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,m,t;
    vector<int> a1,a2,b1,b2;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&t);
        if(t>0)a1.push_back(t);
        else if(t<0)a2.push_back(t);
    }
    cin>>m;
    for(int i=0;i<m;i++)
    {
        scanf("%d",&t);
        if(t>0)b1.push_back(t);
        else if(t<0)b2.push_back(t);
    }
    sort(a1.begin(),a1.end(),greater<int>());
    sort(a2.begin(),a2.end(),less<int>());
    sort(b1.begin(),b1.end(),greater<int>());
    sort(b2.begin(),b2.end(),less<int>());
    int sum=0,len=min(a1.size(),b1.size());
    for(int i=0;i<len;i++)
        sum+=a1[i]*b1[i];
    len=min(a2.size(),b2.size());
    for(int i=0;i<len;i++)
        sum+=a2[i]*b2[i];
    cout<<sum<<endl;
    return 0;
}
*/
