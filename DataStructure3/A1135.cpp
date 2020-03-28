//
//  A1135.cpp
//  DataStructure
//
//  Created by vancasola on 2020/3/28.
//  Copyright © 2020 none. All rights reserved.
//  11:28 12:15
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <iostream>
#include <unordered_map>
#include <cmath>
#include <set>
using namespace std;
struct node {
    node* lc,*rc;
    int x,y;
    node(int d){
        lc=rc=NULL;
        x=d;
        y=abs(x);
    }
};
void insert(node*& r,int x){
    if(r==NULL){
        r= new node(x);
        return ;
    }
    if(abs(x)<r->y)
        insert(r->lc, x);
    if(abs(x)>=r->y)
        insert(r->rc, x);
}
bool f=true;
int p=-1,m=0;
void getnumber(node* r,int sum){
    if(r==NULL){
        if(m==-1){
            m=sum;
            return;
        }
        else if(sum!=m)f=false;
        return;
    }
    if(r->x>0)sum++;
    getnumber(r->lc,sum);
    getnumber(r->rc,sum);
}
void dfs(node* r){
    if(!f)return;
    if(r==NULL){
        return;
    }
    else if(r->x<0)
    {
        if(r->lc!=NULL&&r->lc->x<0){
            f=false;
            return;
        }
        if(r->rc!=NULL&&r->rc->x<0){
            f=false;
            return;
        }
    }
    m=-1;
    getnumber(r, 0);
    if(r->lc!=NULL)dfs(r->lc);
    if(r->rc!=NULL)dfs(r->rc);
}
int main(){
    int k,n,x;
    cin>>k;
    for(int i=0;i<k;i++){
        scanf("%d",&n);
        node* root=NULL;
        for(int j=0;j<n;j++){
            scanf("%d",&x);
            insert(root, x);
        }
        if(root->x<0){
            printf("No\n");
            continue;
        }
        f=true;
        dfs(root);
        if(f)printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
*/ 
