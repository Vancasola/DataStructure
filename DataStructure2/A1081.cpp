//
//  A1081.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/21.
//  Copyright © 2020 none. All rights reserved.
//  9:15 9:36
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <queue>
#include <cmath>
using namespace std;
int gcd(int a,int b){
    int t;
    while(b){
        t=b;
        b=a%b;
        a=t;
    }
    return a;
}
void reduction(pair<int,int> &p){
    int t=gcd(p.first,p.second);
    p.first/=t;
    p.second/=t;
}
pair<int,int> add(pair<int,int> a,pair<int,int> b){
    pair<int,int> v;
    int t=gcd(a.second,b.second);
    v.second=(a.second*b.second)/  t;
    v.first=a.first*(v.second/a.second)+b.first*(v.second/b.second);
    return v;
}
void display(pair<int,int> a){
    if(a.first%a.second==0)printf("%d\n",a.first/a.second);
    else if(a.first>a.second)printf("%d %d/%d\n",a.first/a.second,a.first%a.second,a.second);
    else if(a.first<a.second)printf("%d/%d\n",a.first,a.second);
}
int main(){
    int n;
    int a,b;
    pair<int,int> x,v;
    cin>>n;
    for(int i=0;i<n;i++){
        scanf("%d/%d",&a,&b);
        if(!i){
            x.first=a;
            x.second=b;
            reduction(x);
        }
        else{
            v.first=a;
            v.second=b;
            reduction(v);
            x=add(x,v);
            reduction(x);
        }
        //display(x);
    }
    display(x);
    return 0;
}
*/
