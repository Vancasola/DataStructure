//
//  A1007.cpp
//  DataStructure
//
//  Created by vancasola on 2019/12/25.
//  Copyright © 2019 none. All rights reserved.
//
//9:02
//9:24
/*
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int n=0,first=0,last=0,sum=0,t,m=-99999,mf,ml,ff;
    int a[10001];
    bool f=false;
    cin>>n;
    for(int i=0;i<n;i++){scanf("%d",&a[i]);if(a[i]>=0)f=true;}
    if(n)first=ml=a[0];
    if(!n){printf("0");return 0;}
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        if(sum>m){
            m=sum;
            mf=first;
            ml=a[i];
        }
        if(sum<0)
        {
            if(i+1<n){
            first=a[i+1];
            last=a[i+1];
            }
            else{
                first = a[i];
                last=a[i];
            }
            sum=0;
        }
    }
    if(!f)printf("0 %d %d",a[0],a[n-1]);
    else printf("%d %d %d",m,mf,ml);
    return 0;
}*/
