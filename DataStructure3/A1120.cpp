//
//  A1120.cpp
//  DataStructure
//
//  Created by vancasola on 2020/5/22.
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
#include <unordered_map>
using namespace std;
int main(){
    int n,sum=0;
    string s;
    unordered_map<int,int> p;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        sum=0;
        for(int j=0;j<s.size();j++)
            sum+=s[j];
        sum-= s.size()*'0';
        p[sum]++;
    }
    unsigned long  x=0;
    vector<int> v;
    for(unordered_map<int, int>::iterator it=p.begin();it!=p.end();it++){
        v.push_back(it->first);
    }
    sort(v.begin(),v.end());
    printf("%d\n",v.size());
    for(int i=0;i<v.size();i++){
        if(i)printf(" %d",v[i]);
        else printf("%d",v[i]);
    }
    return 0;
}
*/
