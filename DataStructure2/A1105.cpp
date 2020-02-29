//
//  A1105.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/29.
//  Copyright © 2020 none. All rights reserved.
//
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
    int g[205][205],t,n,m,N;
    vector<int> v;
    cin>>N;
    for(int i=0;i<N;i++){
        scanf("%d",&t);
        v.push_back(t);
    }
    sort(v.begin(),v.end(),greater<int>());
    int Min=999999999;
    for(int i=1;i<=N;i++){
        if(N%i==0&&abs(i-(N/i))<Min){
            Min=abs(i-N/i);
            n=i;
        }
    }
    m=N/n;
    if(m<n)swap(m,n);
    int p=0;
    for(int i=0;i<N;p++){
        for(int j=p;j<n-p&&i<N;j++)
            g[p][j]=v[i++];
        for(int j=p+1;j<m-p&&i<N;j++)
            g[j][n-1-p]=v[i++];
        for(int j=n-2-p;j>=p&&i<N;j--)
            g[m-1-p][j]=v[i++];
        for(int j=m-2-p;j>=p+1&&i<N;j--)
            g[j][p]=v[i++];
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(j<n-1)printf("%d ",g[i][j]);
            else printf("%d\n",g[i][j]);
        }
    }
    return 0;
}
*/
