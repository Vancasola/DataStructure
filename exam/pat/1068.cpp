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
int n,m,t;
bool f=false;
vector<int> r,ans;
int v[10005];
void dfs(int x,int sum){
	if(f)return;
	// if(ans.size()&&ans[0]<r[0])return;
	if(sum==m){
			ans=r;
			f=true;
			return;
		}
	for(int i=x+1;i<n;i++){
		if(sum+v[i]<=m){
			r.push_back(v[i]);
			dfs(i,sum+v[i]);
			r.pop_back();
		}
		else return ;
	}
}
int main(){ 
	cin>>n>>m;
	int sum=0;
	for(int i=0;i<n;i++){
		scanf("%d",&v[i]);
		sum+=v[i];
	}
	if(sum<m){
		printf("No Solution");
		return 0;
	}
	sort(v,v+n);
	for(int i=0;i<n;i++){
		if(!f){
			r.push_back(v[i]);
			dfs(i,v[i]);
			r.pop_back();
		}
	}
	if(!ans.size()){
		printf("No Solution\n");
		return 0;
	}
	for(int i=0;i<ans.size();i++){
		if(i<ans.size()-1)printf("%d ",ans[i]);
		else printf("%d",ans[i]);
	}
	return 0; 
}

