//
//  A1008.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/11.
//  Copyright © 2020 none. All rights reserved.
//  3:00 3:04
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int main(){
    int n,a[105]={0},sum=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=n;i++){
        if(a[i]>a[i-1])sum+=(a[i]-a[i-1])*6;
        else sum+=4*(a[i-1]-a[i]);
    }
    sum+=5*n;
    cout<<sum;
    return 0;
}
*/
