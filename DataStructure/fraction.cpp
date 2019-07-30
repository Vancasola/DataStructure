//
//  fraction.cpp
//  DataStructure
//
//  Created by vancasola on 2019/7/30.
//  Copyright © 2019 none. All rights reserved.
//
/*
#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    long long u,d;
}fraction;
int gcd(long a,long b)
{
    if(b==0)return a;
    return gcd(b,a%b);
}
fraction reduction(fraction&f)
{
    if(f.u==0)f.d=1;
    if(f.d<0){
        f.u*=-1;
        f.d*=-1;
    }
    long long g = gcd(abs(f.u),abs(f.d));
    f.d/=g;
    f.u/=g;
    return f;
}
fraction multiply(fraction&f1,fraction&f2)
{
    fraction f;
    f.u = f1.u*f2.u;
    f.d = f1.d*f2.d;
    return reduction(f);
}
fraction divide(fraction&f1,fraction&f2)
{
    fraction f;
    f.u = f1.u*f2.d;
    f.d = f1.d*f2.u;
    return reduction(f);
}
fraction add(fraction&f1,fraction&f2)
{
    fraction f;
    f.u = f1.u*f2.d+f2.u*f1.d;
    f.d = f1.d*f2.d;
    return reduction(f);
}
fraction minus(fraction&f1,fraction&f2)
{
    fraction f;
    f.u = f1.u*f2.d-f2.u*f1.d;
    f.d = f1.d*f2.d;
    return reduction(f);
}
void Print(fraction &f)
{
    if(f.d==1)printf("%d\n",f.u);
    else
    printf("%d/%d\n",f.u,f.d);
}
int main(void)
{
    fraction f1,f2,f,r;
    f1.u=1,f1.d=2;
    f2.u=1,f2.d=2;
    r.d=1,r.u=0;
    int n=0;
    while(scanf("%d",&n)!=EOF){
        if(n==0)break;
        r.d=1,r.u=0;
        f.u=1;
        for(int i=0;i<n/2;i++)
        {
            f.d=1;
            r=add(r,f);
            for(int j=i+1;j<n;j++)
            {
                f.d=f.d+1;
                r=add(r,f);
            }
            f.d=1;
            for(int j=i-1;j>=0;j--)
            {
                f.d=f.d+1;
                r=add(r,f);
            }
        }
    f1.u=2,f1.d=1;
    r=multiply(r, f1);
    if(n%2!=0)
    {
        int i=n/2;
        f.d=1;
        r=add(r,f);
        for(int j=i+1;j<n;j++)
        {
            f.d=i+1;
            r=add(r,f);
        }
        for(int j=i-1;j>=0;j--)
        {
            f.d=i+1;
            r=add(r,f);
        }
    }
    printf("%.2lf",(double)r.u/(double)r.d);
}
    return 0;
}
*/
