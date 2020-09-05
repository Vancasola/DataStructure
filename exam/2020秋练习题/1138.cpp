//
//  A1151.cpp
//  DataStructure
//
//  Created by vancasola on 2020/3/13.
//  Copyright ? 2020 none. All rights reserved.
//  11:16

#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <unordered_map>
#include <iostream>
#include <set>
using namespace std;
int pre[50005],in[50005],n;
struct node{
	int x;
	node*lc=NULL,*rc=NULL;
	node(){}
};
node* create(int prel,int prer,int inl,int inr){
	if(prel>prer)return NULL;
	node* r= new node();
	r->x=pre[prel];
	int k;
	for(k=inl;k<=inr;k++)
		if(in[k]==pre[prel])break;
	r->lc=create(prel+1,prel+k-inl,inl,k-1);
	r->rc=create(prel+k-inl+1,prer,k+1,inr);
	return r;
}
bool f=false;
void postorder(node* r){
	if(r==NULL||f)return;
	postorder(r->lc);
	postorder(r->rc);
	if(!f)cout<<r->x;
	f=true;
	return;
}
int main(){
	cin>>n;
	for(int i=0;i<n;i++)scanf("%d",&pre[i]);
	for(int i=0;i<n;i++)scanf("%d",&in[i]);
	node* r=create(0,n-1,0,n-1);
	postorder(r);
}

