//
//  A1055.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/16.
//  Copyright © 2020 none. All rights reserved.
//  10:31 10:48
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
struct node{
    string id;
    int age,w;
}a[100005];
bool cmp(const node& a,const node& b){
    if(a.w!=b.w)return a.w>b.w;
    else if(a.age!=a.age)return a.age<b.age;
    return a.id<b.id;
}
int main(){
    int n,k,m,l,r;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a[i].id;
        scanf("%d %d",&a[i].age,&a[i].w);
    }
    sort(a,a+n,cmp);
    for(int i=0;i<m;i++){
        scanf("%d %d %d",&k,&l,&r);
        vector<node> v;
        printf("Case #%d:\n",i+1);
        int cnt=0;
        for(int j=0;j<n;j++){
            //if(a[j].age>r)break;
            if(a[j].age>=l && a[j].age<=r){
                cnt++;
                printf("%s %d %d\n",a[j].id.c_str(),a[j].age,a[j].w);
            }
            if(cnt==k)break;
        }
        if(!cnt)printf("None\n");
    }
    return 0;
}
*/
