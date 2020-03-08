//
//  A1128.cpp
//  DataStructure
//
//  Created by vancasola on 2020/3/8.
//  Copyright © 2020 none. All rights reserved.
//  3:44 3:55
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <iostream>
#include <set>
using namespace std;
int main(){
    int n,k,t;
    vector<pair<int,int>> v;
    cin>>n;
    for(int i=1;i<=n;i++){
        scanf("%d",&k);
        v.clear();
        for(int j=1;j<=k;j++){
            scanf("%d",&t);
            v.push_back(pair<int,int>(j,t));
        }
        bool f=true;
        for(int i=0;i<v.size();i++){
            for(int j=i+1;j<v.size();j++){
                if((v[j].first==v[i].first && v[j].second!=v[i].second)
                   ||(v[j].first!=v[i].first && v[j].second==v[i].second)
                   ||(v[j].first-v[i].first == v[j].second-v[i].second)){
                    printf("NO\n");
                    f=false;
                    break;
                }
            }
            if(!f)break;
        }
        if(f)printf("YES\n");
    }
    return 0;
}
*/
