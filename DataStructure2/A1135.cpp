//
//  A1135.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/25.
//  Copyright © 2020 none. All rights reserved.
//  10:09 10:43 11:18 11:42
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
struct node{
    int x;
    node* lc,*rc;
    node(){};
    node(int d){
        x=d;
        lc=rc=NULL;
    }
};
int n,m,t,num=0;
void insert(node*& r,int x){
    if(r==NULL){
        r=new node(x);
        return;
    }
    if(abs(x)<=abs(r->x)  )insert(r->lc, x);
    if(abs(x)>abs(r->x) )insert(r->rc, x);
}
bool f=true;
int l1=0,l2=0;
void getnum1(node* r,int sum){
    if(r==NULL){
        if(sum>l1)l1=sum;
        return;
    }
    if(r->x>0)sum++;
    getnum1(r->lc,sum);
    getnum1(r->rc,sum);
}
void getnum2(node* r,int sum){
    if(r==NULL){
        if(sum>l2)l2=sum;
        return;
    }
    if(r->x>0)sum++;
    getnum2(r->lc,sum);
    getnum2(r->rc,sum);
}
void dfs(node* r,int sum){
    if(!f)return ;
    l1=l2=0;
    getnum1(r->lc,0);
    getnum2(r->rc,0);
    if(l1!=l2)f=false;
    if(r->x<0){
        if(r->lc!=NULL && r->lc->x<0)f=false;
        if(r->rc!=NULL && r->rc->x<0)f=false;
    }
    if(r->lc!=NULL)dfs(r->lc,sum);
    if(r->rc!=NULL)dfs(r->rc,sum);
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>m>>t;
        node* root=NULL;
        f=true;
        insert(root,t);
        for(int j=1;j<m;j++){
            scanf("%d",&t);
            insert(root, t);
        }
        if(root->x<0){
            printf("No\n");
            continue;
        }
        dfs(root,0);
        if(f)printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
*/
