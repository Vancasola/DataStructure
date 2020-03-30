//
//  A1127.cpp
//  DataStructure
//
//  Created by vancasola on 2020/3/29.
//  Copyright © 2020 none. All rights reserved.
//  12:45 1:04
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <queue>
#include <iostream>
#include <cmath>
using namespace std;
int in[35],post[35];
struct node{
    int x;
    node* lc,*rc;
    node(int d){
        x=d;
        lc=rc=NULL;
    }
};
node* create(int inl,int inr,int postl,int postr){
    if(postl>postr){
        return NULL;
    }
    node* r=new node(post[postr]);
    int p;
    for(p=inl;p<=inr;p++){
        if(in[p]==post[postr]){
            break;
        }
    }
    r->lc= create(inl,p-1,postl,postl+p-inl-1);
    r->rc= create(p+1,inr,postl+p-inl,postr-1);
    return r;
}
vector<int> v;
void layerorder(node* r){
    queue<node*>q,p;
    stack<node*> s;
    node* t;
    s.push(r);
    int index=0;
    while(!s.empty()){
        while(!s.empty()){
            p.push(s.top());
            s.pop();
        }
        while(!p.empty()){
            t=p.front();
            v.push_back(t->x);
            if(index%2){
                if(t->lc!=NULL)s.push(t->lc);
                if(t->rc!=NULL)s.push(t->rc);
            }
            else {
                if(t->rc!=NULL)s.push(t->rc);
                if(t->lc!=NULL)s.push(t->lc);
            }
            p.pop();
        }
        index++;
    }
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++)scanf("%d",&in[i]);
    for(int i=0;i<n;i++)scanf("%d",&post[i]);
    node* root=create(0,n-1,0,n-1);
    layerorder(root);
    for(int i=0;i<n;i++){
        if(i)printf(" %d",v[i]);
        else printf("%d",v[i]);
    }
    return 0;
}
*/
