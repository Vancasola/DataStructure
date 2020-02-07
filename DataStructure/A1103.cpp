
//
//  A1103.cpp
//  DataStructure
//
//  Created by vancaosla on 2020/2/5.
//  Copyright © 2020 none. All rights reserved.
//
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
vector<int> v,res;
int n;
bool f=false;
int power(int x,int p){
    int s=1;
    while(p--)
        s*=x;
    return s;
}
void dfs(int x,int k,int sum,int p){
    v.push_back(x);
    sum+=power(x,p);
    if(sum>n)return;
    if(k==0 && sum==n){
        int s1=0,s2=0;;
        for(int i=0;i<v.size();i++)s1+=v[i];
        for(int i=0;i<res.size();i++)s2+=res[i];
        if(s2<s1)res=v;
        return;
    }
    if(k==0)return;
    for(int i=x;i>=1;i--){
        dfs(i,k-1,sum,p);
        v.pop_back();
    }
}
int main(){
    int k,p;
    cin>>n>>k>>p;
    if(k>n){
        printf("Impossible");
        return 0;
    }
    int init;
    if(p==1)init=n;
    else init=(int)(pow(n*1.0,1.0/p)+0.001);
    for(int i=init;i>=1;i--){
        v.clear();
        dfs(i,k-1,0,p);
    }

    if(res.size()){
        printf("%d = ",n);
        for(int i=0;i<res.size();i++){
            if(i)printf(" + ");
            printf("%d^%d",res[i],p);
        }
    }
    else printf("Impossible");
    return 0;
}
*/
