//
//  A1085.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/19.
//  Copyright © 2020 none. All rights reserved.
//  5:12  5:22
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,p;
    int a[100005];
    cin>>n>>p;
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(a,a+n);
    int sum=0,Max=-1,j=0;;
    for(int i=0;i<n && j<n;i++){
        long long c=(long long)a[i]*p;
        sum=0;
        while(c>=a[j]&&j<n)j++;
        sum=j-i;
        if(sum>Max)Max=sum;
    }
    printf("%d",Max);
    return 0;
}
*/
 
