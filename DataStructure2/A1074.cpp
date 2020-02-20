//
//  A1074.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/20.
//  Copyright © 2020 none. All rights reserved.
//  10:43 11:02
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
struct node{
    int addr,next,data;
}a[100005],b[100005],c[100005];
int addr,nex,data;
int main(){
    int h,n,k,p=0;
    cin>>h>>n>>k;
    for(int i=0;i<n;i++){
        scanf("%d %d %d",&addr,&data,&nex);
        a[addr].addr=addr;
        a[addr].data=data;
        a[addr].next=nex;
    }
    if(a[h].next==-1){
        printf("%05d %d -1\n",a[h].addr,a[h].data);
        return 0;
    }
    for(int i=h;i!=-1;i=a[i].next){
        b[p++]=a[i];
    }
    int q=0,i=0;
    for( i=0;i<p;i++){
        if(i<p/k)
        for(int j=k*(i+1)-1;j>=k*i;j--){
            c[q++]=b[j];
        }
        else
            for(int j=k*i;j<p;j++){
                c[q++]=b[j];
            }
    }
    for(int i=0;i<q-1;i++){
        printf("%05d %d %05d\n",c[i].addr,c[i].data,c[i+1].addr);
    }
    printf("%05d %d -1\n",c[q-1].addr,c[q-1].data);
    return 0;
}

*/
