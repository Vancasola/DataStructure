//
//  A1102.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/23.
//  Copyright © 2020 none. All rights reserved.
//  2:35 2:52 
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
#include <unordered_map>
using namespace std;
int n;
struct node{
    int x;
    int lc=-1,rc=-1;
}v[15];

vector<int> v1,v2;
void layerorder(int r){
    queue<int > q;
    q.push(r);
    while(!q.empty()){
        r=q.front();
        v1.push_back(v[r].x);
        q.pop();
        if(v[r].lc!=-1)q.push(v[r].lc);
        if(v[r].rc!=-1)q.push(v[r].rc);
    }
}
void inorder(int r){
    if(v[r].lc!=-1)inorder(v[r].lc);
    v2.push_back(v[r].x);
    if(v[r].rc!=-1)inorder(v[r].rc);
}
void display(vector<int> &x){
    for(int i=0;i<x.size()-1;i++){
        printf("%d ",x[i]);
    }
    printf("%d\n",x[x.size()-1]);
}
int main(){
    int n,root=0;
    cin>>n;
    char a,b;
    vector<bool> vis(n,false);
    for(int i=0;i<n;i++){
        cin>>a>>b;
        v[i].x=i;
        if(a=='-')v[i].rc=-1;
        else {v[i].rc=a-'0';vis[a-'0']=true;}
        if(b=='-')v[i].lc=-1;
        else {v[i].lc=b-'0';vis[b-'0']=true;}
    }
    for(int i=0;i<n;i++){
        if(!vis[i]){root=i;break;}
    }
    layerorder(root);
    inorder(root);
    display(v1);
    display(v2);
}
*/
