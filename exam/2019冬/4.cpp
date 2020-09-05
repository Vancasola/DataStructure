#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <vector>
#include <queue>
#include <cmath>
#include <map>
#include <stack>
#include <unordered_map>
#include <set>
#include <algorithm> 
using namespace std;
int t,n;
vector<int> v;
int in[35];
struct node{
	int x;
	node* lc,*rc;
	node(){
		lc=rc=NULL;
	}
	node(int d){
		x=d;
		lc=rc=NULL;
	}
};
node* create(int inl,int inr){
	if(inl>inr)return NULL;
	int m=99999999;
	int p=0;
	for(int i=inl;i<=inr;i++){
		if(in[i]<m){
			m=in[i];
			p=i;
		}
	}
	node* r=new node(in[p]);
	r->lc=create(inl,p-1);
	r->rc=create(p+1,inr);
	return r;
}
void layerorder(node* r){
	queue<node*>q;
	q.push(r);
	while(!q.empty()){
		r=q.front();
		v.push_back(r->x);
		q.pop();
		if(r->lc)q.push(r->lc);
		if(r->rc)q.push(r->rc);
	}
}
int main(){
	scanf("%d",&n);
	//fill(a,a+100,-1);
	for(int i=0;i<n;i++){
		scanf("%d",&in[i]);
		//v.push_back(t);
	}
	node*r =create(0,n-1);
	//inorder(0);
	layerorder(r);
	for(int i=0;i<n;i++){
		if(i<n-1)printf("%d ",v[i]);
		else printf("%d",v[i]);
	}
	return 0;
} 

