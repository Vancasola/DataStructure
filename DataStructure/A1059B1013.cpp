//
//  B1013.cpp
//  DataStructure
//
//  Created by vancsola on 2019/7/30.
//  Copyright © 2019 none. All rights reserved.
//
/*
#include <stdio.h>
#include <math.h>
int tbl[1000]={0};
bool num[1000]={0};
bool isPrime(int a)//untilize symetrical prime number-> O(sqrt(n))
{
    if(a<=1)return false;
    int sqr = sqrt(a);
    for(int i=2;i<=sqr;i++)if(a%i==0)return false;
    return true;
}
void findPrime(int n)
{
    int j=0;
    int pnum=0;
    for(int i=2;pnum<=n;i++)
    {
        if(isPrime(i))
        {
            tbl[j++]=i;
            pnum++;
        }
    }
}

void filter(int n)
{
    num[2]=false;
    for(int b=2;b<n;b++)
    {
        if(!num[b])
        {
            for(int i=2;i<=n/b;i++)
            {
                num[i*b]=true;
            }
        }
    }
}
typedef struct
{
    int num;
    int cnt;
}dnum;
dnum d[1000];
int main(void)
{
    int n=50;
    filter(n);
    for(int i=2;i<n;i++)
    {
        if(!num[i])printf("%d ",i);
    }
    return 0;
    findPrime(1000);
    int num=0,a=0,j=0,i=0;
    bool flag = true;
    scanf("%d",&a);
    if(a==0){printf("0=0");return 0;}
    if(a==1){printf("1=1");return 0;}
    num=a;
    for(i=0,d[0].cnt=0;a!=0;i++)//a property: n is devided by a series of prime numbers, if exist a prime number which is larger than sqrt(n), the number of such prime number is only one, which is equal to n
    {
        if(a==1)
        {
            d[j].num=tbl[i];
            d[j].cnt++;
            break;
        }
        while(a%tbl[i]==0)
        {
            flag = false;
            d[j].num=tbl[i];
            d[j].cnt++;
            a/=tbl[i];
            if(a==0)break;
        }
        if(a==0)break;
        if(!flag)
        {
            //printf("%d^%d ",d[j].num,d[j].cnt);
            j++;
            flag = true;
            d[j].cnt=0;
        }
    }
    printf("%d=",num);
    for(i=0;i<j-1;i++)
    {
        if(d[i].cnt==1)printf("%d*",d[i].num);
        else
        printf("%d^%d*",d[i].num,d[i].cnt);
    }
    if(d[i].cnt==1)printf("%d",d[i].num);
    else
    printf("%d^%d",d[i].num,d[i].cnt);
    return 0;
}
*/
//8:58
//9:17 9:37
/*
#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<cmath>
#include<map>
using namespace std;
const int MAXN = 2010;
vector<int> tbl;
map<int,int> ans;
bool isPrime(int a)
{
    int sq = sqrt(a);
    for(int i=2;i<=sq;i++)
    {
        if(a%i==0)return false;
    }
    return true;
}
void findPrime()
{
    for(int i=2;i<MAXN;i++)
    {
        if(isPrime(i))tbl.push_back(i);
    }
}
int main()
{
    findPrime();
    int n;
    cin>>n;
    if(n==0){printf("0=0");return 0;}
    if(n==1){printf("1=1");return 0;}
    int r = n;
    while(n!=1)
    {
    for(int i=0;i<tbl.size();i++)
    {
        int x = tbl[i];
        if(n%x==0)
        {
            if(ans.find(x)==ans.end())
            {
                ans[x] = 1;
            }
            else
            {
                ans[x]++;
            }
            n/=x;
            break;
        }
    }
    }
    bool first = true;
    cout<<r<<'=';
    for(map<int,int>::iterator it = ans.begin();it!=ans.end();it++)
    {
        if(!first)
        {
            cout<<'*';
        }
        first = false;
        if(it->second!=1)
        {
            cout<<it->first<<'^'<<it->second;
        }
        else{
            cout<<it->first;
        }
    }
    
    return 0;
}
*/
