//
//  A1026.cpp
//  DataStructure
//
//  Created by vancasola on 2019/12/30.
//  Copyright © 2019 none. All rights reserved.
//  9:05
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
struct men
{
    int arrive,serve,finish,t,wait;
    bool vip;
};
struct table
{
    int id;
    int served;
    int time;
    bool occupy;
    bool vip;
};
bool cmp(const men &a,const men &b)
{
    if(a.vip==b.vip)return a.arrive<b.arrive;
    return a.vip>b.vip;
}
bool cmpvip(const table &a,const table &b)
{
    return a.vip>b.vip;
}
bool cmpid(const table &a,const table &b)
{
    return a.id<b.id;
}
bool cmpserve(const men &a,const men &b)
{
    return a.serve<b.serve;
}
int main()
{
    int hh,mm,ss,time,vip,vip_num=0;
    int N,K,M;
    vector<men> m;
    vector<table> t;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        scanf("%d:%d:%d %d %d",&hh,&mm,&ss,&time,&vip);
        struct men man;
        man.arrive=hh*3600+mm*60+ss;
        man.serve=21*3600;
        man.t=time;
        if(time>2*60)man.t=2*60;
        if(man.arrive>21*3600)continue;
        man.vip=vip;
        man.wait=0;
        if(vip)vip_num++;
        m.push_back(man);
        }
    cin>>K>>M;
    for(int i=0;i<K;i++)
    {
        table ta;
        ta.id=i;
        ta.served=0;
        ta.vip=false;
        ta.occupy=false;
        ta.time=8*3600;
        t.push_back(ta);
    }
    for(int i=0;i<M;i++)
    {
        cin>>vip;
        t[vip-1].vip=true;
    }
    
    sort(m.begin(),m.end(),cmp);
    sort(t.begin(),t.end(),cmpvip);
    int ix=0;
    for(int i=8*3600;i<21*3600;i++)
    {
        
        for(int j=0;j<M;j++)
        {
            if(t[j].time<i)t[j].time=i;
            for(int k=0;k<vip_num;k++){
                if(m[k].arrive<=t[j].time&&m[k].serve>=21*3600)
                {
                cout<<'.'<<endl;
                
                m[k].serve=t[j].time;
                m[k].finish=t[j].time+m[k].t;
                t[j].time+=m[k].t;
                t[j].served++;
                m[k].wait=m[k].serve-m[k].arrive;
                    break;
                }
            }
        }
        for(int j=M;j<K;j++)
        {
            if(t[j].time<i)t[j].time=i;
            for(int k=vip_num;k<m.size();k++){
                if(m[k].arrive<=t[j].time&&m[k].serve>=21*3600)
                {
                cout<<'.'<<endl;
                
                m[k].serve=t[j].time;
                m[k].finish=t[j].time+m[k].t;
                t[j].time+=m[k].t;
                t[j].served++;
                m[k].wait=m[k].serve-m[k].arrive;
                    break;
                }
            }
            for(int k=0;k<vip_num;k++){
                if(m[k].arrive<=t[j].time&&m[k].serve>=21*3600)
                {
                cout<<'.'<<endl;
                
                m[k].serve=t[j].time;
                m[k].finish=t[j].time+m[k].t;
                t[j].time+=m[k].t;
                t[j].served++;
                m[k].wait=m[k].serve-m[k].arrive;
                    break;
                }
            }
        }
    }
    sort(m.begin(),m.end(),cmpserve);
    sort(t.begin(),t.end(),cmpid);
    int ddl=21*3600;

    for(int i=0;i<m.size();i++)
    {
        int arrive=m[i].arrive,serve=m[i].serve,wait=m[i].wait;
        if(m[i].serve<ddl)
        printf("%02d:%02d:%02d %02d:%02d:%02d %d\n",arrive/3600,arrive/60-(arrive/3600)*60,arrive%60,serve/3600,serve/60-(serve/3600)*60,serve%60,wait);
    }
    
    return 0;
}
*/
