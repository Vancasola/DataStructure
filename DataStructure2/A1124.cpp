//
//  A1124.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/26.
//  Copyright © 2020 none. All rights reserved.
//  3:00 3:07
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <queue>
#include <cmath>
using namespace std;
int main(){
    unordered_map<string,bool> p;
    vector<string> v,ans;
    string t;
    int n,m,k;
    cin>>n>>m>>k;
    for(int i=0;i<n;i++){
        cin>>t;
        v.push_back(t);
        p[t]=false;
    }
    for(int i=k-1;i<n;i+=m){
        if(!p[v[i]]){
            ans.push_back(v[i]);
            p[v[i]]=true;
        }
        else {
            while(i<n && p[v[i]]){
                i++;
            }
            ans.push_back(v[i]);
            p[v[i]]=true;
        }
    }
    if(ans.size())
    for(int i=0;i<ans.size();i++){
        printf("%s\n",ans[i].c_str());
    }
    else printf("Keep going...\n");
    return 0;
}
*/
