//
//  A1134.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/27.
//  Copyright © 2020 none. All rights reserved.
//  3:50 4:06
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <stack>
#include <set>
#include <algorithm>
#include <unordered_map>
using namespace std;
int main(){
    int n,m,k,h,t,a,b;
    vector<pair<int,int>> v;
    set<int> s;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        scanf("%d %d",&a,&b);
        v.push_back(pair<int,int>(a,b));
    }
    cin>>k;
    for(int i=0;i<k;i++){
        cin>>h;
        s.clear();
        for(int j=0;j<h;j++){
            scanf("%d",&t);
            s.insert(t);
        }
        bool f=true;
        for(int j=0;j<m;j++){
            if(s.find(v[j].first)==s.end()&&s.find(v[j].second)==s.end()){
                printf("No\n");
                f=false;
                break;
            }
        }
        if(f)printf("Yes\n");
    }
    return 0;
}
*/
