//
//  A1007.cpp
//  DataStructure
//
//  Created by vancaosla on 2020/2/11.
//  Copyright © 2020 none. All rights reserved.
//  1:00 1:09 1:26 1:34
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n,a[10010],l=0,r=0,ml=0,mr=0,sum=0,Max=-1;
    cin>>n;
    if(n==0)return 0;
    bool f=false;
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    for(int i=0;i<n;i++){
        sum+=a[i];
        if(a[i]>=0)f=true;
        if(sum>Max){
            Max=sum;
            ml=l;
            mr=r;
        }
        r++;
        if(sum<0){
            sum=0;
            l=r=i+1;
        }
    }
    if(f)cout<<Max<<" "<<a[ml]<<" "<<a[mr];
    else cout<<0<<' '<<a[0]<<' '<<a[n-1];
    return 0;
}
*/
