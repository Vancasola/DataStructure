//
//  A1085.cpp
//  DataStructure
//
//  Created by vancasola on 2020/1/8.
//  Copyright © 2020 none. All rights reserved.
//
/*
#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a[100010]={0};
    int n,p,ans=0;
    cin>>n>>p;
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    sort(a,a+n);
    for(int i=0,j=0;j<n;)
    {
        while(a[j]<=(long long)a[i]*p && j<n)j++;
        if(j-i>ans)ans=j-i;
        i++;
    }
    printf("%d",ans);
    return 0;
}*/
