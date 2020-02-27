//
//  A1088.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/27.
//  Copyright © 2020 none. All rights reserved.
//  10:45 11:16
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <unordered_map>
using namespace std;
long long gcd(long long a,long long b){
    long long c;
    while(b){
        c=a%b;
        a=b;
        b=c;
    }
    return a;
}
void adjust(pair<long long,long long>& t){
    if(t.second<0){
        t.first*=-1;
        t.second*=-1;
    }
}
void reduction(pair<long long,long long>& t){
    long long g=gcd(t.first,t.second);
    t.first/=g;
    t.second/=g;
    adjust(t);
}
void display(pair<long long,long long> t){
    bool sign=true;
    if(t.first<0){
        sign=false;
        t.first*=-1;
    }
    if(t.first==0){printf("0");return ;}
    if(!sign)printf("(-");
    if(t.first<t.second)printf("%lld/%lld",t.first,t.second);
    else if(t.first%t.second==0)printf("%lld",t.first/t.second);
    else {
        printf("%lld ",t.first/t.second);
        t.first=abs(t.first);
        printf("%lld/%lld",t.first%t.second,t.second);
    }
    if(!sign)printf(")");
}
pair<long long,long long> add(const pair<long long,long long>& a,const pair<long long,long long>&b){
    pair<long long,long long> c;
    long long g=gcd(a.second,b.second);
    c.second=a.second*b.second/g;
    c.first=a.first*(c.second/a.second)+b.first*(c.second/b.second);
    reduction(c);
    return c;
}
pair<long long,long long> multy(const pair<long long,long long>& a,const pair<long long,long long>&b){
    pair<long long,long long> c;
    c.second=a.second*b.second;
    c.first=a.first*b.first;
    reduction(c);
    return c;
}
pair<long long,long long> divide( pair<long long,long long> a, pair<long long,long long>b){
    pair<long long,long long> c;
    swap(b.first,b.second);
    c.second=a.second*b.second;
    c.first=a.first*b.first;
    reduction(c);
    return c;
}
int main(){
    pair<long long,long long> a,b;
    scanf("%lld/%lld %lld/%lld",&a.first,&a.second,&b.first,&b.second);
    reduction(a);
    reduction(b);
    
    display(a);
    printf(" + ");
    display(b);
    printf(" = ");
    display(add(a,b));
    printf("\n");
    
    display(a);
    printf(" - ");
    display(b);
    printf(" = ");
    b.first*=-1;
    display(add(a,b));
    b.first*=-1;
    printf("\n");
    
    display(a);
    printf(" * ");
    display(b);
    printf(" = ");
    display(multy(a,b));
    printf("\n");
    
    display(a);
    printf(" / ");
    display(b);
    printf(" = ");
    if(b.first==0|| b.second==0)printf("Inf");
    else display(divide(a,b));
    return 0;
}
*/
