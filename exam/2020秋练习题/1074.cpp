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
using namespace std;
struct node{
	int x,addr,next;
}a[100005];
int main(){
	int h,x,n,k,addr,next;
	vector<node>v;
	cin>>h>>n>>k;
	for(int i=0;i<n;i++){
		scanf("%d %d %d",&addr,&x,&next);
		a[addr].addr=addr;
		a[addr].x=x;
		a[addr].next=next;
	}
	for(int i=h;i!=-1;i=a[i].next){
		v.push_back(a[i]);
	}
	for(int i=0;i<v.size()/k*k;i+=k){
		reverse(v.begin()+i,v.begin()+i+k);
	}
	for(int i=0;i<v.size()-1;i++){
		printf("%05d %d %05d\n",v[i].addr,v[i].x,v[i+1].addr);
	}
	printf("%05d %d -1\n",v[v.size()-1].addr,v[v.size()-1].x);
	return 0;
}

