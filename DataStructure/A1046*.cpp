//
//  A1046.cpp
//  DataStructure
//
//  Created by vancasola on 2020/1/18.
//  Copyright © 2020 none. All rights reserved.
//
/*
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<int> v(100010,0);
int n,m;
int main(){
    int a,b,t,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&t);
        v[i]=v[i-1]+t;
        sum+=t;
    }
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        scanf("%d %d",&a,&b);
        if(b<a)swap(b, a);
        printf("%d\n",min(v[b-1]-v[a-1],sum-v[b-1]+v[a-1]));
    }
    return 0;
}
*/
