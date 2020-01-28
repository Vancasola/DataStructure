//
//  A1056.cpp
//  DataStructure
//
//  Created by vancasola on 2020/1/28.
//  Copyright © 2020 none. All rights reserved.
//  2:58
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
    vector<node> v(1010),a;
    cin>>np>>ng;
    int rank=np/3+np-(np/3)*3;
    for(int i=0;i<np;i++){
        scanf("%d",&v[i].w);
        v[i].r=rank;
        v[i].id=i;
    }
    for(int i=0;i<np;i++){
        scanf("%d",&t);
        v[t].order=i;
    }
    for(int i=0;i<np;i++){
        a.push_back(v[i]);
    }
    sort(a.begin(),a.begin()+np,cmp);
    for(int i=0;i<np;i++){
        printf("%d ",a[i].w);
    }
    cout<<endl;
    int maxrank;
    while(a.size()!=1){
        vector<node> next,tmp;
        int i=0;
        if(a.size()>ng){
        for( i=0;i<(a.size()/ng)*3;i++){
            tmp.push_back(a[i]);
            if((i+1)%(ng)==0){
                next.push_back( findmax(tmp));
                tmp.clear();
            }
        }
        }
        cout<<i<<endl;
        if(i<a.size())
        for(;i<a.size();i++){
            tmp.push_back(a[i]);
        }
        next.push_back( findmax(tmp));
        cout<<endl<<next.size()<<endl;
        for(int j=0;j<next.size();j++){
            int id=next[j].id;
            cout<<next[j].w<<' ';
            v[id].r--;
            maxrank=v[id].r;
        }
        
        a=next;
    }
    for(int i=0;i<np;i++){
        printf("%d ",v[i].r);
    }
    return 0;
}
*/
