//
//  A1124.cpp
//  DataStructure
//
//  Created by vancasola on 2020/1/14.
//  Copyright © 2020 none. All rights reserved.
//  10:31 10:42
/*
#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;
int main(){
    string name;
    vector<string> v(1010);
    vector<string> ans;
    set<string> se;
    char c[25];
    int n,s,f;
    cin>>n>>s>>f;
    for(int i=1;i<=n;i++){
        scanf("%s",c);
        v[i]=c;
    }
    for(int i=f;i<=n;i+=s){
        if(se.find(v[i])==se.end()){
            ans.push_back(v[i]);
            se.insert(v[i]);
        }
        else{
            for(i=i+1;i<=n;i++){
                if(se.find(v[i])==se.end()){
                    ans.push_back(v[i]);
                    se.insert(v[i]);
                    break;
                }
            }
        }
    }
    if(!ans.size()){
        printf("Keep going...");
    }
    else for(int i=0;i<ans.size();i++){
        printf("%s\n",ans[i].c_str());
    }
    return 0;
}
*/
