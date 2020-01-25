//
//  A1016.cpp
//  DataStructure
//
//  Created by vancasola on 2019/12/28.
//  Copyright © 2019 none. All rights reserved.
//  10:02 10:15 7:43 8:47 10:20
/*
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
int toll[24];
int day=0;
struct record{
    string name;
    int month,dd,hh,mm;
    string f;
};
float count(record a){
    float fee=0.0;
    fee=a.dd*day+a.mm*toll[a.hh];
    for(int i=0;i<a.hh;i++){
        fee+=toll[i]*60;
    }
    return fee;
}
bool cmp(const record& a,const record& b){
    if(a.name!=b.name)return a.name<b.name;
    else if(a.dd!=b.dd)return a.dd<b.dd;
    else if(a.hh!=b.hh)return a.hh<b.hh;
    else if(a.mm!=b.mm)return a.mm<b.mm;
    return a.f>b.f;
}
int main()
{
    int n;
    char name[25],f[10];
    map<string,vector<record>> mp;
    record t,a,b;
    vector<record> v(1010);
    for(int i=0;i<24;i++){
        scanf("%d",&toll[i]);
        day+=toll[i]*60;
    }
    cin>>n;
    for(int i=0;i<n;i++){
        scanf("%s %d:%d:%d:%d %s",&name,&v[i].month,&v[i].dd,&v[i].hh,&v[i].mm,&f);
        v[i].name=name;
        v[i].f=f;
    }
    sort(v.begin(),v.begin()+n,cmp);
    string last="-";
    bool flag=false;
    float total=0;
    vector<string> r;
    for(int i=0;i<n-1;i++){
        a=v[i];
        b=v[i+1];
        if(a.name==b.name && a.f=="on-line" && b.f=="off-line"){
            if(a.name!=last)r.push_back(a.name);
            last=a.name;
            mp[a.name].push_back(a);
            mp[a.name].push_back(b);
        }
    }
    for(int i=0;i<r.size();i++){
        string x=r[i];
        if(mp[x].size()<2)continue;
        else{
            total=0;
            float fee,t;
            a=mp[x][0];
            printf("%s %02d\n",a.name.c_str(),a.month);
            for(int j=0;j<mp[x].size();j+=2){
                a=mp[x][j];
                b=mp[x][j+1];
                printf("%02d:%02d:%02d ",a.dd,a.hh,a.mm);
                printf("%02d:%02d:%02d ",b.dd,b.hh,b.mm);
                fee=count( b)-count(a);
                cout<< b.dd*24*60+b.hh*60+b.mm- (a.dd*24*60+a.hh*60+a.mm)<<' ';
                printf("$%.02f\n",fee/100);
                total+=fee;
            }
            printf("Total amount: $%.2f\n",total/100);
        }
    }
    return 0;
}
*/
