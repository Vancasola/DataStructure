#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <vector>
#include <queue>
#include <cmath>
#include <map>
#include <stack>
#include <unordered_map>
#include <set>
#include <algorithm> 
using namespace std;
const int maxn=505,inf=99999999;
int n,m,dis,t,src,dst;
bool one_way;
int g[maxn][maxn],h[maxn][maxn],d[maxn];
bool vis[maxn];
vector<int> pre[maxn],pre1[maxn];
void dijstra(int src){
	fill(vis,vis+maxn,false);
	fill(d,d+maxn,inf);
	d[src]=0;
	for(int i=0;i<n;i++){
		int u=-1,Min=inf;
		for(int j=0;j<n;j++){
			if(!vis[j]&&d[j]<Min){
				Min=d[j];
				u=j;
			}
		}
		if(u==-1)return;
		vis[u]=true;
		for(int v=0;v<n;v++){
			if(!vis[v]&&g[u][v]!=inf){
				if(d[v]>d[u]+g[u][v]){
					d[v]=d[u]+g[u][v];
					pre[v].clear();
					pre[v].push_back(u);
				}
				else if(d[v]==d[u]+g[u][v])
				{
					pre[v].push_back(u);
				}
			}
		}
	}
	return ;
}
void dijstra2(int src){
	fill(vis,vis+maxn,false);
	fill(d,d+maxn,inf);
	d[src]=0;
	for(int i=0;i<n;i++){
		int u=-1,Min=inf;
		for(int j=0;j<n;j++){
			if(!vis[j]&&d[j]<Min){
				Min=d[j];
				u=j;
			}
		}
		if(u==-1)return;
		vis[u]=true;
		for(int v=0;v<n;v++){
			if(!vis[v]&&h[u][v]!=inf){
				if(d[v]>d[u]+h[u][v]){
					d[v]=d[u]+h[u][v];
					pre1[v].clear();
					pre1[v].push_back(u);
				}
				else if(d[v]==d[u]+h[u][v])
				{
					pre1[v].push_back(u);
				}
			}
		}
	}
	return ;
}
vector<int> v,ansd;
int Min=inf;
void dfs(int x){
	if(x==src){
		v.push_back(x);
		int sum=0;
		for(int i=v.size()-1;i>=1;i--){
			sum+=h[v[i]][v[i-1]];
			//cout<<sum<<endl;
		}
		if(sum<Min){
			Min=sum;
			ansd=v;
		}
		v.pop_back();
		return;
	}
	v.push_back(x);
	for(int i=0;i<pre[x].size();i++){
		dfs(pre[x][i]);
		//cout<<"size"<<pre[x].size()<<endl;
	}
	v.pop_back();
}
vector<int> ansf;
void dfs2(int x){
	if(x==src){
		v.push_back(x);
		if(v.size()<Min){
			Min=v.size();
			ansf=v;
		}
		v.pop_back();
		return;
	}
	v.push_back(x);
	for(int i=0;i<pre1[x].size();i++){
		dfs2(pre1[x][i]);
		//cout<<"size"<<pre[x].size()<<endl;
	}
	v.pop_back();
}
int main(){
	cin>>n>>m;
	for(int i=0;i<maxn;i++)fill(g[i],g[i]+maxn,inf);
	for(int i=0;i<maxn;i++)fill(h[i],h[i]+maxn,inf);
	int a,b;
	for(int i=0;i<m;i++){
		scanf("%d %d %d %d %d",&a,&b,&one_way,&dis,&t);
		if(one_way){
			g[a][b]=dis;
			h[a][b]=t;
		}
		else{
			g[a][b]=g[b][a]=dis;
			h[a][b]=h[b][a]=t;
		}
	}
	cin>>src>>dst;
	dijstra(src);
	dfs(dst);
	int dis=0;
	v.clear();
	dijstra2(src);
	Min=inf;
	dfs2(dst);
	bool f=false;
	if(ansd.size()!=ansf.size())f=true;
	else 
		for(int i=0;i<ansf.size();i++)
			if(ansf[i]!=ansd[i]){
				f=true;
				break;
			}
	for(int i=ansd.size()-1;i>=1;i--)dis+=g[ansd[i]][ansd[i-1]];
	if(f){
		printf("Distance = %d: %d",dis,ansd.back());
		for(int i=ansd.size()-2;i>=0;i--)printf(" -> %d",ansd[i]);
		cout<<endl;
	}
	else 
		printf("Distance = %d; ",dis);
	int t=0;
	for(int i=ansf.size()-1;i>=1;i--)t+=h[ansf[i]][ansf[i-1]];
	printf("Time = %d: %d",t,ansf.back());
	for(int i=ansf.size()-2;i>=0;i--)printf(" -> %d",ansf[i]);
	return 0; 
}

