//
//  A1096.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/23.
//  Copyright © 2020 none. All rights reserved.
//  2:25 2:35
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <unordered_map>
using namespace std;
int main(){
    int n,t;
    vector<int> v,m;
    cin>>n;
    t=n;
//    for(int i=2;i<=sqrt(t)+1;i++){
//        if(n<=1 || n%i){
//            n=t;
//            if(m.size()<v.size())m=v;
//            v.clear();
//        }
//        else if(n%i==0){
//            n/=i;
//            v.push_back(i);
//        }
//    }
    int maxn=sqrt(n)+1,len=-1,j,begin;
    for(int i=2;i<=maxn;i++){
        t=1;
        for( j=i;j<=maxn;j++){
            t*=j;
            if(n%t!=0){break;}
        }
        if(j-i>len){
            len=j-i;
            begin=i;
        }
    }
//    if(!m.size()){
//        printf("%d\n%d",1,n);
//        return 0;
//    }
    if(!len){
        printf("%d\n%d",1,n);
        return 0;
    }
    printf("%d\n",len);
    printf("%d",begin);
    for(int i=begin+1;i<begin+len;i++)printf("*%d",i);
//    printf("%d\n",m.size());
//    for(int i=0;i<m.size();i++){
//        if(i)printf("*%d",m[i]);
//        else printf("%d",m[i]);
//    }
    return 0;
}

*/
