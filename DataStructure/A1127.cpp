//
//  A1127.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/4.
//  Copyright © 2020 none. All rights reserved.
//
/*
#include <stdio.h>
#include <iostream>
#include <queue>
#include <stack>
using namespace std;
int n,post[35],in[35];
vector<int> v;
struct node{
    int x;
    node* lc,*rc;
    node(int d){x=d;lc=rc=NULL;}
};
node* create(int postl,int postr, int inl, int inr){
    if(postl>postr)return NULL;
    node* r =new node(post[postr]);
    int u=-1;
    for(int i=inl;i<=inr;i++){
        if(post[postr]==in[i])
        {
            u=i;
            break;
        }
    }
    r->lc=create(postl, postl+u-inl-1, inl, u-1);
    r->rc=create(postl+u-inl, postr-1, u+1, inr);
    return r;
}
void layerorder(node* root){
    node* r=root;
    queue<node*> q;
    stack<node*> s;
    int cnt=0;
    q.push(r);
    while(!q.empty()){
        while(!q.empty()){
            r=q.front();
            s.push(r);
            v.push_back(r->x);
            q.pop();
        }
        while(!s.empty()){
            r=s.top();
            s.pop();
            if(cnt%2==0){
                if(r->lc!=NULL)q.push(r->lc);
                if(r->rc!=NULL)q.push(r->rc);
            }
            else{
                if(r->rc!=NULL)q.push(r->rc);
                if(r->lc!=NULL)q.push(r->lc);
            }
        }
        cnt++;
    }
}
int main(){
    node* r;
    cin>>n;
    for(int i=0;i<n;i++)scanf("%d",&in[i]);
    for(int i=0;i<n;i++)scanf("%d",&post[i]);
    r=create(0, n-1, 0, n-1);
    layerorder(r);
    for(int i=0;i<v.size();i++){
        if(i!=v.size()-1)printf("%d ",v[i]);
        else printf("%d",v[i]);
    }
    return 0;
}*/
