//
//  A1039.cpp
//  DataStructure
//
//  Created by vancasola on 2020/3/26.
//  Copyright © 2020 none. All rights reserved.
//  4:39 4:47
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <unordered_map>
#include <iostream>
#include <map>
using namespace std;
int main(){
    unordered_map<string,vector<int>> p;
    int n,m,id,k;
    char s[5];
    cin>>n>>m;
    for(int i=0;i<m;i++){
        scanf("%d %d",&id,&k);
        for(int j=0;j<k;j++){
            scanf("%s",s);
            p[s].push_back(id);
        }
    }
    for(unordered_map<string,vector<int>>::iterator it = p.begin();it!=p.end();it++){
        sort(it->second.begin(),it->second.end());
    }
    for(int i=0;i<n;i++){
        scanf("%s",s);
        printf("%s %d",s,p[s].size());
        for(int j=0;j<p[s].size();j++){
            printf(" %d",p[s][j]);
        }
        printf("\n");
    }
    return 0;
}
*/
