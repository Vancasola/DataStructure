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
struct node{
	int x;
	int addr,next;
}a[100005];
int main(){
	int x,addr,next,h,n,k;
	cin>>h>>n>>k;
	for(int i=0;i<n;i++){
		scanf("%d %d %d",&addr,&x,&next); 
		a[addr].addr=addr;
		a[addr].x=x;
		a[addr].next=next;
	}
	vector<node> v,r;
	node t;
	for(int i=h;i!=-1;i=a[i].next){
		v.push_back(a[i]);
	}
	int p=1;
	for(int i=v.size()/k*k;i<v.size();i++){
		r.push_back(v[i]);
	}
	for(int i=v.size()/k*k-k;i>=0;i-=k){
		for(int j=0;j<k;j++){
			r.push_back(v[i+j]);
		}
	}
	for(int i=0;i<r.size()-1;i++){
		printf("%05d %d %05d\n",r[i].addr,r[i].x,r[i+1].addr);
	}
	if(v.size())printf("%05d %d -1\n",r.back().addr,r.back().x);
	
	return 0;
} 

