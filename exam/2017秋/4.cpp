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
pair<bool,int> v[35];
int n,m,t;
struct node{
	int x;
	bool sign=false;
	node*lc,*rc;
	node(int d,bool f){
		x=d;
		sign=f;
		lc=rc=NULL;
	}
	node(){lc=rc=NULL;
	}
};
node* insert(node*&r,int x,bool sign){
	if(r==NULL){
		r=new node(x,sign);
		return r;
	}
	if(x<=r->x)insert(r->lc,x,sign);
	if(x>r->x)insert(r->rc,x,sign);
}
bool f=true;
int value=-1;
void getnum(node* r,int sum){
	if(!f)return;
	if(r==NULL){
		//printf("%d\n",sum);
		if(value==-1)value=sum;
		else if(value!=sum)f=false;
		return ;
	}
	if(!r->sign)sum++;
	getnum(r->lc,sum);
	getnum(r->rc,sum);
}
void preorder(node* r,int sum){
	if(!f)return;
	if(r->sign){
		if(r->lc&&r->lc->sign)f=false;
		if(r->rc&&r->rc->sign)f=false;
	}
	value=-1;
	getnum(r,0);
	
	if(r->lc)preorder(r->lc,sum);
	if(r->rc)preorder(r->rc,sum);
}
int main(){
	cin>>n;
	bool sign;
	for(int i=0;i<n;i++){
		scanf("%d",&m);
		node *r=NULL;
		f=true;
		value=-1;
		for(int j=0;j<m;j++){
			scanf("%d",&t);
			sign=false;
			if(t<0)sign=true;
			insert(r,abs(t),sign);
		}
		if(r->sign)f=false;
		if(f)preorder(r,0);
		if(f)printf("Yes\n");
		else printf("No\n");
	}
	return 0;
}


