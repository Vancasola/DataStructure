
//
//  A1143.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/4.
//  Copyright © 2020 none. All rights reserved.
//  6:08
/*
#include <stdio.h>
#include <iostream>
#include <set>
using namespace std;
int main(){
    set<int> s;
    int n,m,a,b,x[10010]={0};
    cin>>n>>m;
    for(int i=0;i<m;i++){
        scanf("%d",&x[i]);
        s.insert(x[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        if(s.find(a)==s.end())
            if(s.find(b)==s.end()) printf("ERROR: %d and %d are not found.\n",a,b);
            else printf("ERROR: %d is not found.\n",a);
        else if(s.find(b)==s.end())printf("ERROR: %d is not found.\n",b);
        else {
            int lca;
            for(int j=0;j<m;j++){
                if((x[j]<=a && x[j]>=b) || (x[j]>=a && x[j]<=b)){lca=x[j];break;}
                if(x[j]==a){lca=a;break;}
                if(x[j]==b){lca=b;break;}
            }
            if(lca!=a && lca!=b)printf("LCA of %d and %d is %d.\n",a,b,lca);
            else if(lca==a && lca!=b)printf("%d is an ancestor of %d.\n",lca,b);
            else if(lca==b )printf("%d is an ancestor of %d.\n",lca,a);
        }
    }
    return 0;
}
*/
