//
//  A1085.cpp
//  DataStructure
//
//  Created by vancasola on 2020/4/27.
//  Copyright © 2020 none. All rights reserved.
//
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#include <set>
#include <unordered_map>
using namespace std;
int main(){
    int n,p;
    int a[100005];
    scanf("%d %d",&n,&p);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(a,a+n);
    //for(int i=0;i<n;i++)printf("%d ",a[i]);
    int q=0,num=-1;
    long long m=-1;
    for(int i=0;i<n&&q<n;){
        //printf("%d\n",m);
        if((long long)p*a[i]>=a[q]){
            if((long long)p*a[i]>m&&q-i>=num){
                m=a[q];
                num=q-i;

            }
            q++;
        }
        else i++;
    }
    printf("%d",num+1);
    return 0;
}
*/
