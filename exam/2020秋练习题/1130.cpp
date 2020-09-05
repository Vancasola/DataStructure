#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <set>
using namespace std;
int n,r;
bool f=false;
set<int> s;
struct node{
	string x;
	int lc=-1,rc=-1;
}v[50];
void inorder(int r,bool f){
	if(r==-1) return;
	if(f&&(v[r].lc!=-1||v[r].rc!=-1)){
		printf("(");
	}
	if(v[r].lc!=-1)inorder(v[r].lc,true);
	cout<<v[r].x;
	if(v[r].rc!=-1)inorder(v[r].rc,true);
	if(f&&(v[r].lc!=-1||v[r].rc!=-1))printf(")");
}
int main(){
	string t;
	int a,b;
	cin>>n;
	for(int i=1;i<=n;i++)s.insert(i);
	for(int i=1;i<=n;i++){
		cin>>t;
		scanf("%d %d",&a,&b);
		v[i].x=t;
		v[i].lc=a;
		v[i].rc=b;
		if(a!=-1)s.erase(a);
		if(b!=-1)s.erase(b);
	}
	r=*s.begin();
	inorder(r,false);
	return 0;
}

