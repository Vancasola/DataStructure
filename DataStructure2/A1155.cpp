//
//  A1155.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/23.
//  Copyright © 2020 none. All rights reserved.
//  6:09 6:30
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
#include <unordered_map>
using namespace std;
int a[1005]={0},n;
vector<int> tmp;
int f=0;
void display(vector<int>& v){
    for(int i=0;i<v.size()-1;i++){
        printf("%d ",v[i]);
        if(!f && tmp[i]>tmp[i+1])
            f=1;
        else if(!f && tmp[i]<tmp[i+1])
            f=-1;
        if((f==1 && tmp[i]<tmp[i+1])||(f==-1 && tmp[i]>tmp[i+1]))f=-2;
    }
    printf("%d\n",v.back());
}
void dfs(int r){
    tmp.push_back(a[r]);
    //printf("%d",a[r]);
    if(2*r+1>=n){
        display(tmp);
        tmp.pop_back();
        return;
    }
    if(2*r+2<n && a[2*r+2]!=-1)dfs(2*r+2);
    if(2*r+1<n && a[2*r+1]!=-1)dfs(2*r+1);
    tmp.pop_back();
}
int main(){
    cin>>n;
    fill(a,a+1005,-1);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    dfs(0);
    if(f==1)printf("Max Heap");
    else if(f==-1)printf("Min Heap");
    else if(f==-2)printf("Not Heap");
    return 0;
}
*/
