//
//  A1101.cpp
//  DataStructure
//
//  Created by vancasola on 2020/3/12.
//  Copyright © 2020 none. All rights reserved.
//
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a[100010],b[100010],c[100010],t=0;
    const int inf =999999999;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        scanf("%d",&c[i]);
    }
    a[0]=0;
    for(int i=1;i<n;i++){
        if(c[i-1]>t)t=c[i-1];
        a[i]=t;
    }
    b[n-1]=inf;
    t=inf;
    for(int i=n-2;i>=0;i--){
        if(c[i+1]<t)t=c[i+1];
        b[i]=t;
    }
    vector<int> v;
    for(int i=0;i<n;i++){
        if(c[i]>a[i]&&c[i]<b[i])v.push_back(c[i]);
    }
    printf("%d\n",v.size());
    for(int i=0;i<v.size();i++){
        if(i)printf(" %d",v[i]);
        else printf("%d",v[i]);
    }
    printf("\n");
    return 0;
}
*/
