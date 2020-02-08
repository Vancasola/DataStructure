//
//  A1010.cpp
//  DataStructure
//
//  Created by vancasola on 2019/12/26.
//  Copyright © 2019 none. All rights reserved.
//7:05 7:40 7:53
/*
#include <stdio.h>
#include <iostream>
#include <string.h>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
long long convert(string a,long long r){
    long long x=1;
    long long sum=0;
    for(int i=a.size()-1;i>=0;i--){
        if(a[i]>='0' && a[i]<='9')
            sum+=(a[i]-'0')*x;
        else
            sum+=(a[i]-'a'+10)*x;
        x*=r;
        if(sum<0)return -1;
    }
    return sum;
}
char findmax(string s){
    char t=-1;
    for(int i=0;i<s.size();i++)
        if(s[i]>t)t=s[i];
    return t;
}
int main()
{
    string a,b;
    long long l,r,f,x,y,m;
    cin>>a>>b>>f>>r;
    if(f==2)swap(a, b);
    x=convert(a, r);
    l=1;
    char t=findmax(b);
    l = (isdigit(t) ? t - '0': t - 'a' + 10) + 1;
    r=max(x,l);
    while(l<=r){
        m=(l+r)/2;
        y=convert(b,m);
        if(y<0 || y>x)r=m-1;
        else if(x==y){
            printf("%lld",m);
            return 0;}
        else l=m+1;
    }
    
    cout<<"Impossible"<<endl;
    return 0;
}
*/
