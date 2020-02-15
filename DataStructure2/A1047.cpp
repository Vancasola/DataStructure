//
//  A1047.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/15.
//  Copyright © 2020 none. All rights reserved.
//  4:12 4:23
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
int main(){
    vector<string> v[2510];
    int n,k,m,t;
    cin>>n>>m;
    char a[5];
    for(int i=0;i<n;i++){
        scanf("%s %d",a,&k);
        for(int i=0;i<k;i++){
            scanf("%d",&t);
            v[t].push_back(a);
        }
    }
    for(int j=1;j<=m;j++){
        sort(v[j].begin(),v[j].end());
        printf("%d %d\n",j,v[j].size());
        for(int i=0;i<v[j].size();i++){
            printf("%s\n",v[j][i].c_str());
        }
    }
    return 0;
}
*/
