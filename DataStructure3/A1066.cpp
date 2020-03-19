//
//  A1066.cpp
//  DataStructure
//
//  Created by vancasola on 2020/3/19.
//  Copyright © 2020 none. All rights reserved.
//  9:11

#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <unordered_map>
using namespace std;
struct node{
    int x,h;
    node* lc,*rc;
    node(int d){
        lc=rc=NULL;
        x=d;
        h=1;
    }
};
int getheight(node* r){
    if(r==NULL)return 0;
    return r->h;
}
void updateheight(node*& r){
    r->h= max(getheight(r->lc),getheight(r->rc))+1;
}
int getfactor(node* r){
    return getheight(r->lc)-getheight(r->rc);
}
void L(node*&r){
    node* t=r->rc;
    r->rc=t->lc;
    t->lc=r;
    updateheight(r);
    updateheight(t);
    r=t;
}
void R(node*&r)
{
    node* t=r->lc;
    r->lc=t->rc;
    t->rc=r;
    updateheight(r);
    updateheight(t);
    r=t;
}
void insert(node*& r,int x)
{
    if(r==NULL){
        r = new node(x);
        return;
    }
    if(x<r->x){
        insert(r->lc, x);
        updateheight(r);
        int f=getfactor(r);
        if(f==2){
            int f=getfactor(r->lc);
            if(f==1){
                R(r);
            }
            else if(f==-1){
                L(r->lc);
                R(r);
            }
        }
    }
    else if(x>=r->x)
    {
        insert(r->rc, x);
        updateheight(r);
        int f=getfactor(r);
        if(f==-2){
            int f=getfactor(r->rc);
            if(f==-1){
                L(r);
            }
            else if(f==1){
                R(r->rc);
                L(r);
            }
        }
    }
}
int main(){
    int n,t;
    node* root=NULL;
    cin>>n;
    for(int i=0;i<n;i++){
        scanf("%d",&t);
        insert(root,t);
    }
    printf("%d",root->x);
    return 0;
}
