//
//  A1044.cpp
//  DataStructure
//
//  Created by vancasola on 2020/1/27.
//  Copyright © 2020 none. All rights reserved.
//  10:32 11:02;
/*
#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,m;
    int sum=0;
    int a[100010]={0};
    vector<pair<int,int>> v;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
        a[i]+=a[i-1];
    }
    a[0]=0;
    for(int i=0,j=1;i<=n && j<=n;){
        sum=0;
        if(a[j]-a[i]==m){
            v.push_back(pair<int, int>(i+1,j));
            j++;
        }
        else if(a[j]-a[i]<m)j++;
        else i++;
    }
    for(int i=0;i<v.size();i++){
        printf("%d-%d\n",v[i].first,v[i].second);
    }
    while(!v.size()){
        m++;
        for(int i=0,j=1;i<=n && j<=n;){
            sum=0;
            if(a[j]-a[i]==m){
                v.push_back(pair<int, int>(i+1,j));
                j++;
            }
            else if(a[j]-a[i]<m)j++;
            else i++;
        }
        for(int i=0;i<v.size();i++){
            printf("%d-%d\n",v[i].first,v[i].second);
        }
    }
    return 0;
}
*/
