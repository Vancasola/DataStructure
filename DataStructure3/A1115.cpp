//
//  A1115.cpp
//  DataStructure
//
//  Created by vancasola on 2020/4/2.
//  Copyright © 2020 none. All rights reserved.
//  10:17 10:28
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <iostream>
#include <cmath>
using namespace std;
struct node{
    int x;
    node* lc,*rc;
    node(int d){
        lc=rc=NULL;
        x=d;
    }
};
void insert(node*& r,int x){
    if(r==NULL){
        r=new node(x);
        return;
    }
    if(x<=r->x)insert(r->lc, x);
    if(x>r->x)insert(r->rc, x);
}
int n1=0,n2=0;
void layerorder(node* r){
    queue<node*> q,p;
    q.push(r);
    node* t;
    while(!q.empty()){
        n1=n2;
        n2=q.size();
        p=q;
        while(!q.empty())q.pop();
        while(!p.empty()){
            t=p.front();
            p.pop();
            if(t->lc!=NULL)q.push(t->lc);
            if(t->rc!=NULL)q.push(t->rc);
        }
    }
}
int main(){
    int n,t;
    node* r=NULL;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&t);
        insert(r,t);
    }
    layerorder(r);
    printf("%d + %d = %d",n2,n1,n1+n2);
    
}
*/
