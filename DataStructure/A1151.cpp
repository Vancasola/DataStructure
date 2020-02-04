//
//  A1151.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/4.
//  Copyright © 2020 none. All rights reserved.
//  8:22 8:45
/*
#include <stdio.h>
#include <set>
#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
    set<int> s;
    int in[10010],pre[10100],n,m,a,b,lca=0;
    unordered_map<int,int> p;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        scanf("%d",&in[i]);
        p[in[i]]=i;
        }
    for(int i=0;i<m;i++){
        scanf("%d",&pre[i]);
        s.insert(pre[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        if(s.find(a)==s.end() && s.find(b)==s.end())printf("ERROR: %d and %d are not found.\n",a,b);
        else if(s.find(a)==s.end())printf("ERROR: %d is not found.\n",a);
        else if(s.find(b)==s.end())printf("ERROR: %d is not found.\n",b);
        else{
            int l=min(p[a],p[b]),r=max(p[a],p[b]);
            for(int j=0;j<m;j++){
                if(p[pre[j]]>=l && p[pre[j]]<=r){lca=pre[j];break;}
            }
            if(lca==a)printf("%d is an ancestor of %d.\n",lca,b);
            else if(lca==b)printf("%d is an ancestor of %d.\n",lca,a);
            else if(lca!=a && lca!=b)printf("LCA of %d and %d is %d.\n",a,b,lca);
        }
                   
    }
    return 0;
}
*/
