//
//  A1046.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/15.
//  Copyright © 2020 none. All rights reserved.
//  4:10 4:12 4:56 5:36
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
int main(){
    int n,k,x,y,t,a[100005]={0},sum=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        scanf("%d",&t);
        a[i]=a[i-1]+t;
        sum+=t;
    }
    cin>>k;
    int m;
    for(int i=0;i<k;i++){
        scanf("%d %d",&x,&y);
        if(x>y)swap(x,y);
        m=min(a[y-1]-a[x-1],sum-a[y-1]+a[x-1]);
        printf("%d\n",m);
    }
    return 0;
}
*/
