//
//  A1086.cpp
//  DataStructure
//
//  Created by vancasola on 2020/1/29.
//  Copyright © 2020 none. All rights reserved.
//  11:52 12:32
/*
#include <stdio.h>
#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;
vector<int> v;
struct node{
    int k;
    int  left,right;
    bool f;
}a[105];
void postorder(int r){
    if(a[r].left!=-1)postorder(a[r].left);
    if(a[r].right!=-1)postorder(a[r].right);
    v.push_back(r);
}
int main(){
    int n,t;
    int r;
    cin>>n;
    stack<int> s;
    string str;
    cin>>str;
    cin>>r;
    a[r].k=r;
    a[r].f=false;
    a[r].left=a[r].right=-1;
    s.push(r);
    for(int i=1;i<2*n;i++){
        cin>>str;
        if(str=="Push"){
            int x;
            cin>>x;
            a[x].k=x;
            a[x].f=false;
            a[x].left=-1;
            a[x].right=-1;
            if(!a[s.top()].f)a[s.top()].left=x;
            else a[s.top()].right=x;
            s.push(x);
        }
        else{
            while(a[s.top()].f)s.pop();
            if(!a[s.top()].f){
                a[s.top()].f=true;
            }
        }
    }
    postorder(r);
    for(int i=0;i<v.size()-1;i++){
        printf("%d ",v[i]);
    }
    printf("%d",v[v.size()-1]);
    return 0;
}
*/
