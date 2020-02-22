//
//  A1127.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/22.
//  Copyright © 2020 none. All rights reserved.
//  10:46 10:51 11:01 11:23
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <stack>
#include <queue>
#include <algorithm>
#include <unordered_map>
using namespace std;
int n,in[35],post[35];
struct node{
    int x;
    node*lc,*rc;
    node(int d){
        x=d;
        lc=rc=NULL;
    }
};
node* create(int inl,int inr,int postl,int postr){
    if(inl>inr){
        return NULL;
    }
    node* r=new node(post[postr]);
    int p=-1;
    for(int i=inl;i<=inr;i++){
        if(in[i]==post[postr])
        {
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
    queue<node*> q,p;
    node* r;
    stack<node*>s;
    //s.push(root);
    q.push(root);
    int f=0;
    while(!q.empty()){
        p=q;
        while(!q.empty())q.pop();
        while(!p.empty()){
            r=p.front();
            v.push_back(r->x);
            p.pop();
            if(f%2==1){
                if(r->lc!=NULL)s.push(r->lc);
                if(r->rc!=NULL)s.push(r->rc);
            }
            else{
                if(r->rc!=NULL)s.push(r->rc);
                if(r->lc!=NULL)s.push(r->lc);
            }
        }
        while(!s.empty()){
            q.push(s.top());
            s.pop();
        }
        f++;
    }
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        scanf("%d",&in[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&post[i]);
    }
    node* root=create(0,n-1,0,n-1);
    layerorder(root);
    for(int i=0;i<v.size();i++){
        if(i<v.size()-1)printf("%d ",v[i]);
        else printf("%d",v[i]);
    }
    return 0;
}
*/
