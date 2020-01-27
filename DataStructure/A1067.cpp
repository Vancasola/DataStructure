//
//  A1067.cpp
//  DataStructure
//
//  Created by vancasola on 2020/1/27.
//  Copyright © 2020 none. All rights reserved.
//  4:51
/*
#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,p[100100]={0},t,left;
    cin>>n;
    left=n-1;
    for(int i=0;i<n;i++){
        scanf("%d",&t);
        p[t]=i;
        if(t==i && t!=0)left--;
    }
    int cnt=0;
    int j=1;
    while(left>0){
        if(!p[0])
            for(;j<n;j++){
            if(p[j]!=j){
                swap(p[0],p[j]);
                cnt++;
                break;
            }
        }
        while(p[0]){
            swap(p[0],p[p[0]]);
            cnt++;
            left--;
        }
    }
    cout<<cnt;
    return 0;
 }
*/
