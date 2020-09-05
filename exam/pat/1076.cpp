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
using namespace std;//14:18
int n,m,k;
vector<int> v[1005];
int layer=0;
bool vis[1005]={false};
int bfs(int x){
	queue<int> q,p;
	q.push(x);
	fill(vis,vis+1005,false);
	vis[x]=true;
	layer=0;
	int sum=0;
	while(!q.empty()){
		p=q;
		if(layer>=k)break;
		while(!q.empty())q.pop();
		while(!p.empty()){
			x=p.front();
			p.pop();
			for(int i=0;i<v[x].size();i++){
				if(!vis[v[x][i]]){
					q.push(v[x][i]);
					vis[v[x][i]]=true;
					sum++; 
				}
			}
		}
		layer++;
	}
	return sum;
}
int main(){
	cin>>n>>k;
	int t;
	for(int i=1;i<=n;i++){
		scanf("%d",&m);
		for(int j=1;j<=m;j++){
			scanf("%d",&t);
			v[t].push_back(i);
		} 
	}
	
	cin>>m;
	for(int j=0;j<m;j++){
	    scanf("%d",&t);	
		cout<<bfs(t)<<endl;
	}
	return 0; 
}
