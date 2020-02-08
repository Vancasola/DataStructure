//
//  A1147.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/8.
//  Copyright © 2020 none. All rights reserved.
//
/*
#include <stdio.h>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int a[1010],n,m;
vector<int> v;
bool judgebig(){
    int j=1;
    for(int i=0;i<m/2;i++,j=2*i+1){
        if(j+1<m && a[j+1]>a[j])j=j+1;
        if(a[i]<a[j])return false;
    }
    return true;
}
bool judgesmall(){
    int j=1;
    for(int i=0;i<m/2;i++,j=2*i+1){
        if(j+1<m && a[j+1]<a[j])j=j+1;
        if(a[i]>a[j])return false;
    }
    return true;
}
void postorder(int r){
    if(2*r+1<m)postorder(2*r+1);
    if(2*r+2<m)postorder(2*r+2);
    v.push_back(a[r]);
}
int main(){
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)scanf("%d",&a[j]);
        bool f1=judgebig(),f2=judgesmall();
        if(f1)printf("Max Heap\n");
        else if(f2)printf("Min Heap\n");
        else printf("Not Heap\n");
        v.clear();
        postorder(0);
        for(int j=0;j<v.size();j++){
            if(j!=v.size()-1)printf("%d ",v[j]);
            else printf("%d\n",v[j]);
        }
    }
    return 0;
}
*/
