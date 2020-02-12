//
//  A1015.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/12.
//  Copyright © 2020 none. All rights reserved.
//  1:10 1:25
/*
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
bool isprime(int x){
    if(x<=1)return false;
    if(x==2)return true;
        for(int i=2;i<sqrt(x);i++)
            if(x%i==0)return false;
    return true;
}
int main(){
    int n,r,a=0,b;
    vector<int> v;
    scanf("%d",&n);
    while(n>=0){
        scanf("%d",&r);
        if(!n){
            printf("No\n");
            scanf("%d",&n);
            continue;
        }
        if(!isprime(n)){
            printf("No\n");
            scanf("%d",&n);
            continue;
        }
        v.clear();
        while(n){
            v.push_back( n%r);
            n/=r;
        }
        int t=1,sum=0;
        for(int i=v.size()-1;i>=0;i--){
            sum+=v[i]*t;
            t*=r;
        }
        //cout<<sum<<endl;
        if(!isprime(sum)){
            printf("No\n");
            scanf("%d",&n);
            continue;
        }
        else{
            printf("Yes\n");
            scanf("%d",&n);
            continue;
        }
    }
    return 0;
}
*/
