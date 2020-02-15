//
//  A1099.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/15.
//  Copyright © 2020 none. All rights reserved.
//  4:37 4:49
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
    int lc,rc;
}v[105];
int c[105];
int p=0;
vector<int> ans;
void inorder(int x){
    if(v[x].lc!=-1)inorder(v[x].lc);
    v[x].x=c[p++];
    if(v[x].rc!=-1)inorder(v[x].rc);
}
void layerorder(int r){
    queue<int> q;
    int t;
    q.push(r);
    while(!q.empty()){
        t=q.front();
        ans.push_back(v[t].x);
        q.pop();
        if(v[t].lc!=-1)q.push(v[t].lc);
        if(v[t].rc!=-1)q.push(v[t].rc);
    }
}
int main(){
    cin>>n;
    int a,b;
    for(int i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        v[i].lc=a;
        v[i].rc=b;
    }
    for(int i=0;i<n;i++)scanf("%d",&c[i]);
    sort(c,c+n);
    inorder(0);
    layerorder(0);
    for(int i=0;i<ans.size();i++){
        if(i<ans.size()-1)printf("%d ",ans[i]);
        else printf("%d",ans[i]);
    }
    return 0;
}
*/
