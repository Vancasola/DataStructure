#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <vector>
#include <cstring>
#include <cmath>
#include <queue>
#include <stack>
#include <unordered_map>
#include <set>
#include <algorithm>
#include <iostream>
using namespace std;
int n;
struct node{
	int x;
	node*lc=NULL,*rc=NULL;
	int h,f;
	node(int d){x=d;h=f=0;}
	node(){}
};
int getheight(node* r){
	if(r==NULL)return 0;
	return max(getheight(r->lc),getheight(r->rc))+1;
}
void update(node*&r){
	r->h=getheight(r);
	r->f=getheight(r->lc)-getheight(r->rc);
}
void R(node*&r){
	node* t=r->lc;
	r->lc=t->rc;
	t->rc=r;
	update(r);
	update(t);
	r=t;
}
void L(node*&r){
	node* t=r->rc;
	r->rc=t->lc;
	t->lc=r;
	update(r);
	update(t);
	r=t;
}
void insert(node*&r,int t){
	if(r==NULL)
	{
		r=new node(t);
		return;
	}
	if(t<r->x){
		insert(r->lc,t);
		update(r->lc);
		update(r);
		if(r->f==2){
			if(r->lc->f==1){
				R(r);
			}
			else if(r->lc->f==-1){
				L(r->lc);
				R(r);
			}
		}
	}
	else if(t>r->x){
		insert(r->rc,t);
		update(r->rc);
		update(r);
		if(r->f==-2){
			if(r->rc->f==-1){
				L(r);
			}
			else if(r->rc->f==1){
				R(r->rc);
				L(r);
			}
		}
	}
}
vector<int> v;
bool flag=true;
void layerorder(node* r){
	queue<node*> q;
	q.push(r);
	bool f=false;
	while(q.size()){
		r=q.front();
		v.push_back(r->x);
		q.pop();
		if(f&&(r->lc!=NULL||r->rc!=NULL))flag=false;
		else if(r->lc==NULL&&r->rc!=NULL)flag=false;
		else if(r->lc==NULL||r->rc==NULL)f=true;
		if(r->lc!=NULL)q.push(r->lc);
		if(r->rc!=NULL)q.push(r->rc);
	}
}
int main() {
    int t;
    node* r=NULL;
    cin>>n;
    for(int i=0;i<n;i++){
    	scanf("%d",&t);
    	insert(r,t);
	}
	layerorder(r);
	for(int i=0;i<v.size();i++)
		if(i)printf(" %d",v[i]);
		else printf("%d",v[i]);
    printf("\n");
    if(flag)printf("YES");
    else printf("NO");	
	return 0;
}

