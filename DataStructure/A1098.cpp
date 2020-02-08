//
//  A1098.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/1.
//  Copyright © 2020 none. All rights reserved.
//  11:28 11:45
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n,a[100],b[100],c[100];
void display(int x[]){
    for(int i=0;i<n-1;i++){
        printf("%d ",x[i]);
    }
    printf("%d\n",x[n-1]);
}
bool Equal(int a1[],int a2[]){
    for(int i=0;i<n;i++){
        if(a1[i]!=a2[i])return false;
    }
    return true;
}
bool insertion(){
    bool f=false;
    for(int i=1;i<n;i++){
        int x=a[i];
        for(int j=i-1;j>=-1;j--){
            if(x<a[j])a[j+1]=a[j];
            else{
                a[j+1]=x;
                break;
            }
        }
        if(f){
            cout<<"Insertion Sort"<<endl;
            display(a);
            return f;
        }
        f=Equal(a, b);
    }
    return f;
}
void downAdjust(int low,int high){
    int i=low,j=2*i+1;
    while(j<=high){
        if(j+1<=high && c[j+1]>c[j])j=j+1;
        if(c[i]<c[j]){
            swap(c[i],c[j]);
            i=j;
            j=2*i+1;
        }
        else break;
    }
}
void create(){
    for(int i=n/2;i>=0;i--){
        downAdjust(i,n-1);
    }
}
void heapsort(){
    create();
    bool f=false;
    for(int i=n-1;i>=0;i--){
        if(f){printf("Heap Sort\n");display(c);break;}
        if(Equal(b, c))f=true;
        swap(c[0],c[i]);
        downAdjust(0, i-1);
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
    if(insertion())return 0;
    heapsort();
    return 0;
}

*/
