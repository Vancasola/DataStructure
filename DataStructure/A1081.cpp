//
//  A1081.cpp
//  DataStructure
//
//  Created by vancasola on 2020/1/7.
//  Copyright © 2020 none. All rights reserved.
//  7:56 8:56
/*
#include <stdio.h>
#include <iostream>
using namespace std;
struct rn
{
    long long a,b;
};
long long factor(long long a,long long b)
{
    if(b)return factor(b,a%b);
    else return a;
}
rn relax(rn a)
{
    long long f=factor(a.a, a.b);
    if(a.a==0)a.b=1;
    else if(a.b<0){a.a*=-1;a.b*=-1;}
    else{
        a.a/=f;
        a.b/=f;
    }
    return a;
}
rn add(rn x,rn y)
{
    rn c;
    c.a=x.a*y.b+y.a*x.b;
    c.b=x.b*y.b;
    return relax(c);
}
void display(rn a)
{
    long long f=factor(a.a, a.b);
    bool flag=false,negtive=false;
    if(a.a==0){printf("0");return ;}
    if(a.a<0){a.a*=-1;negtive=true;}
    if(a.a>a.b)
    {
        if(negtive)putchar('-');
        printf("%lld",a.a/a.b);
        a.a%=a.b;
        flag=true;
    }
    if(a.a)
    {
        if(flag)putchar(' ');
        printf("%lld/%lld",a.a/f,a.b);
    }
}
int main()
{
    long long n,a,b;
    rn r,t;
    cin>>n;
    scanf("%lld/%lld",&a,&b);
    r.a=a;
    r.b=b;
    r=relax(r);
    for(long long i=1;i<n;i++)
    {
        scanf("%lld/%lld",&a,&b);
        t.a=a;
        t.b=b;
        t=relax(t);
        r=add(r,t);
    }
    display(r);
    return 0;
}
*/
