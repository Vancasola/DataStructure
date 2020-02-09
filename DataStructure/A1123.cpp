//
//  A1123.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/9.
//  Copyright © 2020 none. All rights reserved.
//  5:49 6:16 6:20
/*
#include <stdio.h>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
struct node{
    int x;
    node* lc,*rc;
    int h;
    node(int d){
        x=d;
        rc=lc=NULL;
        h=1;
    }
};
vector<int>v;
bool f=false,f2=true;
int getheight(node* r){
    if(r==NULL)return 0;
    return r->h;
}
int getfactor(node* r){
    return getheight(r->lc)-getheight(r->rc);
}
void updateheight(node*r){
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
    else if(x>r->x){
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
void layerorder(node* r){
    queue<node*> q;
    node* t;
    q.push(r);
    while(!q.empty()){
        t=q.front();
        v.push_back(t->x);
        q.pop();
        if(f && t->lc!=NULL)f2=false;
        if(t->lc==NULL)f=true;
        if(f && t->rc!=NULL)f2=false;
        if(t->rc==NULL)f=true;
        
        if(t->lc!=NULL)q.push(t->lc);
        if(t->rc!=NULL)q.push(t->rc);
    }
    return ;
}
int main()
{
    int n,t;
    node* root=NULL;
    cin>>n;
    for(int i=0;i<n;i++){
        scanf("%d",&t);
        insert(root,t);
    }
    layerorder(root);
    for(int i=0;i<v.size();i++){
        if(i<v.size()-1)printf("%d ",v[i]);
        else printf("%d\n",v[i]);
    }
    if(f2)printf("YES\n");
    else printf("NO\n");
    return 0;
}
*/
