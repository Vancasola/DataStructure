//
//  A1143.cpp
//  DataStructure
//
//  Created by vancasola on 2020/3/31.
//  Copyright © 2020 none. All rights reserved.
//
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <iostream>
#include <unordered_map>
#include <set>
using namespace std;
int main(){
    int n,m,t,a,b;
    vector<int> v;
    set<int> s;
    cin>>m>>n;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&t);
        v.push_back(t);
        s.insert(t);
    }
    for(int i=0;i<m;i++)
    {
        scanf("%d %d",&a,&b);
        if(s.find(a)==s.end()){
            if(s.find(b)==s.end()){
                printf("ERROR: %d and %d are not found.\n",a,b);
                continue;
            }
            else
            {
                printf("ERROR: %d is not found.\n",a);
                continue;
            }
        }
        else if(s.find(a)!=s.end()&&s.find(b)==s.end()){
            printf("ERROR: %d is not found.\n",b);
            continue;
        }
        int lca=0,x,y;
        if(a>b){x=a;y=b;}
        else{x=b;y=a;}
        for(int j=0;j<n;j++){
            if(v[j]>=y&&v[j]<=x){
                lca=v[j];
                break;
            }
        }
        if(lca!=a&&lca!=b)printf("LCA of %d and %d is %d.\n",a,b,lca);
        else if(lca==a)printf("%d is an ancestor of %d.\n",lca,b);
        else printf("%d is an ancestor of %d.\n",lca,a);
    }
    return 0;
}
*/
