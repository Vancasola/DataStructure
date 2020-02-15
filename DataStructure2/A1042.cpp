//
//  A1042.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/15.
//  Copyright © 2020 none. All rights reserved.
//  9:39 9:50
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
int main(){
    string a[55],t[55];
    int i,p=1;
    for( i=1;i<=13;i++)a[i]="S"+to_string(p++);
    for( p=1;i<=2*13;i++)a[i]="H"+to_string(p++);
    for( p=1;i<=3*13;i++)a[i]="C"+to_string(p++);
    for( p=1;i<=4*13;i++)a[i]="D"+to_string(p++);
    for( p=1;i<=54;i++)a[i]="J"+to_string(p++);
    int n,b[55];
    cin>>n;
    for(int i=1;i<=54;i++)scanf("%d",&b[i]);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=54;j++){
            p=b[j];
            t[p]=a[j];
        }
        for(int j=1;j<=54;j++){
            a[j]=t[j];
        }
    }
    for(int i=1;i<=53;i++){
        printf("%s ",a[i].c_str());
    }
    printf("%s",a[54].c_str());
    return 0;
}
*/
