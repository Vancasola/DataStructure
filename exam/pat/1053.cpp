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
	int w;
	vector<int> v;
}v[105];
vector<int> r;
vector<vector<int>> res;
int n,m,k,s;
void dfs(int x,int sum){
	r.push_back(v[x].w);
	if(!v[x].v.size()&&sum==k){
		res.push_back(r);
		return;
	}
	for(int i=0;i<v[x].v.size();i++){
		int a=v[x].v[i];
		dfs(a,sum+v[a].w);
		r.pop_back();
	}
}
bool cmp(const vector<int> &a,const vector<int> &b)
{
	int len=min(a.size(),b.size());
	for(int i=0;i<len;i++){
		if(a[i]==b[i])continue;
		return a[i]>b[i];
	}
	return a[0]>b[0];
 } 
int main(){
	int id,w,t;
	cin>>n>>m>>k;
	for(int i=0;i<n;i++){
		scanf("%d",&w);
		v[i].w=w;
	}
	for(int i=0;i<m;i++){
		scanf("%d %d",&id,&s);
		for(int j=0;j<s;j++){
			scanf("%d",&t);
			v[id].v.push_back(t);
		}
	}
	dfs(0,v[0].w);
	sort(res.begin(),res.end(),cmp);
	for(int i=0;i<res.size();i++){
		for(int j=0;j<res[i].size();j++){
			if(j<res[i].size()-1)printf("%d ",res[i][j]);
			else printf("%d\n",res[i][j]);
		}
	}
}

