//
//  B1019.cpp
//  DataStructure
//
//  Created by vancasola on 2019/7/29.
//  Copyright © 2019 none. All rights reserved.
//
/*
#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
int convert(char a[])
{
    int len = strlen(a),ret=0,p=1;
    for(int i=len-1;i>=0;i--)
    {
        ret+=p*(a[i]-'0');
        p*=10;
    }
    return ret;
}
void stoi(int ret,char a[])
{
    int p=1,i=0;
    for(i=0;i<4;i++)
    {
        a[i]=ret%10+'0';
        ret/=10;
    }
}
bool cmp(char a,char b)
{
    return a>b;
}
int main()
{
    char a[5],c[5];
    int ret = 0;
    scanf("%d",&ret);
    stoi(ret,a);
    strcpy(c,a);
    while(1)
    {
        sort(a,a+4);
        sort(c,c+4,cmp);
        ret = convert(c)-convert(a);
        if(ret==0){
            printf("%s - %s = %04d",c,a,ret);
            break;
        }
        else if(ret==6174){
            printf("%s - %s = %04d",c,a,ret);
            break;
        }
        printf("%s - %s = %04d\n",c,a,ret);
        stoi(ret,a);
        strcpy(c,a);
        //printf("a==%s c== %s\n",c,a,ret);
    }
    return 0;
}
*/
//6：58 7:16 7:17
/*
#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
bool cmp1(int a,int b)
{
    return a<b;
}
bool cmp2(int a,int b)
{
    return a>b;
}
void ItoS(int a[],int x)
{
    int r=1;
    for(int i=3;i>=0;i--)
    {
        a[i] = x%10;
        //cout<<a[i]<<endl;;
        x/=10;
    }
    return;
}
int StoI(int a[])
{
    int r=1, ans =0;
    for(int i=3;i>=0;i--)
    {
        ans += a[i]*r;
        r*=10;
    }
    return ans;
}
int main()
{
    int a[4],b[4],c,d,n;
    cin>>n;
    ItoS(a,n);
    while(1)
    {
        ItoS(a,n);
        ItoS(b,n);
        sort(a,a+4,cmp1);
        sort(b,b+4,cmp2);
        c = StoI(a);
        d = StoI(b);
        n=d-c;
        if(n==0)
        {
            printf("%04d - %04d = %04d\n",d,c,n);
            return 0;
        }
        if(n==6174)
        {
            printf("%04d - %04d = %04d\n",d,c,n);
            return 0;
        }
        printf("%04d - %04d = %04d\n",d,c,n);
    }
    return 0;
}
*/
