//
//  A1119.cpp
//  DataStructure
//
//  Created by vancasola on 2020/3/10.
//  Copyright © 2020 none. All rights reserved.
//  3:44 4:01
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <iostream>
#include <cmath>
using namespace std;
int n,pre[35],post[35],t;
struct node{
    int x;
    node*lc,*rc;
    node(int d){
        x=d;
        lc=rc=NULL;
    }
};
bool f=true;
node* create(int prel,int prer,int postl,int postr){
    if(prel>prer){
        return NULL;
    }
    node* r =new node(pre[prel]);
    if(prel==prer){
        return r;
    }
    int p=prel+1;
    for(int i=prel+1;i<=prer;i++){
        if(pre[i]==post[postr-1]){
            p=i;
            break;
        }
    }
    if(prel+1<n && postr-1>=0 && pre[prel+1]==post[postr-1])f=false;
    r->lc=create(prel+1, p-1, postl, postl+p-prel-2);
    r->rc=create(p, prer, postl+p-prel-1, postr-1);
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
    for(int i=0;i<n;i++)
        scanf("%d",&pre[i]);
    for(int i=0;i<n;i++)
        scanf("%d",&post[i]);
    node* root=create(0, n-1, 0, n-1);
    inorder(root);
    if(f)printf("Yes\n");
    else printf("No\n");
    for(int i=0;i<n;i++){
        if(!i)printf("%d",v[i]);
        else printf(" %d",v[i]);
    }
    printf("\n");
    return 0;
}
*/
