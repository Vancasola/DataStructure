

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
    node* r=new node(post[postr]);
    if(prel==prer)return r;
    int k;
    for(int i=prel+1;i<=prer;i++)
    {
        if(post[postr-1]==pre[i]){
            k=i;
            break;
        }
    }
    if(k-prel>1){
        r->lc=create(prel+1, k-1, postl, postl+k-prel-2);
        r->rc=create(k, prer, postl+k-prel-1, postr-1);
    }
    else{
        f=false;
        r->rc=create(prel+1, prer, postl, postr-1);
    }
    return r;
}
vector<int> v;
void inorder(node* r){
    if(r->lc!=NULL)inorder(r->lc);
    v.push_back(r->x);
    if(r->rc!=NULL)inorder(r->rc);
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
    inorder(root);
    for(int i=0;i<v.size();i++){
        if(i<v.size()-1)printf("%d ",v[i]);
        else printf("%d\n",v[i]);
    }
    return 0;
}
*/
