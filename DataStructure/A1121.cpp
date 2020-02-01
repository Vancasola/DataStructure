//
//  A1121.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/1.
//  Copyright © 2020 none. All rights reserved.
//  10:30 10:47 10:51
/*
#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <set>
using namespace std;
int main(){
    unordered_map<int,int> s;
    set<int> s1,s2;
    vector<int> v;
    int n,m,a,b;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        s[a]=b;
        s[b]=a;
        s1.insert(a);
        s1.insert(b);
    }
    cin>>m;
    for(int i=0;i<m;i++){
        scanf("%d",&a);
        s2.insert(a);
    }
    for(set<int>::iterator it=s2.begin();it!=s2.end();it++){
        if(s1.find(*it)==s1.end()|| s2.find(s[*it])==s2.end())v.push_back(*it);
    }
    sort(v.begin(),v.end());
    cout<<v.size()<<endl;
    if(v.size())for(int i=0;i<v.size()-1;i++)printf("%05d ",v[i]);
    if(v.size())printf("%05d",v[v.size()-1]);
    return 0;
}
*/
