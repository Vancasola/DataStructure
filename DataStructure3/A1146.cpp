//
//  A1146.cpp
//  DataStructure
//
//  Created by vancasola on 2020/5/19.
//  Copyright © 2020 none. All rights reserved.
//  10:07
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <set>
#include <iostream>
#include <map>
using namespace std;
int main(){
    int n,m,a,b,k,t;
    bool vis[1005]={false};
    set<int> s[1005];
    scanf("%d %d",&n,&m);
    for(int i=0;i<m;i++){
        scanf("%d %d",&a,&b);
        s[b].insert(a);
    }
    scanf("%d",&k);
    vector<int> r;
    for(int i=0;i<k;i++){
        vector<int> v;
        set<int> vis;
        for(int j=0;j<n;j++){
            scanf("%d",&t);
            v.push_back(t);
            vis.insert(t);
        }
        bool f=false;
        for(int j=0;j<n;j++){
            t=v[j];
            for(set<int>::iterator it=s[t].begin();it!=s[t].end();it++){
                if(vis.find(*it)!=vis.end()){
                    f=true;
                    break;
                }
            }
            vis.erase(t);
            if(f)break;
        }
        if(f)r.push_back(i);
    }
    for(int i=0;i<r.size();i++){
        if(!i)printf("%d",r[i]);
        else printf(" %d",r[i]);
    }
    return 0;
}
*/
