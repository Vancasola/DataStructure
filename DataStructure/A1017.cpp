//
//  A1017.cpp
//  DataStructure
//
//  Created by vancasola on 2019/12/29.
//  Copyright © 2019 none. All rights reserved.
//  10:49
/*
#include <stdio.h>
#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
using namespace std;
struct men{
    int a,s,t;
};
int n,k;
bool cmp(const men &a, const men &b){
    return a.a<b.a;
}
int main()
{
    int hh,mm,ss,t;
    int valid=0;
    int w[110];
    vector<men> v(10100);
    cin>>n>>k;
    for(int i=0;i<n;i++){
        scanf("%d:%d:%d %d",&hh,&mm,&ss,&t);
        v[i].a=hh*3600+mm*60+ss;
        v[i].t=t*60;
        if(t>60)v[i].t=60*60;
        if(v[i].a<=17*3600)valid++;
    }
    sort(v.begin(),v.begin()+n,cmp);
    double sum=0.0;
    fill(w,w+k,8*3600);
    for(int i=0;i<valid;i++)
    {
        int MIN=w[0],index=0;
        for(int j=0;j<k;j++){
            if(w[j]<MIN){
                MIN=w[j];
                index=j;
            }
        }
        if(w[index]<=v[i].a){
            w[index]=v[i].a+v[i].t;
        }
        else{
            sum+=(w[index]-v[i].a);
            w[index]+=v[i].t;
        }
    }
    if(valid)printf("%.1lf",(sum/valid/60.0));
    else printf("0.0");
    return 0;
}*/
