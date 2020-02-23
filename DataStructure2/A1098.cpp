//
//  A1098.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/23.
//  Copyright © 2020 none. All rights reserved.
//  10:43 11:29
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
#include <unordered_map>
using namespace std;
int n,a[105],b[105],c[105];
void display(int a[]){
    for(int i=0;i<n-1;i++)
        printf("%d ",a[i]);
    printf("%d\n",a[n-1]);
}
bool Equal(int a[],int b[]){
    for(int i=0;i<n;i++)
        if(a[i]!=b[i])return false;
    return true;
}
bool insertion(){
    bool f=false;
    for(int i=1;i<n;i++){
        int t=a[i];
        for(int j=i;j>=0;j--){
            if(a[j-1]>t){
                a[j]=a[j-1];
            }
            else {
                a[j]=t;
                break;
            }
        }
        if(f){
            printf("Insertion Sort\n");
            display(a);
            return true;
        }
        f=Equal(a, c);
    }
    return false;
}
void downadjust(int x,int k){
    for(int i=x;i<=k;){
        int y=i*2+1;
        if(y+1<=k && b[i*2+2]>b[y])y=i*2+2;
        if(y<=k && b[i]<b[y])swap(b[i],b[y]);
        else break;
        i=y;
    }
}
void create(){
    for(int i=n/2-1;i>=0;i--){
        downadjust(i,n-1);
    }
}
void heapsort(){
    bool f=false;
    for(int i=n-1;i>=0;i--){
        //display(b);
        swap(b[0],b[i]);
        downadjust(0,i-1);
        if(f){
            printf("Heap Sort\n");
            display(b);
        }
        f=Equal(b, c);
    }
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    for(int i=0;i<n;i++)
        scanf("%d",&c[i]);
    if(insertion())return 0;
    create();
    heapsort();
}
*/
