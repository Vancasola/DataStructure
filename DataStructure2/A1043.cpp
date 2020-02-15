//
//  A1043.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/15.
//  Copyright © 2020 none. All rights reserved.
//  9:40 9:57
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
struct node {
    int x;
    node* lc,*rc;
    node(){}
    node(int d){
        x=d;
        lc=rc=NULL;
    }
};
void insert1(node*& r,int x){
    if(r==NULL){
        r=new node(x);
        return;
    }
    if(x<r->x)insert1(r->lc,x);
    if(x>=r->x)insert1(r->rc,x);
}
void insert2(node*& r,int x){
    if(r==NULL){
        r=new node(x);
        return;
    }
    if(x>=r->x)insert2(r->lc,x);
    if(x<r->x)insert2(r->rc,x);
}
vector<int> v,a;
int p=0;
bool f1=true,f2=true;
void postorder(node* r){
    if(r->lc!=NULL)postorder(r->lc);
    if(r->rc!=NULL)postorder(r->rc);
    v.push_back(r->x);
}
void preorder(node* r,bool &f){
    if(r->x!=a[p++]){
        f=false;
    }
    if(r->lc!=NULL)preorder(r->lc,f);
    if(r->rc!=NULL)preorder(r->rc,f);
}
int main(){
    node* root1=NULL,*root2=NULL;
    int n,t;
    cin>>n;
    for(int i=0;i<n;i++){
        scanf("%d",&t);
        insert1(root1,t);
        insert2(root2,t);
        a.push_back(t);
    }
    p=0;
    preorder(root1,f1);
    p=0;
    if(!f1)preorder(root2,f2);
    if(f1 || f2){
        printf("YES\n");
        if(f1)postorder(root1);
        else postorder(root2);
        for(int i=0;i<v.size();i++){
            if(i!=v.size()-1)printf("%d ",v[i]);
            else printf("%d\n",v[i]);
        }
    }
    else printf("NO");
    return 0;
}
*/
