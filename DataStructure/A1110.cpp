//
//  A1110.cpp
//  DataStructure
//
//  Created by vancasola on 2020/1/26.
//  Copyright © 2020 none. All rights reserved.
//  10:29 11:08 12:13
/*
#include <stdio.h>
#include <string>
#include <iostream>
#include <set>
#include <queue>
using namespace std;
struct node{
    int left,right;
}t[25];
int n;
int layerorder(int root){
    queue<int> q;
    q.push(root);
    int x=-1,last=-1;
    int cnt=0;
    while(!q.empty()){
        x=q.front();
        q.pop();
        if(x==-1)break;
        last=x;
        cnt++;
        q.push(t[x].left);
        q.push(t[x].right);
    }
    if(cnt==n)cout<<"YES"<<' '<<last<<endl;
    else cout<<"NO"<<' '<<root<<endl;
    return x;
}
int main(){
    string a,b;
    cin>>n;
    if(!n){cout<<"YES";return 0;}
    set<int> cand;
    for(int i=0;i<n;i++)cand.insert(i);
    for(int i=0;i<n;i++){
        cin>>a>>b;
        if(a!="-"){
            t[i].left=stoi(a);
            if(cand.find(t[i].left)!=cand.end())cand.erase(t[i].left);
        }
        else t[i].left=-1;
        if(b!="-"){
            t[i].right=stoi(b);
            if(cand.find(t[i].right)!=cand.end())cand.erase(t[i].right);
        }
        else t[i].right=-1;
    }
    int root=*cand.begin();
    layerorder(root);
    return 0;
}
*/
