//
//  A1026.cpp
//  DataStructure
//
//  Created by vancasola on 2019/12/30.
//  Copyright © 2019 none. All rights reserved.
//  7:11 8:35 8:51
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <set>
using namespace std;
struct men{
    int a,s,t,wait;
    bool vip;
}v[10010];
bool cmp(const men& a,const men& b){
    if(a.a!=b.a)return a.a<b.a;
    return a.vip>b.vip;
}
bool cmp1(const men& a,const men& b){
    return a.s<b.s;
}
int main()
{
    int n,k,m,vip,valid=0;
    int hh,mm,ss,t;
    int w[110];
    int count[110]={0};
    vector<int> vipt;
    vector<bool> vis(110,false);
    vector<int> ordt;
    set<int> viptt;
    queue<int> vipp,ordp;
    cin>>n;
    for(int i=0;i<n;i++){
        scanf("%d:%d:%d %d %d",&hh,&mm,&ss,&t,&vip);
        v[i].t=60*t;
        v[i].a=hh*3600+mm*60+ss;
        v[i].vip=vip;
        if(v[i].a>=21*3600)continue;
        else valid++;
    }
    sort(v,v+n,cmp);
    for(int i=0;i<valid;i++)
    {
        if(v[i].vip)vipp.push(i);
        else ordp.push(i);
    }
//    for(int i=0;i<valid;i++){
//        printf("%02d:%02d:%02d ",v[i].a/3600,v[i].a/60-60*(v[i].a/3600),v[i].a%60);
//        printf("%02d:%02d:%02d %d %d\n",v[i].a/3600,v[i].a/60-60*(v[i].a/3600),v[i].a%60,v[i].t,v[i].vip);
//    }
    cin>>k>>m;
    fill(w+1,w+k+1,8*3600);
    for(int i=0;i<m;i++){
        cin>>t;
        vipt.push_back(t);
        viptt.insert(t);
    }
    for(int i=1;i<=k;i++){
        if(viptt.find(i)==viptt.end()){
            ordt.push_back(i);
        }
    }
    int pv=0,pt=0,x=0,cnt=0;
    for(int i=0;i<n;i++){
        int id=-1;
        int MIN=24*3600;
        for(int j=1;j<=k;j++){
            if(w[j]<MIN){
                id=j;
                MIN=w[j];
            }
        }
        if(w[id]>=21*3600)break;
        else cnt++;
        count[id]++;
        if(vipp.empty()){
            x=vipp.front();
            vipp.pop();
        }
        else if(ordp.empty()){
            x=ordp.front();
            ordp.pop();
        }
        else{
            int xv=vipp.front(),xt=ordp.front();
            x=(v[xt].a<v[xv].a)? xt:xv;
            if( viptt.find(id)!=viptt.end() && w[id]>v[xt].a && w[id]>v[xv].a){
                x=xv;
                vipp.pop();
                goto f1;
            }
            if(v[xt].a<v[xv].a)ordp.pop();
            else vipp.pop();
        }
        f1:1;
        //cout<<i<<' '<<id<<' '<<x<<endl;
        if(w[id]<=v[x].a){
            v[x].s=v[x].a;
            w[id]=v[x].s+v[x].t;
            v[x].wait=0;
        }
        else{
            v[x].s=w[id];
            w[id]=v[x].s+v[x].t;
            v[x].wait=v[x].s-v[x].a;
        }
    }
    sort(v,v+cnt,cmp1);
    for(int i=0;i<cnt;i++){
        printf("%02d:%02d:%02d ",v[i].a/3600,v[i].a/60-60*(v[i].a/3600),v[i].a%60);
        printf("%02d:%02d:%02d ",v[i].s/3600,v[i].s/60-60*(v[i].s/3600),v[i].s%60);
        //if(v[i].wait%60==0)t=v[i].wait/60;
        //else t=v[i].wait/60+1;
        double wait=(double)v[i].wait/60.0;
        if(wait-(int)wait<=0.4)wait=(int)wait;
        else wait=(int)wait+1;
        printf("%.0f\n",wait);
    }
    int i=0;
    for( i=1;i<k;i++){
        printf("%d ",count[i]);
    }
    printf("%d",count[i]);
    return 0;
}*/

