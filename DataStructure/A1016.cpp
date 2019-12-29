//
//  A1016.cpp
//  DataStructure
//
//  Created by vancasola on 2019/12/28.
//  Copyright © 2019 none. All rights reserved.
//  10:02 10:15
/*
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <string.h>
using namespace std;
int toll[24]={0};
struct record
{
    string id;
    int mo,d,h,m;
    bool f;
    record(){}
    record(string s,int mo1,int d1,int h1,int m1,bool f1)
    {
        id=s;
        mo=mo1;
        d=d1;
        h=h1;
        m=m1;
        f=f1;
    }
};
int fee( record &a, record &b)
{
    int sum=0;
    int t=0;
    int ad=a.d,ah=a.h,am=a.m;
    int bd=b.d,bh=b.h,bm=b.m;
    while(a.d<b.d||a.h<b.h||a.m<b.m)
    {
        t++;
        sum+=toll[a.h];
        a.m++;
        if(a.m>=60){
            a.h++;
            a.m=0;
            if(a.h>=24){
                a.d++;
                a.h=0;
            }
        }
    }
    if(sum){
    printf("%02d:%02d:%02d %02d:%02d:%02d",ad,ah,am,bd,bh,bm);
        cout<<' '<<t<<' ';
        printf("$%.02f\n",(float)sum/100);
    }
    return sum;
}
bool cmp1(const record &a,const record &b)
{
    return a.m<b.m;
}
bool cmp2(const record &a,const record &b)
{
    return a.h<b.h;
}
bool cmp3(const record &a,const record &b)
{
    return a.d<b.d;
}
bool cmp4(const record &a,const record &b)
{
    return a.mo<b.mo;
}
bool cmp5(const string &a,const string &b)
{
    return a<b;
}
int main()
{
    for(int i=0;i<24;i++)
    {
        scanf("%d",&toll[i]);
    }
    int n;
    cin>>n;
    vector<record> v[1000];
    vector<string> name;
    string id,flag;
    map<string,int> mp;
    int mo,d,h,m,k,j=-1;
    bool f;
    for(int i=0;i<n;i++)
    {
        cin>>id;
        scanf("%d:%d:%d:%d",&mo,&d,&h,&m);
        cin>>flag;
        if(flag=="on-line")f=true;
        else f=false;
        if(mp.find(id)==mp.end()){
            mp[id]=++j;
            name.push_back(id);
            v[j].push_back(record(id,mo,d,h,m,f));
        }
        else
        {
            v[mp[id]].push_back(record(id,mo,d,h,m,f));
        }
    }
    
    for(int i=0;i<=j;i++)
    {
        sort(v[i].begin(),v[i].end(),cmp1);
        sort(v[i].begin(),v[i].end(),cmp2);
        sort(v[i].begin(),v[i].end(),cmp3);
        sort(v[i].begin(),v[i].end(),cmp4);
    }

     
    sort(name.begin(),name.end(),cmp5);


    record r1,r2;
    //fee(v[1][0],v[1][1]);
    int i=0;
    for(int g=0;g<=j;g++)
    {
        int k=mp[name[g]];
        int sum=0;
        bool fb=false;
        for( i=0;i+1<v[k].size();i++)
        {
            if(v[k][i].f&&!v[k][i+1].f)
            {
                fb=true;
            }
        }
        if(!fb)continue;
        cout<<v[k][0].id<<' ';
        printf("%02d\n",v[k][0].mo);
        for( i=0;i+1<v[k].size();i++)
        {
            if(v[k][i].f&&!v[k][i+1].f)
            {
                sum+=fee(v[k][i],v[k][i+1]);
                i++;
            }
        }
        printf("Total amount: $%.2f\n",(float)sum/100);
    }
    return 0;
}
*/
