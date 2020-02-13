//
//  A1045.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/13.
//  Copyright © 2020 none. All rights reserved.
//  3:20 3:37 3:39
/*
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;
int main(){
    int n,m,l;
    int a[205],b[10005];
    unordered_map<int,int> p;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        scanf("%d",&a[i]);
        p[a[i]]=0;
    }
    cin>>l;
    for(int i=0;i<l;i++)
        scanf("%d",&b[i]);
    
    for(int i=0;i<l;i++){
        int Max=0;
        for(int j=0;j<m;j++){
            if(p[a[j]]>Max){
                Max=p[a[j]];
            }
            if(a[j]==b[i])break;
        }
        p[b[i]]=Max+1;
    }
    int Max=0;
    for(int i=0;i<m;i++){
        if(p[a[i]]>Max)
            Max=p[a[i]];
    }
    printf("%d",Max);
    return 0;
}
*/