//if(v[i].vip){
//    bool f=false;
//    for(int j=0;j<vipt.size();j++){
//        id=vipt[j];
//        if(w[id]<=v[i].a){
//            f=true;
//            count[id]++;
//            v[i].s=v[i].a;
//            w[id]=v[i].s+v[i].t;
//            v[i].wait=0;
//            break;
//        }
//    }
//    if(!f)
//    {
//        for(int j=0;j<ordt.size();j++){
//            id=ordt[j];
//            if(w[id]<v[i].a){
//                f=true;
//                count[id]++;
//                v[i].s=v[i].a;
//                w[id]=v[i].s+v[i].t;
//                v[i].wait=0;
//                break;
//            }
//        }
//        if(!f)
//        {
//            int MIN=24*3600;
//            for(int j=1;j<=k;j++){
//                if(w[j]<MIN){
//                    MIN=w[j];
//                    id=j;
//                }
//            }
//            count[id]++;
//            if(w[id]<=v[i].a){
//                v[i].s=v[i].a;
//                w[id]=v[i].s+v[i].t;
//                v[i].wait=0;
//            }
//            else{
//                v[i].s=w[id];
//                w[id]=v[i].s+v[i].t;
//                v[i].wait=v[i].s-v[i].a;
//            }
//        }
//    }
//}
//else{
//    bool f=false;
//    for(int j=0;j<ordt.size();j++){
//        id=ordt[j];
//        if(w[id]<=v[i].a){
//            f=true;
//            count[id]++;
//            v[i].s=v[i].a;
//            w[id]=v[i].s+v[i].t;
//            v[i].wait=0;
//            break;
//        }
//    }
//    if(!f)
//    {
//        for(int j=0;j<vipt.size();j++){
//            id=vipt[j];
//            if(w[id]<=v[i].a){
//                count[id]++;
//                f=true;
//                v[i].s=v[i].a;
//                w[id]=v[i].s+v[i].t;
//                v[i].wait=0;
//                break;
//            }
//        }
//        if(!f)
//        {
//            int MIN=24*3600;
//            for(int j=1;j<=k;j++){
//                if(w[j]<MIN){
//                    MIN=w[j];
//                    id=j;
//                }
//            }
//            count[id]++;
//            if(w[id]<=v[i].a){
//                v[i].s=v[i].a;
//                w[id]=v[i].s+v[i].t;
//                v[i].wait=0;
//            }
//            else{
//                v[i].s=w[id];
//                w[id]=v[i].s+v[i].t;
//                v[i].wait=v[i].s-v[i].a;
//            }
//        }
//    }
//}
//cout<<i<<' '<<id<<endl;
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <set>
using namespace std;
struct men{
    int arr,t,ser=-1;
    bool vip;
};
struct table{
    int t=8*3600,num=0;
    bool vip=false;
};
bool cmp(const men&a,const men&b){
    return a.arr<b.arr;
}
bool cmp2(const men&a,const men&b){
    return a.ser<b.ser;
}
void allocate(table& v,men& x){
    v.num++;
    if(x.arr<=v.t){
        x.ser=v.t;
    }
    else if(x.arr>v.t){
        x.ser=x.arr;
    }
    v.t=x.ser+x.t;
}
vector<men> v;
int findnextvip(int vipid){
    vipid++;
    while(vipid<v.size() && !v[vipid].vip)vipid++;
    return vipid;
}
int main(){
    int n,k,m,t,f,hh,mm,ss;
    cin>>n;
    for(int i=0;i<n;i++){
        scanf("%d:%d:%d %d %d",&hh,&mm,&ss,&t,&f);
        men man;
        man.arr=3600*hh+60*mm+ss;
        man.t=t*60;
        if(man.t>60*120)man.t=120*60;
        if(man.arr>=21*3600)continue;
        if(f)man.vip=true;
        else man.vip=false;
        v.push_back(man);
    }
    sort(v.begin(),v.end(),cmp);
//    for(int i=0;i<v.size();i++){
//        t=v[i].arr;
//        printf("%02d:%02d:%02d %d %d\n",t/3600%3600,t/60%60,t%60,v[i].t,v[i].vip);
//    }
    cin>>m>>k;
    vector<table> vt(m+1);
    for(int i=0;i<k;i++){
        scanf("%d",&t);
        vt[t].vip=true;
    }
    int vipid=-1;
    vipid=findnextvip(vipid);
    for(int i=0;i<v.size();){
        int MIN=99999999,tblid=-1;
        for(int j=1;j<=m;j++){
            if(vt[j].t<MIN){
                MIN=vt[j].t;
                tblid=j;
            }
        }
        if(vt[tblid].t>=21*3600)break;
        if(v[i].vip && i<vipid){
            i++;
            continue;
        }
        if(vt[tblid].vip){
            if(v[i].vip){
                allocate(vt[tblid], v[i]);
                if(i==vipid)vipid=findnextvip(vipid);
                i++;
            }
            else{
                if(vipid<v.size() && v[vipid].arr<=vt[tblid].t){
                    allocate(vt[tblid], v[vipid]);
                    vipid=findnextvip(vipid);
                }
                else{
                    allocate(vt[tblid], v[i]);
                    i++;
                }
            }
        }
        else{
            if(!v[i].vip){
                allocate(vt[tblid], v[i]);
                i++;
            }
            else{
                int viptblid=-1,MIN=99999999;
                for(int j=1;j<=m;j++){
                    if(vt[j].t<MIN && vt[j].vip){
                        MIN=vt[j].t;
                        viptblid=j;
                    }
                }
                if(viptblid!=-1 && vt[viptblid].t<=v[i].arr){
                    allocate(vt[viptblid], v[i]);
                    if(i==vipid)vipid=findnextvip(vipid);
                    i++;
                }
                else{
                    allocate(vt[tblid], v[i]);
                    if(i==vipid)vipid=findnextvip(vipid);
                    i++;
                }
            }
        }
    }
    sort(v.begin(),v.end(),cmp2);
    for(int i=0;i<v.size();i++){
        if(v[i].ser==-1)continue;
        t=v[i].arr;
        printf("%02d:%02d:%02d ",t/3600,t%3600/60,t%60);
        t=v[i].ser;
        printf("%02d:%02d:%02d %d\n",t/3600,t%3600/60,t%60,(v[i].ser-v[i].arr+30)/60);
    }
    for(int i=1;i<=m;i++){
        if(i<m)printf("%d ",vt[i].num);
        else printf("%d",vt[i].num);
    }
    return 0;
}


*/
