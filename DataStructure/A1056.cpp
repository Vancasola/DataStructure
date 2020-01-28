//
//  A1056.cpp
//  DataStructure
//
//  Created by vancasola on 2020/1/28.
//  Copyright © 2020 none. All rights reserved.
//
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct node{
    int w,order,r,id;
};
int np,ng;
bool cmp(const node&a,const node&b){
    return a.order<b.order;
}
node findmax(vector<node> v){
    int m=0,index=0;
    for(int i=0;i<ng && i<v.size();i++){
        if(v[i].w>m){
            m=v[i].w;
            index=i;
        }
    }
    return v[index];
}
int main(){
    int t;
    vector<node> v(10010),a;
    cin>>np>>ng;
    for(int i=0;i<np;i++){
        scanf("%d",&v[i].w);
        v[i].id=i;
    }
    for(int i=0;i<np;i++){
        scanf("%d",&t);
        v[t].order=i;
    }
    for(int i=0;i<np;i++)
        a.push_back(v[i]);
    sort(a.begin(),a.begin()+np,cmp);
    while( a.size()!=1){
        vector<node> next,tmp;
        int i=0,rank=0;
        if(a.size()%ng==0)rank=a.size()/ng+1;
        else rank=a.size()/ng+1+1;
        if(a.size()>ng){
            for( i=0;i<(a.size()/ng)*ng;i++){
                v[a[i].id].r=rank;
                tmp.push_back(a[i]);
                if((i+1)%ng==0){
                    next.push_back( findmax(tmp));
                    tmp.clear();
                }
            }
        }
        if(i<a.size()){
            for(;i<a.size();i++){
                v[a[i].id].r=rank;
                tmp.push_back(a[i]);
            }
            next.push_back( findmax(tmp));
        }
        a=next;
    }
    if(a.size()){
        a[0].r=1;
        v[a[0].id].r=a[0].r;
    }
    for(int i=0;i<np;i++){
        if(i!=np-1)printf("%d ",v[i].r);
        else printf("%d",v[np-1].r);
    }
    return 0;
}

*/
