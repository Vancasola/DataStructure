//
//  B1020.cpp
//  DataStructure
//
//  Created by vancasola on 2019/7/29.
//  Copyright © 2019 none. All rights reserved.
//

#include <stdio.h>
#include <algorithm>
using namespace std;
typedef struct cake {
    double c;
    double s;
    double p;
}Cake;
bool cmp(cake&c1,cake&c2)
{
    return c1.p>c2.p;
}
int compute(double *r,cake& c,double *result)
{
    if(c.s<=*r)
    {
        *r-=c.s;
        *result+=c.c;
        return *r;
    }
    else
    {
        *result+=c.p * (*r);
        return 0;
    }
}
int main()
{
    int k,i=0;
    double r;
    double *pr = &r;
    double *pre,result=0;
    pre = &result;
    Cake ca[1001];
    scanf("%d %lf",&k,&r);
    for(i=0;i<k;i++)
    {
        scanf("%lf",&ca[i].s);
    }
    for(i=0;i<k;i++)
    {
        scanf("%lf",&ca[i].c);
        ca[i].p=ca[i].c/ca[i].s;
    }
    sort(ca,ca+k,cmp);
    i=0;
    while(compute(pr, ca[i++], pre)!=0&&i<k);/***********i will be eceed k-1
    /*for(i=0;i<k;i++)
    {
        if(ca[i].s<=r)
        {
            r-=ca[i].s;
            result+=ca[i].c;
        }else{
            result+=ca[i].p*r;
            break;
        }
    }*/
    printf("%.2lf",result);
    return 0;
}
