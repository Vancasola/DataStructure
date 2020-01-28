//
//  A1045.cpp
//  DataStructure
//
//  Created by vancasola on 2020/1/28.
//  Copyright © 2020 none. All rights reserved.
//  10:17
/*
#include <stdio.h>
#include <iostream>
#include <set>
#include <unordered_map>
using namespace std;
int main(){
    int n,k,t,len=0,a[210]={0},b[10010]={0},p[210];
    set<int> s;
    unordered_map<int,int> mp;
    cin>>t>>n;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        s.insert(a[i]);
        mp[a[i]]=0;
        p[a[i]]=i;
    }
    cin>>k;
    int j=0;
    for(int i=0;i<k;i++){
        scanf("%d",&t);
        if(s.find(t)!=s.end())b[j++]=t;
    }
    len=j;
    for(int i=0;i<len;i++){
        int t=0;
        for(int j=p[b[i]];j>=0;j--){
            if(mp[a[j]]>t)
                t=mp[a[j]];
        }
        mp[b[i]]=t+1;
    }
    cout<<mp[b[len-1]]<<endl;
    return 0;
}
*/
