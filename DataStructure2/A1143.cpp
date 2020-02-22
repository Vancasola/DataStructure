//
//  A1143.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/22.
//  Copyright © 2020 none. All rights reserved.
//  4:04 4:25
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <set>
using namespace std;
int main(){
    int n,m;
    int v[10005]={0},a,b;
    set<int> s;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        scanf("%d",&v[i]);
        s.insert(v[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        if(s.find(a)==s.end()){
            if(s.find(b)==s.end()){
                printf("ERROR: %d and %d are not found.\n",a,b);
            }
            else printf("ERROR: %d is not found.\n",a);
            continue;
        }
        else if(s.find(b)==s.end()){
            printf("ERROR: %d is not found.\n",b);
            continue;
        }
        for(int j=0;j<m;j++){
            if((v[j]>a && v[j]<b)||(v[j]>b && v[j]<a))
            {
                printf("LCA of %d and %d is %d.\n",a,b,v[j]);
                break;
            }
             if(v[j]==a){

                printf("%d is an ancestor of %d.\n",a,b);
                break;
            }
             if(v[j]==b){
                printf("%d is an ancestor of %d.\n",b,a);
                break;
            }
        }
    }
    return 0;
}
*/
