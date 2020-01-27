//
//  A1033.cpp
//  DataStructure
//
//  Created by vancasola on 2020/1/14.
//  Copyright © 2020 none. All rights reserved.
//  9:02 9:15
/*
#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
double C,D,A;
int N;
struct station {
    double price,dis;
}s[30010];
bool cmp(const station &a, const station & b){
    if(a.dis!=b.dis) return a.dis<b.dis;
    return a.price<b.price;
}
int main(){
    cin>>C>>D>>A>>N;
    double d=C*A,c=0;
    int i;
    double sum=0.0;
    for( i=0;i<N;i++){
        scanf("%lf %lf",&s[i].price,&s[i].dis);
    }
    s[i].price=0.0;
    s[i].dis=D;
    s[i+1].dis=9999999;
    sort(s, s+N, cmp);
    for( i=0;i<=N;i++){
        printf("%.2lf %.0lf\n",s[i].price,s[i].dis);
    }
    int a=0,b=1;
    for(;a<=N;a++){
        cout<<a<<endl;
        b=a+1;
        for(;b<=N+1;b++){
            if(s[b].dis-s[a].dis>=d)break;
        }
        if(b==N+2){
            printf("The maximum travel distance = %0.2lf",s[a].dis);
            return 0;
        }
        for( i=a+1;i<=b;i++){
            if(s[i].price<s[a].price){
                c=0;
                sum+=(s[a].price)*(s[i].dis-s[a].dis)/A;
                a=i;
                break;
            }
        }
        if(i==b+1){
            double MIN=99999999;
            int index=a;
            for(i=a;i<=b;i++){
                if(s[i].price<MIN){
                    MIN=s[i].price;
                    index=i;
                }
            }
            sum+=s[a].price*(C-c);
            c-=(s[i].dis-s[a].dis)/A;
        }
    }
    printf("%.2lf",sum);
    return 0;
}

*/
