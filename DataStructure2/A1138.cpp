//
//  A1138.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/27.
//  Copyright © 2020 none. All rights reserved.
//  6:20 6:31
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
int pre[50005],in[50005];
struct node{
    int x;
    node*lc,*rc;
    node(int d){
        lc=rc=NULL;
        x=d;
    }
    node(){}
};
node* create(int prel,int prer,int inl,int inr){
    if(prel>prer)return NULL;
    node* r=new node(pre[prel]);
    int p=0;
    for(int i=inl;i<=inr;i++){
        if(in[i]==pre[prel]){
            p=i;
            break;
        }
    }
    r->lc=create(prel+1, prel+p-inl, inl, p-1);
    r->rc=create(prel+p-inl+1, prer, p+1, inr);
    return r;
}
bool f=false;
void postorder(node* r){
    if(f)return;
    if(r->lc!=NULL)postorder(r->lc);
    if(f)return;
    if(r->rc!=NULL)postorder(r->rc);
    if(f)return;
    if(!f){
        printf("%d",r->x);
        f=true;
        return ;
    }
}
int main(){
    node* root=NULL;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)scanf("%d",&pre[i]);
    for(int i=0;i<n;i++)scanf("%d",&in[i]);
    root=create(0,n-1,0,n-1);
    postorder(root);
    return 0;
}
*/
