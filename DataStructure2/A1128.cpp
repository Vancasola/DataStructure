//
//  A1128.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/27.
//  Copyright © 2020 none. All rights reserved.
//  11:04 11:10 
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <stack>
#include <queue>
#include <algorithm>
#include <unordered_map>
using namespace std;
int main(){
    vector<pair<int,int>> v;
    int n,k,t;
    cin>>n;
    for(int i=0;i<n;i++){
        scanf("%d",&k);
        v.clear();
        for(int j=1;j<=k;j++){
            scanf("%d",&t);
            v.push_back(pair<int,int>(j,t));
        }
        bool f=true;
        for(int j=0;j<v.size();j++){
            int x=v[j].first;
            int y=v[j].second;
            for(int k=0;k<v.size();k++){
                if(v[k].first==x && v[k].second==y)continue;
                if((v[k].first==x && v[k].second!=y)||(v[k].first!=x && v[k].second==y)||v[k].first-x==v[k].second-y){
                    f=false;
                    break;
                }
            }
            if(!f)break;
        }
        if(f)printf("YES\n");
        else printf("NO\n");
    }
    
    return 0;
}
*/
