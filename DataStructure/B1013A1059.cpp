//
//  B1013.cpp
//  DataStructure
//
//  Created by vancsola on 2019/7/30.
//  Copyright © 2019 none. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int tbl[1000]={0};
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
typedef struct
{
    int num;
    int cnt;
}dnum;
dnum d[1000];
int main(void)
{
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
