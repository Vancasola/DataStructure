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
const int maxn=100005;
struct node
{
	int x,addr,next;
}a[maxn];
int main(){
	int h,n,k;
	int x,addr,next;
	cin>>h>>n>>k;
	for(int i=0;i<n;i++){
		scanf("%d %d %d",&addr,&x,&next);
		a[addr].addr=addr;
		a[addr].x=x;
		a[addr].next=next;
	}
	vector<node> v;
	for(int i=h;i!=-1;i=a[i].next){
		if(a[i].x<0)v.push_back(a[i]);
	}
	for(int i=h;i!=-1;i=a[i].next){
		if(a[i].x>=0&&a[i].x<=k)v.push_back(a[i]);
	}
	for(int i=h;i!=-1;i=a[i].next){
		if(a[i].x>k)v.push_back(a[i]);
	}
	for(int i=0;i<v.size()-1;i++){
		printf("%05d %d %05d\n",v[i].addr,v[i].x,v[i+1].addr);
	}
	if(v.size())printf("%05d %d -1",v.back().addr,v.back().x);
	return 0;
} 

