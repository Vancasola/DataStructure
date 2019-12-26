//
//  A1010.cpp
//  DataStructure
//
//  Created by vancaosla on 2019/12/26.
//  Copyright © 2019 none. All rights reserved.
//7:05 7:40 7:53
/*
#include <stdio.h>
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
int main()
{
    char x[11],y[11],z[11];
    int n=1,r1=0,r2=0;
    int a=0,b=0;
    cin>>x>>y>>n>>r1;
    if(n==2)
    {   strcpy(z,x);
        strcpy(x,y);
        strcpy(y,z);
    }
    int p=1;
    for(int i=strlen(x)-1;i>=0;i--)
    {
        if(x[i]>='0'&&x[i]<='9')
            a+=(x[i]-'0')*p;
        else
            a+=(x[i]-'a'+10)*p;
        p*=r1;
    }
    //cout<<"x "<<x<<endl;
    int t=0;
    for(int i=0;i<strlen(y);i++)
    {
        if(y[i]>='0'&&y[i]<='9')t=y[i]-'0';
        else t=y[i]-'a'+10;
        if(t>r2)r2=t;
    }
    //cout<<"r2 "<<r2<<endl;
    r2++;
    while(b<=a)
    {
        p=1;
        b=0;
        for(int i=strlen(y)-1;i>=0;i--)
        {
            if(y[i]>='0'&&y[i]<='9')
                b+=(y[i]-'0')*p;
            else
                b+=(y[i]-'a'+10)*p;
            p*=r2;
        }
        if(b==a){cout<<r2;return 0;}
        else if(b==0)break;
        r2++;
    }
    cout<<"Impossible";
    return 0;
}
*/
