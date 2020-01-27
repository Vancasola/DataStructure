//
//  A1064.cpp
//  DataStructure
//
//  Created by vancasola on 2020/1/27.
//  Copyright © 2020 none. All rights reserved.
//  4:33 4:48
/*
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int a[1010]={0};
vector<int> v(1010);
int n,p=0;
void inorder(int k){
    if(2*k+1<n)inorder(2*k+1);
    a[k]=v[p++];
    if(2*k+2<n)inorder(2*k+2);
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++)
        scanf("%d",&v[i]);
    sort(v.begin(),v.begin()+n);
    inorder(0);
    printf("%d",a[0]);
    for(int i=1;i<n;i++)
        printf(" %d",a[i]);
    return 0;
}*/
