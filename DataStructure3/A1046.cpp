//
//  A1046.cpp
//  DataStructure
//
//  Created by vancasola on 2020/3/5.
//  Copyright © 2020 none. All rights reserved.
//  10:47 10:56
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <iostream>
#include <map>
using namespace std;
int main(){
    int n,m,v[100005]={0},x[100005]={0},sum=0,a,b;
    cin>>n;
    for(int i=1;i<=n;i++){
        scanf("%d",&v[i]);
        x[i]=sum;
        sum+=v[i];
    }
    cin>>m;
    int cnt=0;
    for(int i=0;i<m;i++){
        scanf("%d %d",&a,&b);
        if(b<a)swap(a, b);
        cnt=x[b]-x[a];
        if(sum-cnt<cnt)cnt=sum-cnt;
        printf("%d\n",cnt);
    }
    return 0;
}
*/
