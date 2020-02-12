//
//  A1016.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/12.
//  Copyright © 2020 none. All rights reserved.
//  2:00 2:40 2:45 3:50
/*
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
int toll[24],n;
int day=0;
struct record{
    string id;
    int t,m;
    int dd,hh,mm;
    bool f;
}v[1010];
bool cmp(const record&a,const record&b){
    if(a.id!=b.id)return a.id<b.id;
    return a.t<b.t;
}
double fee(const record& r){
    double sum=r.dd*day;
    for(int i=0;i<r.hh;i++)
        sum+=toll[i]*60;
    sum+=toll[r.hh]*r.mm;
    return sum;
}
int main(){
    for(int i=0;i<24;i++){
        scanf("%d",&toll[i]);
        day+=toll[i]*60;
    }
    cin>>n;
    string tag;
    for(int i=0;i<n;i++){
        cin>>v[i].id;
        scanf("%d:%d:%d:%d",&v[i].m,&v[i].dd,&v[i].hh,&v[i].mm);
        v[i].t=v[i].dd*24*60+v[i].hh*60+v[i].mm;
        cin>>tag;
        if(tag=="on-line")v[i].f=true;
        else v[i].f=false;
    }
    sort(v, v+n, cmp);
    double total=0;
    string last;
    map<string,vector<record>> p;
    vector<string> name;
    for(int i=0;i<n-1;i++){
        if(v[i].id==v[i+1].id && (v[i].f && !v[i+1].f)){
            p[v[i].id].push_back(v[i]);
            p[v[i].id].push_back(v[i+1]);
            if(v[i].id!=last)name.push_back(v[i].id);
            last=v[i].id;
            i++;
        }
    }
    for(int i=0;i<name.size();i++){
        printf("%s %02d\n",name[i].c_str(),p[name[i]][0].m);
        total=0.0;
        for(int j=0;j<p[name[i]].size()-1;j+=2){
            record a=p[name[i]][j],b=p[name[i]][j+1];
            double fe=(fee(b)-fee(a));
            total+=fe;
            printf("%02d:%02d:%02d ",a.dd,a.hh,a.mm);
            printf("%02d:%02d:%02d %d $%.2lf\n",b.dd,b.hh,b.mm,b.t-a.t,fe/100);
        }
        printf("Total amount: $%.2lf\n",total/100);
    }
    return 0;
}
*/
