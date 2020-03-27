//
//  A1103.cpp
//  DataStructure
//
//  Created by vancasola on 2020/3/27.
//  Copyright © 2020 none. All rights reserved.
//  12:58 13:35
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
int n,k,p;
vector<int> v,r;
void dfs(int sum, int x){
    //printf("%d\n",sum);
    if(v.size()==k&& sum==n){
        int s1=0,s2=0;
        for(int i=0;i<v.size();i++)s1+=v[i];
        for(int i=0;i<r.size();i++)s2+=r[i];
        if(s1>s2){
            r=v;
            return;
        }
        else if(s1==s2){
            for(int i=0;i<min(v.size(),r.size());i++){
                if(v[i]>r[i]){
                    r=v;
                    return;
                }
                else if(v[i]<r[i])return;
            }
        }
        return  ;
    }
    else if(v.size()>k || sum>n)return;
    
    for(int i=x;i>=1;i--){
        v.push_back(i);
        dfs(sum+pow(i,p),i);
        v.pop_back();
    }
}
int main(){
    cin>>n>>k>>p;
    for(int x=pow(double(n),double(1.0/p))+0.01;x>=1;x--){
        v.push_back(x);
        dfs(pow(x,p),x);
        v.pop_back();
    }
    if(!r.size()){
        printf("Impossible\n");
        return 0;
    }
    else if(r.size()){
        printf("%d = %d^%d",n,*r.begin(),p);
        for(int i=1;i<r.size();i++){
            printf(" + %d^%d",r[i],p);
        }
    }
    return 0;
}
 */
//169 5 2
//169 = 6^2 + 6^2 + 6^2 + 6^2 + 5^2
