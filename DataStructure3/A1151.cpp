//
//  A1151.cpp
//  DataStructure
//
//  Created by vancasola on 2020/3/13.
//  Copyright © 2020 none. All rights reserved.
//  11:16 11:39
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <unordered_map>
#include <iostream>
#include <set>
using namespace std;
int in[10001],pre[10001];
int main(){
    int m,n,a,b;
    unordered_map<int,int> p;
    set<int> s;
    cin>>m>>n;
    for(int i=0;i<n;i++){
        scanf("%d",&in[i]);
        s.insert(in[i]);
        p[in[i]]=i;
    }
    for(int i=0;i<n;i++){
        scanf("%d",&pre[i]);
        s.insert(pre[i]);
    }
    for(int i=0;i<m;i++){
        scanf("%d %d",&a,&b);
        if(s.find(a)==s.end()){
            if( s.find(b)==s.end()){
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
        int pa=p[a],pb=p[b];
        if(pb<pa){
            swap(pa,pb);
        }
        int lca=0;
        for(int i=0;i<n;i++){
            if(p[pre[i]]>=pa && p[pre[i]]<=pb)
            {
                lca=pre[i];
                break;
            }
        }
        if(lca==a)printf("%d is an ancestor of %d.\n",lca,b);
        else if(lca==b)printf("%d is an ancestor of %d.\n",lca,a);
        else printf("LCA of %d and %d is %d.\n",a,b,lca);
    }
    return 0;
}
*/
