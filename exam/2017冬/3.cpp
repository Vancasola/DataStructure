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
using namespace std;
int n;
int in[50005],pre[50005];
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
node* create(int prel,int prer,int inl,int inr){
	if(prel>prer){
		return NULL;
	}
	node* r=new node(pre[prel]);
	if(prel==prer)return r;
	int p=0;
	for(int i=inl;i<=inr;i++){
		if(in[i]==pre[prel]){
			p=i;
			break;
		}
	}
	r->lc=create(prel+1,prel+p-inl,inl,p-1);
	r->rc=create(prel+p-inl+1,prer,p+1,inr);
//7
//1 2 3 4 5 6 7
//2 3 1 5 4 7 6
	return r;
}
bool f=false;
void postorder(node* r){
	if(f)return;
	if(r->lc)postorder(r->lc);
	if(f)return;
	if(r->rc)postorder(r->rc);
	if(!f)printf("%d",r->x);
	f=true;
	return;
}
int main(){
	cin>>n;
	for(int i=0;i<n;i++)scanf("%d",&pre[i]);
	for(int i=0;i<n;i++)scanf("%d",&in[i]);
	node* r=create(0,n-1,0,n-1);
	postorder(r);
	return 0; 
}

