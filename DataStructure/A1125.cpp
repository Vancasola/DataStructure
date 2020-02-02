//
//  A1125.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/2.
//  Copyright © 2020 none. All rights reserved.
//  6:18 6:38
/*
#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,a[10100];
    cin>>n;
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(a,a+n,less<int>());
    int sum=0;
    if(n>=2){
        for(int i=0;i<n-1;i++){
            sum=float(a[i]+a[i+1])/2;
            a[i+1]=sum;
        }
        cout<<a[n-1];
    }
    else cout<<a[0];
    return 0;
}
*/
