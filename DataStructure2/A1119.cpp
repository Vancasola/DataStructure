//
//  A1119.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/26.
//  Copyright © 2020 none. All rights reserved.
//  10:05 10:44
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
    node* lc,* rc;
    node(){};
    node(int d){
        x=d;
        lc=rc=NULL;
    }
};
int pre[35],post[35],n;
vector<int> v;
bool f=true;
node* create(int prel,int prer,int postl,int postr){
    //printf("%d %d %d %d\n",prel,prer,postl,postr);
    if(prel>prer){
        return NULL;
    }
    node* r=new node(pre[prel]);
    if(prel==prer){
        return r;
    }
    int p=-1;
    for(int i=prel+1;i<=prer;i++){
        if(pre[i]==post[postr-1]){
            p=i;
            break;
        }
    }
    if(p-prel==1){
        f=false;
        r->lc=create(prel+1, p-1, postl, postl+p-prel-2);
        r->rc=create(p, prer, postl+p-prel-1, postr-1);
        return r;
    }
    r->lc=create(prel+1, p-1, postl, postl+p-prel-2);
    r->rc=create(p, prer, postl+p-prel-1, postr-1);
    return r;
}
void inorder(node* r){
    if(r->lc!=NULL)inorder(r->lc);
    v.push_back(r->x);
    if(r->rc!=NULL)inorder(r->rc);
}
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%d",&pre[i]);
    for(int i=0;i<n;i++)scanf("%d",&post[i]);
    node* root=create(0,n-1,0,n-1);
    inorder(root);
    if(f)printf("Yes\n");
    else printf("No\n");
    for(int i=0;i<v.size();i++){
        if(i)printf(" %d",v[i]);
        else printf("%d",v[i]);
    }
    printf("\n");
    return 0;
}
*/
