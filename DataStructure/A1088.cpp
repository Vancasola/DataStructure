//
//  A1088.cpp
//  DataStructure
//
//  Created by vancasola on 2020/1/8.
//  Copyright © 2020 none. All rights reserved.
//  9:21 9:27 10:00
/*
#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;
struct rn
{
    long long a,b;
};
long long gcd(long long a,long long b)
{
    if(b)return gcd(b,a%b);
    return a;
}
rn add(rn a,rn b)
{
    rn c;
    long long f=gcd(a.b,b.b);
    c.a=a.a*(b.b/f)+b.a*(a.b/f);
    c.b=a.b*(b.b/f);
    return c;
}
rn multi(rn a,rn b)
{
    rn c;
    c.a=a.a*b.a;
    c.b=a.b*b.b;
    return c;
}
rn relax(rn a)
{
    if(a.a==0){a.b=1;return a;}
    if(a.b<0){a.a*=-1;a.b*=-1;}
    long long f=abs(gcd(a.a,a.b));
    a.a/=f;
    a.b/=f;
    return a;
}
void display(rn a)
{
    if(a.a==0){cout<<"0";return;}
    if(a.b==0){cout<<"Inf";return;}
    if(a.a<0)
    {
        cout<<"(";
        bool f=false;
        if(abs(a.a)/a.b>0)
        {
            cout<<a.a/a.b;
            a.a%=a.b;
            f=true;
        }
        if(a.a)
        {
            if(f){cout<<' ';a.a=abs(a.a);}
            cout<<a.a<<'/'<<a.b;
        }
        cout<<")";
        return ;
    }
    else{
        bool f=false;
        if(a.a/a.b>0)
        {
            cout<<a.a/a.b;
            a.a%=a.b;
            f=true;
        }
        if(a.a)
        {
            if(f)cout<<' ';
            cout<<a.a<<'/'<<a.b;
        }
    }
}
int main()
{
    rn x,y;
    scanf("%lld/%lld %lld/%lld",&x.a,&x.b,&y.a,&y.b);
    x=relax(x);
    y=relax(y);
    display(x);
    cout<<" + ";
    display(y);
    cout<<" = ";
    display(relax(add(x, y)));
    cout<<endl;
    
    display(x);
    cout<<" - ";
    display(y);
    y.a*=-1;
    cout<<" = ";
    display(relax(add(x, y)));
    cout<<endl;
    
    display(x);
    cout<<" * ";
    y.a*=-1;
    display(y);
    cout<<" = ";
    display(relax(multi(x, y)));
    cout<<endl;
    
    display(x);
    cout<<" / ";
    display(y);
    swap(y.a,y.b);
    cout<<" = ";
    display(relax(multi(x, y)));
    cout<<endl;
    
    return 0;
}
*/
