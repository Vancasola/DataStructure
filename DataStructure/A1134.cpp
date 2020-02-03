//
//  A1134.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/3.
//  Copyright © 2020 none. All rights reserved.
//  3:17 3:41
/*
#include <stdio.h>
#include <iostream>
#include <set>
using namespace std;
int main(){
    set<pair<int,int>> s;
    set<int> s1;
    int n,m,k,v,a,b,t;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        scanf("%d%d",&a,&b);
        s.insert(pair<int,int>(a,b));
    }
    cin>>k;
    for(int i=0;i<k;i++){
        cin>>v;
        s1.clear();
        for(int j=0;j<v;j++){
            scanf("%d",&t);
            s1.insert(t);
        }
        bool f=false;
        for(set<pair<int,int>>::iterator it=s.begin();it!=s.end();it++){
            if(s1.find(it->first)!=s1.end() || s1.find(it->second)!=s1.end())continue;
            else{
                f=true;
                break;
            }
        }
        if(f)printf("No\n");
        else printf("Yes\n");
    }
    return 0;
}
*/
