
//
//  A1066.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/5.
//  Copyright © 2020 none. All rights reserved.
//
/*
#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;
bool isprime(int x){
    int k=sqrt(x);
    if(x<=2)return false;
    if(x==2)return true;
    for(int i=2;i<=k;i++){
        if(x%i==0)return false;
    }
    return true;
}
int main(){
    int size,n,m,i,t,p;
    int a[10010];
    fill(a,a+10010,-1);
    cin>>size>>n>>m;
    for( i=size;;i++){
        if(isprime(i))break;
    }
    size=i;
    for(int i=0;i<n;i++){
        scanf("%d",&t);
        for(int j=0;;j++){
            p=(t+j*j)%size;
            if(j>size){
                printf("%d cannot be inserted.\n",t);
                break;
            }
            else if(a[p]==-1){
                a[p]=t;
                break;
            }
        }
    }
    double sum=0.0;
    for(int i=0;i<m;i++){
        scanf("%d",&t);
        for(int j=0;j<=size;j++){
            p=(t+j*j)%size;
            sum++;
            if(a[p]==-1 || a[p]==t)break;
        }
    }
    printf("%.1f",sum/m);
    return 0;
}

*/
