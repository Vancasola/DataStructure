//
//  A1039.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/14.
//  Copyright © 2020 none. All rights reserved.
//  4:07 4:22 5:22 5:53

#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
int main(){
    int n,k,index,m;
    char s[5];
    unordered_map<string,vector<int>> mp;
    cin>>n>>k;
    for(int i=0;i<k;i++){
        cin>>index>>m;
        for(int j=0;j<m;j++){
            scanf("%s",s);
            if(mp.find(s)==mp.end()){
                vector<int> v;
                mp[s]=v;
            }
            mp[s].push_back(index);
        }
    }
    
    for(unordered_map<string,vector<int>>::iterator it=mp.begin();it!=mp.end();it++)
        sort(it->second.begin(),(it->second).end() );
    for(int i=0;i<n;i++){
        cin>>s;
        if(mp.find(s)==mp.end()){printf("%s 0\n",s);continue;}
        printf("%s %d",s,mp[s].size());
        for(int j=0;j<mp[s].size();j++){
            printf(" %d",mp[s][j]);
        }
        printf("\n");
    }
    return 0;
}

