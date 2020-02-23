//
//  A1101.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/23.
//  Copyright © 2020 none. All rights reserved.
//  2:52 3:08 5:57 6:06
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
#include <unordered_map>
using namespace std;
int main(){
    int n,a[100010]={0},b[100010]={0},c[100010]={0};
    vector<int> v;
    cin>>n;
    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    int MAX=0;
    for(int i=1;i<=n;i++){
        b[i]=MAX;
        if(a[i]>MAX)MAX=a[i];
    }
    int MIN=999999999;
    for(int i=n;i>=1;i--){
        c[i]=MIN;
        if(a[i]<MIN)MIN=a[i];
    }
    for(int i=1;i<=n;i++){
        if(a[i]>=b[i]&&a[i]<=c[i])
            v.push_back(a[i]);
    }
    sort(v.begin(),v.end());
    printf("%d\n",v.size());
    if(!v.size()){printf("\n");return 0;}
    for(int i=0;i<v.size();i++){
        if(i<v.size()-1)printf("%d ",v[i]);
        else printf("%d",v[i]);
    }
    return 0;
}
 */
 
