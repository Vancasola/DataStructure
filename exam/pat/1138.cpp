#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <vector>
#include <cstring>
#include <cmath>
#include <map>
#include <stack>
#include <unordered_map>
#include <set>
#include <algorithm> 
using namespace std;//15:06
int n,in[50005],pre[50005];
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
node* create(int inl,int inr,int prel,int prer){
	if(prel>prer)return NULL;
	node* r= new node(pre[prel]);
	if(prel==prer)return r;
	int p=0;
	for(int i=inl;i<=inr;i++){
		if(in[i]==pre[prel]){
			p=i;
			break;
		}
	}
	r->lc=create(inl,p-1,prel+1,prel+p-inl);
	r->rc=create(p+1,inr,prel+p-inl+1,prer);
	return r;
}
bool f=false;
void postorder(node* r){
	if(f)return;
	if(r==NULL)return;
	if(r->lc)postorder(r->lc);
	if(f)return;
	if(r->rc)postorder(r->rc);
	if(!f)printf("%d",r->x);
	f=true;
	return ;
}
int main(){
	cin>>n;
	for(int i=0;i<n;i++)scanf("%d",&pre[i]);
	for(int i=0;i<n;i++)scanf("%d",&in[i]);
	node* r=create(0,n-1,0,n-1);
	postorder(r);
	
}

