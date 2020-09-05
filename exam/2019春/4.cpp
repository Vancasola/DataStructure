#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <vector>
#include <cstring>
#include <cmath>
#include <map>
#include <stack>
#include <queue>
#include <unordered_map>
#include <set>
#include <algorithm> 
using namespace std;
const int maxn=30;
int n;
int in[maxn],post[maxn];
struct node{
	int x;
	node*lc,*rc;
	node(int d){
		x=d;
		lc=rc=NULL;
	}
	node(){
	}
};
node* create(int inl,int inr,int postl,int postr){
	if(inl>inr)return NULL;
	node* r=new node(post[postr]);
	int p=0;
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
int a,b;
bool f;
void preorder(node* r){
	if(f)return;
	if(r->lc&&r->rc){
		if(r->lc->x==a&&r->rc->x==b){
			f=true;
			return;
		}
		if(r->lc->x==b&&r->rc->x==a){
			f=true;
			return;
		}
	}
	if(r->lc)preorder(r->lc);
	if(r->rc)preorder(r->rc);
}
void parent(node* r){
	if(f)return;
	if(r->lc){
		if(r->x==a&r->lc->x==b){
			f=true;
			return;
		}
		
		parent(r->lc);
	}
	if(r->rc){
		if(r->x==a&r->rc->x==b){
			f=true;
			return;
		}
		parent(r->rc);
	}
}
void getnum(string&s){
	string t;
	int cnt=0;
			for(int i=0;i<s.size();i++){
				if(s[i]>='0'&&s[i]<='9')t+=s[i];
				else if(t.size()) {
					if(!cnt){
						a=stoi(t);
						cnt=1; 
					} 
					else if(cnt){
						b=stoi(t);
						break;
					}
					t.clear();
				}
			}
			if(t.size())b=stoi(t);
}
void left(node* r){
	if(f)return;
	if(r->lc){
		if(r->lc->x==a&&r->x==b){
			f=true;
			return;
		}
	}
	if(r->lc)left(r->lc);
	if(r->rc)left(r->rc);
}
void right(node* r){
	if(f)return;
	if(r->rc){
		if(r->rc->x==a&&r->x==b){
			f=true;
			return;
		}
	}
	if(r->lc)right(r->lc);
	if(r->rc)right(r->rc);
}
void full(node* r){
	if(f)return;
	if(r->rc==NULL&&r->lc){
		f=true;
		return;
	}
	if(r->lc==NULL&&r->rc){
		f=true;
		return;
	}
	if(r->lc)full(r->lc);
	if(r->rc)full(r->rc);
}
void layerorder(node* r){
	queue<node*> q,p;
	q.push(r);
	while(!q.empty()){
		p=q;
		bool fa=false,fb=false;
		while(!q.empty()){
			if(q.front()->x==a)fa=true;
			if(q.front()->x==b)fb=true;
			q.pop();
		}
		if(fa&&fb){
			f=true;
			return;
		}
		while(!p.empty()){
			r=p.front();
			p.pop();
			if(r->lc)q.push(r->lc);
			if(r->rc)q.push(r->rc);
		} 
	}
}
int main(){
	cin>>n;
	for(int i=0;i<n;i++)scanf("%d",&post[i]);
	for(int i=0;i<n;i++)scanf("%d",&in[i]);
	node* r=create(0,n-1,0,n-1);
	int m;
	cin>>m;
	getchar();
	string s;
	//pr(r);
	for(int i=0;i<m;i++){
		getline(cin,s);
		if(s.back()=='t'){
			string t;
			int x;
			f=false;
			for(int i=0;i<s.size();i++){
				if(s[i]>='0'&&s[i]<='9')t+=s[i];
				else break;
			}
			x=stoi(t);
			if(r->x==x)printf("Yes");
			else printf("No");
		}
		else if(s.back()=='s'){
			//printf("s");
			f=false;
			getnum(s);
			preorder(r);
			if(f)printf("Yes");
			else printf("No");
		}
		else if(s.back()=='l'){
			//printf("l");
			getnum(s);
			f=false;
			layerorder(r);
			if(f)printf("Yes");
			else printf("No");
		}
		else if(s.back()=='e'){
			//printf("e");
			f=false;
			full(r);
			if(!f)printf("Yes");
			else printf("No");
		}
		else if(find(s.begin(),s.end(),'p')!=s.end()){
			//printf("p");
			getnum(s);
			f=false;
			parent(r);
			if(f)printf("Yes");
			else printf("No");
		}
		else if(find(s.begin(),s.end(),'g')!=s.end()){
			//printf("right");
			f=false;
			getnum(s);
			right(r);
			if(f)printf("Yes");
			else printf("No");
		}
		else{
			//printf("left");
			f=false;
			getnum(s);
			left(r);
			if(f)printf("Yes");
			else printf("No");
		}
		printf("\n");
	}
	return 0; 
}

