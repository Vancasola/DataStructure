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
void insertion(){
    bool f=false;
    for(int i=1;i<n;i++){
        if(Equal(a, b))f=true;
        for(int j=i-1;j>=0;j--){
            if(a[j+1]<a[j])swap(a[j], a[j+1]);
            else{
                break;
            }
        }
        //display(a);
        if(f){
            cout<<"Insertion Sort"<<endl;
            display(a);
            return;
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
    insertion();
    return 0;
}
*/
