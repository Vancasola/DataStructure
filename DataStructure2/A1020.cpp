//
//  A1020.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/12.
//  Copyright © 2020 none. All rights reserved.
//  1:25 1:43
/*
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
int post[35],in[35],n;
struct node{
    int x;
    node* lc,*rc;
    node(int d){
        x=d;
        lc=rc=NULL;
    }
};
node* create(int postl,int postr,int inl,int inr){
    if(postl>postr){
        return NULL;
    }
    node* r=new node(post[postr]);
    int p=0;
    for(int i=inl;i<=inr;i++){
        if(in[i]==post[postr]){
            p=i;
            break;
        }
    }
    r->lc=create(postl, postl+p-inl-1, inl, p-1);
    r->rc=create(postl+p-inl, postr-1, p+1, inr);
    return r;
}
vector<int> v;
void layerorder(node* r){
    queue<node*> q;
    q.push(r);
    node* x;
    while(!q.empty()){
        x=q.front();
        v.push_back(x->x);
        q.pop();
        if(x->lc!=NULL)q.push(x->lc);
        if(x->rc!=NULL)q.push(x->rc);
    }
}
int main(){
    node* root=NULL;
    cin>>n;
    for(int i=0;i<n;i++)
        scanf("%d",&post[i]);
    for(int i=0;i<n;i++)
        scanf("%d",&in[i]);
    root=create(0, n-1, 0, n-1);
    layerorder(root);
    for(int i=0;i<n;i++){
        if(i!=n-1)printf("%d ",v[i]);
        else printf("%d\n",v[i]);
    }
    return 0;
}
*/
