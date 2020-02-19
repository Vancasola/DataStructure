//
//  A1086.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/19.
//  Copyright © 2020 none. All rights reserved.
//  5:22 5:29 5:35 6:00
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;
struct node{
    int x;
    node* lc,*rc;
    int f=0;
    node(int d){
        x=d;
        lc=rc=NULL;
        f=0;
    }
};
vector<int> v;
void postorder(node* r){
    if(r->lc!=NULL)postorder(r->lc);
    if(r->rc!=NULL)postorder(r->rc);
    v.push_back(r->x);
}
int main(){
    int n,t;
    node* root=NULL;
    stack<node*> s;
    string f;
    cin>>n;
    for(int i=0;i<2*n;i++){
        cin>>f;
        while(!s.empty()&& s.top()->f==2)s.pop();
        //if(!s.empty())printf("%d",s.top()->x);
        if(f=="Push"){
            scanf("%d",&t);
            if(s.empty()){
                node* r= new node(t);
                root=r;
                s.push(r);
                continue;
            }
            else if(s.top()->f==0){
                s.top()->lc=new node(t);
                s.top()->f=1;
                s.push(s.top()->lc);
            }
            else {
                s.top()->f++;
                s.top()->rc=new node(t);
                s.push(s.top()->rc);
            }
        }
        else{
            if(!s.top()->f)s.top()->f++;
            else s.pop();
        }
    }
    postorder(root);
    for(int i=0;i<v.size();i++){
        if(i<v.size()-1)printf("%d ",v[i]);
        else printf("%d",v[i]);
    }
    return 0;
}
*/
