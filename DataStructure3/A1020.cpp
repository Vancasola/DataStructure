//
//  A1020.cpp
//  DataStructure
//
//  Created by vancasola on 2020/4/16.
//  Copyright © 2020 none. All rights reserved.
//  4:47 5:01
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <unordered_map>
#include <iostream>
#include <set>
using namespace std;
int in[35],post[35];
struct node{
    int x;
    node* lc,*rc;
    node(int d){
        lc=rc=NULL;
        x=d;
    }
};
node* create(int inl,int inr,int postl,int postr)
{
    if(postl>postr){
        return NULL;
    }
    node* r=new node(post[postr]);
    if(postl==postr)return r;
    int p=-1;
    for(int i=inl;i<=inr;i++){
        if(in[i]==post[postr]){
            p=i;
            break;
        }
    }
    r->lc=create(inl, p-1, postl, postl+p-inl-1);
    r->rc=create(p+1, inr, postl+p-inl, postr-1);
    return r;
}
vector<int> v;
void layerorder(node* root){
    node* r;
    queue<node*>q;
    q.push(root);
    while(!q.empty()){
        r=q.front();
        v.push_back(r->x);
        q.pop();
        if(r->lc!=NULL)q.push(r->lc);
        if(r->rc!=NULL)q.push(r->rc);
    }
    return;
}
int main(){
    int n;
    node* root=NULL;
    cin>>n;
    for(int i=0;i<n;i++)
        scanf("%d",&post[i]);
    for(int i=0;i<n;i++)
        scanf("%d",&in[i]);
    root=create(0, n-1, 0, n-1);
    layerorder(root);
    for(int i=0;i<v.size();i++){
        if(i)printf(" %d",v[i]);
        else printf("%d",v[i]);
    }
    return 0;
}
*/
