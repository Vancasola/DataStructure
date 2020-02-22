//
//  A1089.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/22.
//  Copyright © 2020 none. All rights reserved.
//  4:25 5:09
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
int n,a[105],b[105],c[105];
bool Equal(int a[],int b[]){
    for(int i=0;i<n;i++){
        if(a[i]!=b[i])return false;
    }
    return true;
}
void display(int b[]){
    for(int i=0;i<n;i++){
        if(i<n-1)printf("%d ",b[i]);
        else printf("%d\n",b[i]);
    }
}
bool insertion(){
    bool f=false;
    for(int i=1;i<n;i++){
        int t=b[i];
        for(int j=i-1;j>=-1;j--){
            if(t<b[j]){
                b[j+1]=b[j];
            }
            else {
                b[j+1]=t;
                break;
            }
        }
        if(f){
            printf("Insertion Sort\n");
            display(b);
            return true;
        }
        if(Equal(b, c))f=true;
    }
    return false;
}
void mergesort(){
    bool f=false;
    for(int k=2;k<=n*2;k*=2){
        if(Equal(a, c))f=true;
        int j;
        for( j=0;j<n;j+=k){
            sort(a+j,a+min(j+k,n));
        }
        if(f){
            printf("Merge Sort\n");
            display(a);
            return;
        }
    }
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    for(int i=0;i<n;i++){
        scanf("%d",&c[i]);
    }
    if(insertion())return 0;
    mergesort();
    return 0;
}
*/
 
