//
//  A1078.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/21.
//  Copyright © 2020 none. All rights reserved.
//  9:48 10:07 11:08
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <queue>
#include <cmath>
using namespace std;
bool isprime(int x){
    if(x<=1)return false;
    else if(x==2)return true;
    for(int i=2;i<=sqrt(x);i++){
        if(x%i==0)return false;
    }
    return true;
}
int main(){
    int n,k,t;
    int a[100005];
    fill(a,a+100005,-1);
    cin>>k>>n;
    for(int i=k;;i++){
        if(isprime(i)){
            k=i;
            break;
        }
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&t);
        int p=-1;
        bool f=false;
        for(int j=0;j<=k;j++){
            p=(t+j*j)%k;
            if(a[p]==-1){
                f=true;
                a[p]=t;
                if(!i)printf("%d",p);
                else printf(" %d",p);
                break;
            }
        }
        if(!f){
            if(i)printf(" -");
            else printf("-");
        }
    }
    return 0;
}
*/
