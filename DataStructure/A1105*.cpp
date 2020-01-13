//
//  A1105.cpp
//  DataStructure
//
//  Created by vancasola on 2020/1/13.
//  Copyright © 2020 none. All rights reserved.
//  7:47 8:48
/*
#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
int main(){
    int N,m,n;
    vector <int> v(10010);
    int b[101][101];
    cin>>N;
    for( n=sqrt(N);N>=1;n--)
        if(N%n==0){m=N/n;break;}
    for(int i=0;i<N;i++)
        scanf("%d",&v[i]);
    sort(v.begin(), v.begin()+N, greater<int>());
    int j,level=m/2+m%2,t=0;
    for(int i=0;i<level;i++){
        for(int j=i;j<=n-i-1 && t<N;j++)
            b[i][j]=v[t++];
        for(int j=i+1;j<=m-2-i && t<N;j++)
            b[j][n-i-1]=v[t++];
        for(int j=n-i-1;j>=i && t<N;j--)
            b[m-i-1][j]=v[t++];
        for(int j=m-i-2; j>=i+1&& t<N;j--)
            b[j][i]=v[t++];
    }
    for(int i=0;i<m;i++)
    {
        for( j=0;j<n-1;j++)
            printf("%d ",b[i][j]);
        printf("%d\n",b[i][j]);
    }
    return 0;
}
*/
