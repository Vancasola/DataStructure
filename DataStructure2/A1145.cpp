//
//  A1145.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/27.
//  Copyright © 2020 none. All rights reserved.
//  10:16 10:42
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <stack>
#include <cmath>
#include <algorithm>
#include <unordered_map>
using namespace std;
bool isprime(int x){
    if(x<=1)return false;
    if(x==2)return true;
    for(int i=2;i<=sqrt(x);i++)
        if(x%i==0)return false;
    return true;
}
int main(){
    int s,n,m,h[100005],t,j,p;
    cin>>s>>n>>m;
    while(!isprime(s))s++;
    fill(h,h+100005,-1);
    for(int i=0;i<n;i++){
        scanf("%d",&t);
        bool f=false;
        for(j=0;j<s;j++){
            p=(t+j*j)%s;
            if(h[p]==-1){
                f=true;
                h[p]=t;
                break;
            }
        }
        if(!f)printf("%d cannot be inserted.\n",t);
    }
    int sum=0;
    for(int i=0;i<m;i++){
        scanf("%d",&t);
        for(j=0;j<=s;j++){
            p=(t+j*j)%s;
            sum++;
            if(h[p]==t || h[p]==-1){
                break;
            }
        }
    }
    printf("%.1lf",double(sum)/m);
    return 0;
}
*/
