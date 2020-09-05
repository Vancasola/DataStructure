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
#include <queue>
#include <algorithm> 
using namespace std;
int n,m,k,t;
vector<int> v[1005];
int bfs(int x){
	queue<int> q,p;
	q.push(x);
	int sum=0,level=0;
	bool vis[1005]={false};
	vis[x]=true;
	while(!q.empty()&&level<=k){
		p=q;
		sum+=q.size();
		level++;
		while(q.size())q.pop();
		while(p.size())
		{
			x=p.front();
			p.pop();
			for(int i=0;i<v[x].size();i++){
				if(!vis[v[x][i]])q.push(v[x][i]);
				vis[v[x][i]]=true;
			}
		}
	}
	return sum;
}
int main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		scanf("%d",&m);
		for(int j=0;j<m;j++){
			scanf("%d",&t);
			v[t].push_back(i);
		}
	}
	cin>>m;
	for(int i=0;i<m;i++){
		scanf("%d",&t);
		cout<<bfs(t)<<endl;
	}
	return 0;
}

