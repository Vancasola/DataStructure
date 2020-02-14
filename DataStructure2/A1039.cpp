//
//  A1039.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/14.
//  Copyright © 2020 none. All rights reserved.
//  4:07 4:22
/*
#include <stdio.h>
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
int main(){
    int n,k,index,m;
    string s;
    map<string,vector<int>> p;
    cin>>n>>k;
    for(int i=0;i<k;i++){
        cin>>index>>m;
        for(int j=0;j<m;j++){
            cin>>s;
            p[s].push_back(index);
        }
    }
    for(map<string,vector<int>>::iterator it=p.begin();it!=p.end();it++)sort((it->second).begin(),(it->second).end() );
    for(int i=0;i<n;i++){
        cin>>s;
        printf("%s %d",s.c_str(),p[s].size());
        if(!p[s].size()){printf("\n");continue;}
        for(int j=0;j<p[s].size();j++){
            printf(" %d",p[s][j]);
        }
        printf("\n");
    }
    return 0;
}
*/
