
//
//  A1066.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/5.
//  Copyright © 2020 none. All rights reserved.
//
/*
#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;
struct node{
    int x;
    node*lc,*rc;
    int h;
    node(){}
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
int getfactor(node* r){
    return getheight(r->lc)-getheight(r->rc);
}
void updateheight(node* r){
    r->h=max(getheight(r->lc),getheight(r->rc))+1;
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
void insert(node*& r,int x){
    if(r==NULL){
        r=new node(x);
        return ;
    }
    if(x<r->x){
        insert(r->lc, x);
        updateheight(r);
        if(getfactor(r)==2){
            if(getfactor(r->lc)==1){
                R(r);
            }
            else if(getfactor(r->lc)==-1){
                L(r->lc);
                R(r);
            }
        }
    }
    if(x>r->x){
        insert(r->rc, x);
        updateheight(r);
        if(getfactor(r)==-2){
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

int main(){
    node* root=NULL;
    int n,t;
    cin>>n;
    for(int i=0;i<n;i++){
        scanf("%d",&t);
        insert(root, t);
    }
    cout<<root->x;
    return 0;
}
*/
