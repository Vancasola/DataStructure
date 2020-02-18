//
//  A1066.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/18.
//  Copyright © 2020 none. All rights reserved.
//  11:05 11:29 1:22 1:32
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <set>
using namespace std;
struct node {
    int x,h;
    node*lc,*rc;
    node(int d){
        x=d;
        h=1;
        lc=rc=NULL;
    }
};
int getheight(node* r){
    if(r==NULL)return 0;
    return r->h;
}
void updateheight(node* r){
    r->h= max(getheight(r->lc),getheight(r->rc))+1;
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
void insert(node*& r, int x){
    if(r==NULL){
        r=new node(x);
        return;
    }
    if(x<r->x){
        insert(r->lc, x);
        updateheight(r->lc);
        updateheight(r);
        int f=getfactor(r);
        //cout<<f<<endl;
        if(f==2){
            int f2=getfactor(r->lc);
            if(f2==1){
                R(r);
            }
            else if(f2==-1){
                L(r->lc);
                R(r);
            }
        }
    }
    else if(x>=r->x){
        insert(r->rc, x);
        updateheight(r->rc);
        updateheight(r);
        int f=getfactor(r);
        if(f==-2){
            int f2=getfactor(r->rc);
            if(f2==-1){
                L(r);
            }
            else if(f2==1){
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
        insert(root,t);
    }
    cout<<root->x;
    return 0;
}

*/
