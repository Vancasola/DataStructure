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
int a[2500];
int p=0;
void dfs(int x,vector<int>v){
	v.push_back(a[x]);
	if(a[2*x+1]==-1&&a[2*x+2]==-1){
		for(int i=0;i<v.size()-1;i++)
		{
			if(!p){
				if(v[i]>v[i+1])p=1;
				else if(v[i]<v[i+1])p=-1;
			}
			else{
				if(v[i]>v[i+1]&&p==-1)p=3;
				else if(v[i]<v[i+1]&&p==1)p=3;
			}
			printf("%d ",v[i]);
		}
		if(v.size()>1)printf("%d\n",v.back());
		v.pop_back();
		return; 
	}
	if(a[2*x+2]!=-1)dfs(2*x+2,v);
	if(a[2*x+1]!=-1)dfs(2*x+1,v);
}
int main(){
	int n;
	fill(a,a+2500,-1);
	cin>>n;
	for(int i=0;i<n;i++)scanf("%d",&a[i]);
	vector<int>v;
	dfs(0,v);
	if(p==1)printf("Max Heap\n");
	else if(p==-1)printf("Min Heap\n");
	else printf("Not Heap\n");
	return 0; 
}




