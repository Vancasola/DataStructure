//
//  A1120.cpp
//  DataStructure
//
//  Created by vancasola on 2020/1/13.
//  Copyright © 2020 none. All rights reserved.
//  10:04 10:11;
/*
#include <stdio.h>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
int main(){
    vector<int> v;
    set<int> s;
    int n;
    int sum=0;
    char x[10];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        scanf("%s",x);
        sum=0;
        for(int i=0;i<strlen(x);i++)
            sum+=x[i];
        sum-=strlen(x)*'0';
        if(s.find(sum)==s.end()){
            s.insert(sum);
            v.push_back(sum);
        }
    }
    sort(v.begin(),v.end());
    int i;
    cout<<v.size()<<endl;
    for( i=0;i<v.size()-1;i++)
        printf("%d ",v[i]);
    printf("%d",v[i]);
    return 0;
}*/
