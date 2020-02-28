//
//  A1017.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/28.
//  Copyright © 2020 none. All rights reserved.
//
/*
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
struct node{
    int arr=0,t=0,wait=0;
};
bool cmp(const node&a,const node&b){
    return a.arr<b.arr;
}
int findwin(int w[],int k){
    int index=0,Min=w[0];
    for(int i=0;i<k;i++){
        if(w[i]<Min){
            Min=w[i];
            index=i;
        }
    }
    return index;
}
int main()
{
    vector<node> v;
    int n,m,hh,mm,ss;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        node t;
        scanf("%d:%d:%d %d",&hh,&mm,&ss,&t.t);
        t.arr=hh*3600+mm*60+ss;
        t.t*=60;
        v.push_back(t);
    }
    int w[105];
    sort(v.begin(),v.end(),cmp);
    fill(w,w+105,8*3600);
    int cnt=0;
    for(int i=0;i<n;i++){
        int index=findwin(w,m);
        if(v[i].arr>=17*3600)continue;
        cnt++;
        if(w[index]<=v[i].arr){
            v[i].wait=0;
            w[index]=v[i].arr+v[i].t;
        }
        else if(w[index]>v[i].arr){
            v[i].wait=w[index]-v[i].arr;
            w[index]=w[index]+v[i].t;
        }
    }
    int sum=0;
    for(int i=0;i<v.size();i++)
        sum+=v[i].wait;
    printf("%.1lf",double(sum)/cnt/60.0);
    return 0;
}
*/
