//
//  A1122.cpp
//  DataStructure
//
//  Created by vancasola on 2020/4/9.
//  Copyright © 2020 none. All rights reserved.
//  4:03 4:20
/*
#include <stdio.h>
#include <unordered_map>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <iostream>
#include <set>
using namespace std;
int main(){
    set<pair<int,int>> s;
    int n,m,a,b,e,k,t;
    cin>>n>>e;
    for(int i=0;i<e;i++){
        scanf("%d %d",&a,&b);
        s.insert(pair<int,int>(a,b));
        s.insert(pair<int,int>(b,a));
    }
    cin>>k;
    for(int i=0;i<k;i++){
        scanf("%d",&m);
        vector<int> v;
        vector<bool> vis(205,false);
        unordered_map<int,int> p;
        for(int i=0;i<m;i++){
            scanf("%d",&t);
            vis[t]=true;
            p[t]++;
            v.push_back(t);
        }
        if(*v.begin()!=v.back()||p[*v.begin()]>2){
            printf("NO\n");
            continue;
        }
        bool f=false;
        for(int i=1;i<v.size();i++){
            if(s.find(pair<int,int>(v[i],v[i-1]))==s.end()){
                printf("NO\n");
                f=true;
                break;
            }
        }
        if(f)continue;
        for(int i=1;i<v.size()-1;i++){
            if(p[v[i]]!=1){
                printf("NO\n");
                f=true;
                break;
            }
        }
        if(f)continue;
        for(int i=1;i<=n;i++){
            if(!vis[i]){
                printf("NO\n");
                f=true;
                break;
            }
        }
        if(f)continue;
        printf("YES\n");
    }
    return 0;
}
*/
