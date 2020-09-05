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
using namespace std;//13:37 14:01
int n,k,p;
int Max=-1;
vector<int> v,r;
void dfs(int x,int sum,int layer,int cnt){
	//printf("%d-%d ",layer,sum);
	v.push_back(x);
	if(sum>n||layer>k)return;
	if(layer==k&&sum==n){
		//printf("size==%d",v.size());
		//for(int i=0;i<v.size();i++)
		//	printf("%d^%d ",v[i],p);
		if(cnt>Max){
			Max=cnt;
			r=v;
		}
		//printf("\n");
		//v.pop_back();
		return ;
	}
	for(int i=x;i>=1;i--){
		dfs(i,sum+pow(i,p),layer+1,cnt+i);
		v.pop_back();
	}
}
int main(){
	cin>>n>>k>>p;
	int i=pow(n,1.0/p)+1;
	for(;i>=1;i--){
		v.clear();
		dfs(i,pow(i,p),1,i);
	}
	if(!r.size()){
		printf("Impossible");
		return 0;
	}
	printf("%d =",n);
	for(int i=0;i<r.size();i++){
		if(i<r.size()-1)printf(" %d^%d +",r[i],p);
		else printf(" %d^%d",r[i],p);
	}
}
