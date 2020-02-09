

//
//  A1119.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/5.
//  Copyright © 2020 none. All rights reserved.
//
/*
#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;
int n,pre[35],post[35];
struct node{
    int x;
    node* lc,*rc;
    node(int d){
        x=d;
        lc=rc=NULL;
    }
    node(){}
};
bool f=true;
node* create(int prel,int prer,int postl,int postr){
    if(prel>prer){
        return NULL;
    }
    if(pre[prel]==post[postr]&&pre[prel+1]==post[postr-1])f=false;
    node* r=new node();
    int left,right;
    for(int i=postl;i<=postr;i++){
        if(post[i]==pre[prel]){
            left=i;
            break;
        }
    }
    for(int i=prel;i<=prer;i++){
        if(pre[i]==post[postr]){
            right=i;
            break;
        }
    }
    r->lc=create(prel+1, right, postl, left-1);
    r->rc=create(right+1, prer, left, postr-1);
    return r;
}
vector<int> v;
void inorder(node* r){
    if(r->lc!=NULL)inorder(r->lc);
    if(r->rc!=NULL)inorder(r->rc);
    v.push_back(r->x);
}
int main(){
    cin>>n;
    node* root=NULL;
    for(int i=0;i<n;i++){
        scanf("%d",&pre[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&post[i]);
    }
    root=create(0, n-1, 0, n-1);
    if(f)printf("Yes\n");
    else printf("No\n");
    for(int i=0;i<v.size();i++){
        if(i<v.size()-1)printf("%d ",v[i]);
        else printf("%d\n",v[i]);
    }
    return 0;
}

*/
