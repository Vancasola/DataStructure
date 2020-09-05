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
using namespace std;//14:18
struct node{
	int x;
	int h,f;
	node*lc,*rc;
	node(int d){
		x=d;
		lc=rc=NULL;
		h=0;
	}
};
int getheight(node* r){
	if(r==NULL)return 0;
	return max(getheight(r->lc),getheight(r->rc))+1;
}
void update(node*&r){
	r->h=getheight(r);
}
int getfactor(node* r){
	return getheight(r->lc)-getheight(r->rc);
}
void L(node*&r){
	node*t=r->rc;
	r->rc=t->lc;
	t->lc=r;
	update(t->lc);
	r=t;
	update(r);
}
void R(node*&r){
	node*t=r->lc;
	r->lc=t->rc;
	t->rc=r;
	update(t->rc);
	r=t;
	update(r);
}
void insertdebug(node*&r,int x){
	if(r==NULL){
		r=new node(x);
		return;
	}
	if(x<r->x)
		insertdebug(r->lc,x);
	else if(x>=r->x)
		insertdebug(r->rc,x);
	update(r);
}
void insert(node*&r,int x){
	if(r==NULL){
		r=new node(x);
		return;
	}
	if(x<r->x){
		insert(r->lc,x);
		update(r);
		int f1=getfactor(r);
		if(f1==2){
			int f2=getfactor(r->lc);
			if(f2==1){
				R(r);
			}
			else if(f2==-1){
				L(r->lc);
				R(r);
			}
		}
	}
	else if(x>=r->x)
	{
		insert(r->rc,x);
		update(r);
		int f1=getfactor(r);
		if(f1==-2){
			int f2=getfactor(r->rc);
			if(f2==-1){
				L(r);
			}
			else if(f2==1){
				R(r->rc);
				L(r);
			}
		}
	} 
}
vector<int> v;
bool f=true;
void layerorder(node* r){
	queue<node*> q;
	q.push(r);
	bool vis=false;
	while(!q.empty()){
		r=q.front();
		v.push_back(r->x);
		q.pop();
		if(r->lc==NULL&&r->rc)f=false;
		else if(!vis && (r->lc==NULL||r->rc==NULL))
			vis=true;
		else if(vis && (r->lc||r->rc))
			f=false;
		if(r->lc)q.push(r->lc);
		if(r->rc)q.push(r->rc);
	}
}
int main(){
	int n,t;
	node* r=NULL;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&t);
		insert(r,t);
	}
	layerorder(r);
	for(int i=0;i<n;i++){
		if(i<n-1)printf("%d ",v[i]);
		else printf("%d\n",v[i]);
	}
	if(f)printf("YES");
	else printf("NO");
	return 0;
}


