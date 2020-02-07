//
//  A1135.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/4.
//  Copyright © 2020 none. All rights reserved.
//  2:05
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
struct node{
    int x;
    node* lc,*rc;
    node(int d){
        x=d;
        lc=rc=NULL;
    }
    node(){};
};
vector<node> a;
bool f=false,f2=false;
void insert(node* &r,int x){
    if(r==NULL){
        r=new node(x);
        return;
    }
    if(abs(x)<=abs(r->x))insert(r->lc, x);
    if(abs(x)>abs(r->x))insert(r->rc, x);
}
void preorder(node* r){
    if(f||r==NULL){
        return ;
    }
    if(r->x<0 ){
        if( (r->lc!=NULL&& r->lc->x<0 )|| (r->rc!=NULL && r->rc->x<0)){
            f=true;
            return;
        }
    }
    if(r->lc!=NULL)preorder(r->lc);
    if(r->rc!=NULL)preorder(r->rc);
}
int MAX=0;
void getnum(node* r,int sum){
    if(r==NULL)return;
    if(r->x>0)sum++;
    if(sum>MAX)MAX=sum;
    if(r->lc!=NULL )getnum(r->lc,sum);
    if(r->rc!=NULL )getnum(r->rc,sum);
}
void judge(node*r){
    if(f2)return ;
        int l1,l2;
        MAX=0;
        getnum(r->lc,0);
        l1=MAX;
        MAX=0;
        getnum(r->rc,0);
        l2=MAX;
        if(l1!=l2){
            f2=true;
            return;
        }
    if(r->lc!=NULL )judge(r->lc);
    if(r->rc!=NULL )judge(r->rc);
}
int main(){
    int k,m,x;
    cin>>k;
    for(int i=0;i<k;i++){
        scanf("%d",&m);
        node* r=NULL;
        for(int j=0;j<m;j++){
            scanf("%d",&x);
            insert(r, x);
        }
        if(r->x<0){
            printf("No\n");
            continue;
        }
        else {
            f=false;
            preorder(r);
            if(f){
                printf("No\n");
                continue;
            }
        }
        f2=false;
        judge(r);
        if(f2){
            printf("No\n");
            continue;
        }
        printf("Yes\n");
    }
    return 0;
}

*/
