//
//  A1154.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/3.
//  Copyright © 2020 none. All rights reserved.
//  2:47 3:03 3:09
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main(){
    int n,m,k;
    int a,b;
    int c[10010];
    set<int> s1;
    set<pair<int,int>> s;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        scanf("%d %d",&a,&b);
        s.insert(pair<int,int>(a,b));
    }
    cin>>k;
    for(int i=0;i<k;i++){
        s1.clear();
        for(int j=0;j<n;j++){
            scanf("%d",&c[j]);
            s1.insert(c[j]);
        }
        bool f=false;
        for(set<pair<int,int>>::iterator it=s.begin();it!=s.end();it++){
            if(c[it->first]==c[it->second]){
                f=true;
                printf("No\n");
                break;
            }
        }
        if(!f)printf("%d-coloring\n",s1.size());
    }
    return 0;
}
*/
