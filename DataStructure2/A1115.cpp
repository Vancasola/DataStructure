//
//  A1115.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/15.
//  Copyright © 2020 none. All rights reserved.
//  10:06 10:18

/*
#include <stdio.h>
#include <string>
#include <vector>
#include <queue>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
struct node{
    int x;
    node* lc,*rc;
};
void insert(node*& r,int x){
    if(r==NULL){
        r=new node;
        r->x=x;
        r->lc=r->rc=NULL;
        return;
    }
    if(x<=r->x)insert(r->lc,x);
    if(x>r->x)insert(r->rc, x);
}
int n1=0,n2=0;
void layerorder(node* r){
    queue<node*>q,p;
    node* t;
    q.push(r);
    while(!q.empty()){
        t=q.front();
        p=q;
        int sum=0;
        while(!q.empty())q.pop();
        while(!p.empty()){
            sum++;
            t=p.front();
            p.pop();
            if(t->lc!=NULL)q.push(t->lc);
            if(t->rc!=NULL)q.push(t->rc);
        }
        n1=n2;
        n2=sum;
    }
    return ;
}
int n;
int main(){
    int t;
    node* root=NULL;
    cin>>n;
    for(int i=0;i<n;i++){
        scanf("%d",&t);
        insert(root, t);
    }
    layerorder(root);
    printf("%d + %d = %d",n2,n1,n1+n2);
    
    return 0;
}
*/
