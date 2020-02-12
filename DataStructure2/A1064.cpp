//
//  A1064.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/12.
//  Copyright © 2020 none. All rights reserved.
//  1:43 2:00
/*
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int n,a[1010],b[1010],t;
void insert(int i,int x){
    if(x<a[i] )insert(2*i+1, x);
    if(a[i]==-1){
        a[i]=x;
        return;
    }
    if(x>=a[i])insert(2*i+2, x);
}
int p=0;
void inorder(int i){
    if(2*i+1<n)inorder(2*i+1);
    b[i]=a[p++];
    if(2*i+2<n)inorder(2*i+2);
}
int main(){
    cin>>n;
    fill(a,a+1010,-1);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sort(a,a+n);
    inorder(0);
    for(int i=0;i<n-1;i++)printf("%d ",b[i]);
    printf("%d",b[n-1]);
    return 0;
}

*/
