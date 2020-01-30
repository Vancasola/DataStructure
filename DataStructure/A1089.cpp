
//
//  A1089.cpp
//  DataStructure
//
//  Created by vancasola on 2020/1/30.
//  Copyright © 2020 none. All rights reserved.
//  4:45 5:10 5:18
/*
#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;
int n,a[105],b[105],c[105];
bool insertsort(){
    int x;
    bool f=false;
    for(int i=1;i<n;i++){
        x=a[i];
        for(int j=i-1;j>=-1;j--){
            if(x<a[j]){
                a[j+1]=a[j];
            }
            else{
                a[j+1]=x;
                break;
            }
        }
        if(f){
            printf("Insertion Sort\n");
            for(int k=0;k<n-1;k++){
                printf("%d ",a[k]);
            }
            printf("%d",a[n-1]);
            return true;
        }
        for(int i=0;i<n;i++){
            if(a[i]==b[i]){
                f=true;
                continue;
            }
            else{
                f=false;
                break;
            }
        }
    }
    return false;
}
void merge(){
    bool f=false;
    for(int x=2;x/2<=n;x*=2){
        for(int i=0;i<n;i++){
            if(c[i]==b[i]){
                f=true;
                continue;
            }
            else{
                f=false;
                break;
            }
        }
        for(int j=0;j<n;j+=x)sort(c+j,c+min(n,j+x));
        if(f){
            printf("Merge Sort\n");
            for(int k=0;k<n-1;k++)
                printf("%d ",c[k]);
            printf("%d",c[n-1]);
            return ;
        }
    }
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        c[i]=a[i];
    }
    for(int i=0;i<n;i++)
        scanf("%d",&b[i]);
    if(insertsort())return 0;
    merge();
    return 0;
}
*/
