#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <cstring>
#include <vector>
#include <cstring>
#include <cmath>
#include <queue>
#include <stack>
#include <unordered_map>
#include <set>
#include <algorithm> 
using namespace std;//14:49
int in[35],post[35];
int n;
struct node{
	int x;
	node* lc,*rc;
	node(){};
	node(int t){
		x=t;
		lc=rc=NULL;
	}
};
vector<int> v;
void layerorder(node* r){
	queue<node*> q;
	q.push(r);
	while(!q.empty()){
		r=q.front();
		v.push_back(r->x);
		q.pop();
		if(r->lc)q.push(r->lc);
		if(r->rc)q.push(r->rc);
	}
}
node* create (int inl,int inr,int postl,int postr){
	if(inl>inr)return NULL;
	node* r=new node(post[postr]);
	int n;
	for(int i=inl;i<=inr;i++)
		if(post[postr]==in[i])
		{
			n=i;
			break;
		}
	r->lc=create(inl,n-1,postl,postl+n-inl-1);
	r->rc=create(n+1,inr,postl+n-inl,postr-1);
	return r;
}
int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&post[i]);
	for(int i=0;i<n;i++)
		scanf("%d",&in[i]);
	node* r=create(0,n-1,0,n-1);
	layerorder(r);
	for(int i=0;i<n;i++){
		if(i)printf(" %d",v[i]);
		else printf("%d",v[i]);
	}
	return 0;
}

