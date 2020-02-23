//
//  A1101.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/5.
//  Copyright © 2020 none. All rights reserved.
//
/*
#include <stdio.h>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int n;
int a[100010],lmax[100010],rmin[100010];
int main(){
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    int MAX=0;
    for(int i=0;i<n;i++){
        lmax[i]=MAX;
        if(a[i]>MAX)MAX=a[i];
    }
    int MIN=999999999;
    for(int i=n-1;i>=0;i--){
        rmin[i]=MIN;
        if(a[i]<MIN)MIN=a[i];
    }
    printf("\n");
    for(int i=0;i<n;i++){
        bool f=false;
        if(a[i]>lmax[i]&& a[i]<rmin[i])v.push_back(a[i]);
    }
    sort(v.begin(), v.end());
    cout<<v.size()<<endl;
    if(!v.size())printf("\n");
    for(int i=0;i<v.size();i++){
        if(i<v.size()-1)printf("%d ",v[i]);
        else printf("%d",v[i]);
    }
}

*/
