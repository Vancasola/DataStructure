//
//  A1115.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/4.
//  Copyright © 2020 none. All rights reserved.
//  11:23 12:23
/*
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <queue>
using namespace std;
struct node{
    int x;
    node*lc,*rc;
    node(int d){
        x=d;
        lc=rc=NULL;
    }
};
void insert(node* &r,int x){
    if(r==NULL){
        r=new node(x);
        return;
    }
    if(x<=r->x)insert(r->lc,x);
    if(x>r->x)insert(r->rc,x);
}
int n;
vector<int> v;
void layerorder(node* r){
    queue<node*> q1,q2;
    q1.push(r);
    node* x;
    while(!q1.empty()){
        q2=q1;
        while(!q1.empty())q1.pop();
        int cnt=0;
        while(!q2.empty()){
            cnt++;
            x=q2.front();
            q2.pop();
            if(x->lc!=NULL)q1.push(x->lc);
            if(x->rc!=NULL)q1.push(x->rc);
            }
        v.push_back(cnt);
    }
}
int main(){
    cin>>n;
    int x;
    node* r=NULL;
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        insert(r, x);
    }
    layerorder(r);
    printf("%d + %d = %d", v[v.size()-1],v[v.size()-2],v[v.size()-1]+v[v.size()-2]);
    return 0;
}
*/
