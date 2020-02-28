//
//  A1154.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/28.
//  Copyright © 2020 none. All rights reserved.
//  9:54 10:00
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
#include <unordered_map>
using namespace std;
int main(){
    int n,m,a,b,k;
    cin>>n>>m;
    vector<pair<int,int>> v;
    for(int i=0;i<m;i++){
        scanf("%d %d",&a,&b);
        v.push_back(pair<int,int>(a,b));
    }
    cin>>k;
    int c[10004];
    for(int i=0;i<k;i++){
        set<int> s;
        for(int j=0;j<n;j++){
            scanf("%d",&c[j]);
            s.insert(c[j]);
        }
        bool f=true;
        for(int j=0;j<v.size();j++){
            if(c[v[j].first]==c[v[j].second]){
                f=false;
                break;
            }
        }
        if(f)printf("%d-coloring\n",s.size());
        else printf("No\n");
    }
    return 0;
}
*/

