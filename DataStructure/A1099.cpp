//
//  A1099.cpp
//  DataStructure
//
//  Created by vancasola on 2020/1/29.
//  Copyright © 2020 none. All rights reserved.
//  11:32 11:45
/*
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;
struct node{
    int k;
    int left,right;
}a[105];
int p=0,x[105],n=0;
vector<int> v;
void inorder (int root){
    if(a[root].left!=-1)inorder(a[root].left);
    a[root].k=x[p++];
    if(a[root].right!=-1)inorder(a[root].right);
}
void layerorder(){
    queue<int> q;
    int t;
    q.push(0);
    while(!q.empty()){
        t=q.front();
        v.push_back(a[t].k);
        q.pop();
        if(a[t].left!=-1)q.push(a[t].left);
        if(a[t].right!=-1)q.push(a[t].right);
    }
}
int main(){
    cin>>n;
    int l,r,t;
    for(int i=0;i<n;i++){
        cin>>a[i].left>>a[i].right;
    }
    for(int i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
    sort(x,x+n);
    inorder(0);
    layerorder();
    for(int i=0;i<n-1;i++)printf("%d ",v[i]);
    printf("%d",v[n-1]);
    return 0;
}
*/
