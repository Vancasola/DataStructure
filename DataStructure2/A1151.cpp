//
//  A1151.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/24.
//  Copyright © 2020 none. All rights reserved.
//  10:28 11:07 11:56
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
#include <unordered_map>
using namespace std;
int main(){
    set<int> s;
    int n,m,in[10005],pre[10005];
    unordered_map<int,int> p,q;
    int a,b;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        scanf("%d",&in[i]);
        s.insert(in[i]);
        p[in[i]]=i;
    }
    for(int i=0;i<m;i++){
        scanf("%d",&pre[i]);
        q[pre[i]]=i;
    }
    for(int i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        if(s.find(a)==s.end()){
            if(s.find(b)==s.end()){
                printf("ERROR: %d and %d are not found.\n",a,b);
                continue;
            }
            else{
                printf("ERROR: %d is not found.\n",a);
                continue;
            }
        }
        else if(s.find(b)==s.end()){
            printf("ERROR: %d is not found.\n",b);
            continue;
        }
        set<int> st;
        int lca=1,Min=9999999;
        for(int j=min(p[a],p[b]);j<=max(p[a],p[b]);j++)
        {
            if(q[in[j]]<Min ){
                Min=q[in[j]];
                lca=in[j];
            }
        }
        if(lca==a)printf("%d is an ancestor of %d.",a,b);
        else if(lca==b)printf("%d is an ancestor of %d.",b,a);
        else printf("LCA of %d and %d is %d.",a,b,lca);
        printf("\n");
    }
}
*/
