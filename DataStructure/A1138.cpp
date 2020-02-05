//
//  A1138.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/1.
//  Copyright © 2020 none. All rights reserved.
//  8:23
/*
#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;
int n,pre[50100],in[50100];
bool f=false;
struct node{
    int x;
    node* lc,*rc;
    node(){
        lc=rc=NULL;
    }
};
void create(int prel,int prer,int inl,int inr){
    if(f)return;
    if(prel>prer)return ;
    int u=-1;
    for(int i=inl;i<=inr;i++){
        if(in[i]==pre[prel]){
            u=i;
            break;
        }
    }
    create(prel+1,prel+u-inl,inl,u-1);
    create(prel+u-inl+1,prer,u+1,inr);
    if(!f){
        printf("%d",pre[prel]);
        f=true;
        return;
    }
    return ;
}
int main(){
    cin>>n;
    node* root;
    for(int i=0;i<n;i++)scanf("%d",&pre[i]);
    for(int i=0;i<n;i++)scanf("%d",&in[i]);
    create( 0, n-1, 0, n-1);
    return 0;
}
*/
