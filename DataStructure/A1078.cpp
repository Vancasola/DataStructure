//
//  A1078.cpp
//  DataStructure
//
//  Created by vancasola on 2020/1/7.
//  Copyright © 2020 none. All rights reserved.
//  7:12 7:51
/*
#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int n)
{
    if(n<=1)return false;
    if(n==2)return true;
    int m=sqrt(n);
    for(int i=2;i<=m;i++)
        if(n%i==0)return false;
    return true;
}
int main()
{
    int n,m,t,p;
    bool a[100010]={0};
    cin>>n>>m;
    for(int i=n;;i++)
        if(isPrime(i)){n=i;break;}
    for(int i=0;i<m-1;i++)
    {
        scanf("%d",&t);
        p=t%n;
        if(a[p]==0){a[p]=t;printf("%d ",p);}
        else for(int j=1;;j++)
        {
            p=(t+j*j)%n;
            if(j>=n){printf("- ");break;}
            p%=n;
            if(a[p]==0){a[p]=t;printf("%d ",p);break;}
        }
    }
    scanf("%d",&t);
    p=t%n;
    if(a[p]==0){a[p]=t;printf("%d",p);}
    else for(int j=1;;j++)
    {
        p=(t+j*j)%n;
        if(j>=n){printf("-");break;}
        p%=n;
        if(a[p]==0){a[p]=t;printf("%d",p);break;}
    }
    return 0;
}


*/
