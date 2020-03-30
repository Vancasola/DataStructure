//
//  A1098.cpp
//  DataStructure
//
//  Created by vancasola on 2020/3/30.
//  Copyright © 2020 none. All rights reserved.
//
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <iostream>
#include <cmath>
using namespace std;
int a[105],b[105],c[105],n=0;
void display(int v[]){
    for(int i=0;i<n;i++){
        if(i)printf(" %d",v[i]);
        else printf("%d",v[i]);
    }
    printf("\n");
}
bool isequal(int v[]){
    for(int i=0;i<n;i++){
        if(v[i]!=c[i])return false;
    }
    return true;
}
bool insertionsort(){
    bool f=false;
    for(int i=1;i<n;i++){
        int t=a[i];
        for(int j=i-1;j>=-1;j--){
            if(j>=0&&t<a[j])a[j+1]=a[j];
            else {
                a[j+1]=t;
                break;
            }
        }
        if(f){
            printf("Insertion Sort\n");
            display(a);
            return true;
        }
        if(isequal(a))f= true;
    }
    return false;
}
void downadjust(int v[],int x,int m){
    int p;
    while(1){
        p=2*x+1;
        if(p+1<m&&v[p+1]>v[p])
            p=p+1;
        if(p<m&& v[p]>v[x])
        {
            swap(v[p],v[x]);
            x=p;
        }
        else break;
    }
}
void heapsort(){
    bool f=false;
    for(int x=n/2;x>=0;x--){
        downadjust(b, x, n);
    }
    for(int i=0;i<n;i++){
        swap(b[0],b[n-i-1]);
        downadjust(b, 0, n-i-1);
        if(f){
            printf("Heap Sort\n");
            display(b);
            return;
        }
        if(isequal(b))f=true;
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
    if(insertionsort())
        return 0;
    else heapsort();
    return 0;
}
*/
