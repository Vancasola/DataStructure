	#include <iostream>
	#include <cstdio>
	#include <cstdlib>
	#include <string>
	#include <vector>
	#include <cstring>
	#include <cmath>
	#include <stack>
	#include <queue>
	#include <unordered_map>
	#include <set>
	#include <algorithm> 
	using namespace std;
	int n,in[30],post[30];
	struct node{
		int x;
		node*lc,*rc;
		node(){
			lc=rc=NULL;
		}
		node(int d){
			x=d;
			lc=rc=NULL;
		}
	};
	node* create(int inl,int inr,int postl,int postr){
		if(inl>inr)return NULL;
		node* r= new node(post[postr]);
		int p;
		for(int i=inl;i<=inr;i++){
			if(in[i]==post[postr])
			{
				p=i;
				break;
				}
		}
		r->lc=create(inl,p-1,postl,postl+p-inl-1);
		r->rc=create(p+1,inr,postl+p-inl,postr-1);
		return r;
	}
	vector<int> v;
	void layerorder(node* r){
		stack<node*> q;
		queue<node*> p;
		q.push(r);
		int cnt=0;
		while(!q.empty()){
			while(!q.empty()){
				p.push(q.top());
				q.pop();
			}
			while(!p.empty()){
				r=p.front();
				v.push_back(r->x);
				p.pop();
				if(cnt%2){
					if(r->lc)q.push(r->lc);
					if(r->rc)q.push(r->rc);		
				}
				else{
					if(r->rc)q.push(r->rc);
					if(r->lc)q.push(r->lc);		
				}
			}
			cnt++;
		} 
	}
	int main(){
		cin>>n;
		for(int i=0;i<n;i++){
			scanf("%d",&in[i]);
		}
		for(int i=0;i<n;i++){
			scanf("%d",&post[i]);
		}
		node* r=create(0,n-1,0,n-1);
		layerorder(r);
		for(int i=0;i<v.size();i++){
			if(i)printf(" %d",v[i]);
			else printf("%d",v[i]);
		}
		return 0;
	}

