//
//  A1123.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/21.
//  Copyright © 2020 none. All rights reserved.
//  9:36 10:02
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
int n;
struct node{
    int x;
    node* lc,* rc;
    int h;
    node(int d){
        x=d;
        lc=rc=NULL;
        h=1;
    }
};
int getheight(node* r){
    if(r==NULL)return 0;
    return r->h;
}
void updateheight(node*& r){
    r->h=max(getheight(r->lc),getheight(r->rc))+1;
}
int getfactor(node* r){
    if(r==NULL)return 0;
    return getheight(r->lc)-getheight(r->rc);
}
void L(node*& r){
    node* t=r->rc;
    r->rc=t->lc;
    t->lc=r;
    updateheight(r);
    updateheight(t);
    r=t;
}
void R(node*& r){
    node* t=r->lc;
    r->lc=t->rc;
    t->rc=r;
    updateheight(r);
    updateheight(t);
    r=t;
}
void insert(node*&r,int x){
    if(r==NULL){
        r=new node(x);
        return ;
    }
    if(x<r->x){
        insert(r->lc,x);
        updateheight(r);
        int f=getfactor(r);
        if(f==2){
            if(getfactor(r->lc)==1){
                R(r);
            }
            else if(getfactor(r->lc)==-1){
                L(r->lc);
                R(r);
            }
        }
    }
    else if(x>r->x){
        insert(r->rc,x);
        updateheight(r);
        int f=getfactor(r);
        if(f==-2){
            if(getfactor(r->rc)==-1){
                L(r);
            }
            else if(getfactor(r->rc)==1){
                R(r->rc);
                L(r);
            }
        }
    }
}
vector<int> v;
bool flag=true;
void layerorder(node* root){
    queue<node*> q,p;
    q.push(root);
    node* r;
    bool f=false;
    while(!q.empty()){
        r=q.front();
        //cout<<r->x<<endl;
        q.pop();
        v.push_back(r->x);
        if(f&&(r->lc!=NULL||r->rc!=NULL))flag=false;
        if(!f && r->lc==NULL){
            f=true;
            if(r->rc!=NULL)flag=false;
        }
        if(!f&&r->rc==NULL)f=true;
        if(r->lc!=NULL)q.push(r->lc);
        if(r->rc!=NULL)q.push(r->rc);
    }
}
int main(){
    cin>>n;
    node* root=NULL;
    int t;
    for(int i=0;i<n;i++){
        scanf("%d",&t);
        insert(root,t);
    }
    layerorder(root);
    for(int i=0;i<v.size();i++){
        if(i<v.size()-1)printf("%d ",v[i]);
        else printf("%d",v[i]);
    }
    if(flag)printf("\nYES\n");
    else printf("\nNO\n");
    return 0;
}
*/
