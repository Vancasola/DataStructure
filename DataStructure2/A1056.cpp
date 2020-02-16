//
//  A1056.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/16.
//  Copyright © 2020 none. All rights reserved.
//  11:47 12:18
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
struct node{
    int x,p,r;
}a[1005],b[1005];
int main(){
    int n,m,p;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i].x);
        a[i].p=i;
    }
    for(int i=0;i<n;i++){
        scanf("%d",&p);
        b[i]=a[p];
    }
    vector<node> v(n);
    for(int i=0;i<n;i++)v[i]=b[i];
    while(v.size()!=1){
        int r=1;
        if(v.size()%m==0)r=v.size()/m;
        else r=v.size()/m+1;
        r++;
        for(int i=0;i<v.size();i++){
            a[v[i].p].r=r;
        }
        node Max;
        Max.x=-1;
        vector<node> tmp;
        for(int i=0;i<v.size();i++){
            if(v[i].x>Max.x){
                Max=v[i];
            }
            if((i && (i+1)%m==0) || i==v.size()-1)
            {
                tmp.push_back(Max);
                Max.x=-1;
            }
        }
        v=tmp;
    }
    a[v[0].p].r=1;
    for(int i=0;i<n-1;i++)printf("%d ",a[i].r);
    printf("%d",a[n-1].r);
    return 0;
}
*/
