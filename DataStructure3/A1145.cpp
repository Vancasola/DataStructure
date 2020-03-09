//
//  A1145.cpp
//  DataStructure
//
//  Created by vancasola on 2020/3/9.
//  Copyright © 2020 none. All rights reserved.
//  9:11 9:23
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <stack>
#include <iostream>
#include <map>
using namespace std;
bool isprime(int x){
    if(x<=1)return false;
    if(x==2)return true;
    int len=sqrt(x);
    for(int i=2;i<=len;i++)
        if(x%i==0)
            return false;
    return true;
}
int main(){
    int h[100001],s,n,m,t,p;
    fill(h,h+100001,-1);
    cin>>s>>n>>m;
    while(!isprime(s))s++;
    for(int i=0;i<n;i++){
        scanf("%d",&t);
        bool f=false;
        for(int j=0;j<=s;j++){
            p=(t+j*j)%s;
            if(h[p]==-1){
                f=true;
                h[p]=t;
                break;
            }
        }
        if(!f)printf("%d cannot be inserted.\n",t);
    }
    double sum=0.0;
    for(int i=0;i<m;i++){
        scanf("%d",&t);
        bool f=false;
        for(int j=0;j<=s;j++){
            p=(t+j*j)%s;
            sum++;
            if(h[p]==t || h[p]==-1){
                f=true;
                break;
            }
        }
    }
    printf("%.1lf",sum/m);
    return 0;
}
*/
