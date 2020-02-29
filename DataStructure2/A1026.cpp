//
//  A1026.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/29.
//  Copyright © 2020 none. All rights reserved.
//
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
#include <unordered_map>
using namespace std;
int n;
struct node{
    int arr,begin,t,wait;
    bool v;
};
vector<node> q;
vector<int> v,p;
int f,m,k,table[105];
int isv[105]={false};
int find(){
    int Min=99999999,index=-1;
    for(int i=1;i<=m;i++){
        if(table[i]<Min){
            Min=table[i];
            index=i;
        }
    }
    return index;
}
bool cmp(const node&a,const node &b){
    return a.arr<b.arr;
}
bool cmp2(const node&a,const node&b){
    return a.begin<b.begin;
}
int main()
{
    int hh,mm,ss,tt;
    int cnt[205]={0};
    fill(table,table+105,3600*8);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        scanf("%d:%d:%d %d %d",&hh,&mm,&ss,&tt,&f);
        node t;
        t.arr=hh*3600+mm*60+ss;
        if(tt>2*60)tt=2*60;
        t.t=tt*60;
        t.v=f;
        q.push_back(t);
    }
    sort(q.begin(),q.end(),cmp);
    for(int i=0;i<n;i++){
        if(q[i].v)v.push_back(i);
        else p.push_back(i);
    }
    cin>>m>>k;
    for(int i=0;i<k;i++){
        scanf("%d",&tt);
        isv[tt]=true;
    }
    for(int i=0;i<n;i++){
        int index=find();
        if(isv[index]){
            bool f=false;
            for(int j=0;j<v.size();j++){
                if(q[v[j]].arr<=table[index]){
                    f=true;
                    q[v[j]].begin=table[index];
                    q[v[j]].wait=table[index]-q[v[j]].arr;
                    table[index]=q[v[j]].begin+q[v[j]].t;
                    if(q[v[j]].begin<21*3600)cnt[index]++;
                    v.erase(v.begin()+j);
                    break;
                }
            }
            if(!f){
                for(int j=0;j<p.size();j++){
                    if(q[p[j]].arr<=table[index]){
                        f=true;
                        q[p[j]].begin=table[index];
                        q[p[j]].wait=table[index]-q[p[j]].arr;
                        table[index]=q[p[j]].begin+q[p[j]].t;
                        if(q[p[j]].begin<21*3600)cnt[index]++;
                        p.erase(p.begin()+j);
                        break;
                    }
                }
            }
            if(!f){
                int Min=99999999,x=0,y=0;
                bool flag=false;
                for(int j=0;j<v.size();j++){
                    if(q[v[j]].arr<Min){
                        Min=q[v[j]].arr;
                        x=v[j];
                        y=j;
                    }
                }
                for(int j=0;j<p.size();j++){
                    if(q[p[j]].arr<Min){
                        flag=true;
                        Min=q[p[j]].arr;
                        x=p[j];
                        y=j;
                    }
                }
                q[x].begin=q[x].arr;
                q[x].wait=0;
                table[index]=q[x].begin+q[x].t;
                if(q[x].begin<21*3600)cnt[index]++;
                if(!flag)v.erase(v.begin()+y);
                else p.erase(p.begin()+y);
            }
        }
        else {
                bool f=false;
            for(int j=0;j<p.size();j++){
                if(q[p[j]].arr<=table[index]){
                    f=true;
                    q[p[j]].begin=table[index];
                    q[p[j]].wait=table[index]-q[p[j]].arr;
                    table[index]=q[p[j]].begin+q[p[j]].t;
                    if(q[p[j]].begin<21*3600)cnt[index]++;
                    p.erase(p.begin()+j);
                    break;
                }
            }
                if(!f){
                    int Min=99999999,x=0,y=0;
                    bool flag=false;
                    for(int j=0;j<v.size();j++){
                        if(q[v[j]].arr<Min){
                            Min=q[v[j]].arr;
                            x=v[j];
                            y=j;
                        }
                    }
                    for(int j=0;j<p.size();j++){
                        if(q[p[j]].arr<Min){
                            flag=true;
                            Min=q[p[j]].arr;
                            x=p[j];
                            y=j;
                        }
                    }
                    if(!flag){
                        int index2=-1,Min=99999999;
                        for(int j=1;j<=m;j++){
                            if(isv[j]&&Min>table[j]){
                                Min=table[j];
                                index2=j;
                            }
                        }
                        if(Min<=q[x].arr)index=index2;
                    }
                    if(q[x].arr>=table[index])
                        q[x].begin=q[x].arr;
                    else
                        q[x].begin=table[index];
                    table[index]=q[x].begin+q[x].t;
                    if(q[x].begin<21*3600)cnt[index]++;
                    if(!flag)v.erase(v.begin()+y);
                    else p.erase(p.begin()+y);
                    }
        }
    }
    sort(q.begin(),q.end(),cmp2);
    for(int i=0;i<q.size();i++){
        int t1,t2;
        t1=q[i].arr;
        t2=q[i].begin;
        if(t2>=21*3600)continue;
        printf("%02d:%02d:%02d %02d:%02d:%02d %d\n",t1/3600,t1%3600/60,t1%60,t2/3600,t2%3600/60,t2%60,(t2-t1+30)/60);
    }
    for(int i=1;i<=m;i++){
        if(i==m)printf("%d",cnt[i]);
        else printf("%d ",cnt[i]);
    }
    return 0;
}
*/
