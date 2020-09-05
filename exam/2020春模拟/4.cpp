#include <iostream>
#include <cstdio>
#include <unordered_map>
#include <vector>
#include <stack>
#include <queue>
#include <cmath>
#include <algorithm>
using namespace std;
int n,m;
string src;
unordered_map<string,int> si;
unordered_map<int,string> is;
unordered_map<int,int> fun;
const int maxn=205,inf=999999999;
bool vis[maxn]={false};
int d[maxn],g[maxn][maxn];
vector<int> pre[maxn];
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
		if(u==-1)return ;
		vis[u]=true;
		for(int v=0;v<n;v++){
			if(!vis[v]&&g[u][v]!=inf){
				if(d[v]>d[u]+g[u][v]){
					d[v]=d[u]+g[u][v];
					pre[v].clear();
					pre[v].push_back(u);
				}
				else if(d[v]==d[u]+g[u][v]){
					pre[v].push_back(u);
				}
			}
		}
	}
}
vector<int> tmp,r;
int Max=-1,cnt=0;
void dfs(int x){
	if(!pre[x].size()){
		tmp.push_back(x);
		int sum=0;
		cnt++;
		for(int i=0;i<tmp.size();i++){
			sum+=fun[tmp[i]];
		}
		if(sum>Max){
			Max=sum;
			r=tmp;
			//cnt=1;
		}
		else if(sum==Max){
			if(tmp.size()<r.size())r=tmp;
			//cnt++; 
		}
		tmp.pop_back();
		return;
	}
	tmp.push_back(x);
	for(int i=0;i<pre[x].size();i++){
		dfs(pre[x][i]);
	}
	tmp.pop_back();
}
int main(){
	string t,a,b;
	int p=0,c;
	cin>>n>>m>>src;
	si[src]=p;
	is[p]=src;
	p++;
	for(int i=0;i<maxn;i++)fill(g[i],g[i]+maxn,inf);
	for(int i=0;i<n-1;i++){
		cin>>t>>c;
		if(si.find(t)==si.end()){
			si[t]=p;
			is[p]=t;
			p++;
		}
		fun[si[t]]=c;
	}
	//for(int i=0;i<n;i++)cout<<is[i]<<endl;
	int x,y;
	for(int i=0;i<m;i++){
		cin>>a>>b>>c;
		x=si[a];
		y=si[b];
		g[x][y]=g[y][x]=c;
		}
	dijstra(si[src]);
	dfs(si["ROM"]);
	int cost=0;
	for(int i=r.size()-2;i>=0;i--)cost+=g[r[i]][r[i+1]]; 
	printf("%d %d %d %d\n",cnt,cost,Max,Max/(r.size()-1));
	for(int i=r.size()-1;i>=0;i--){
		if(i)printf("%s->",is[r[i]].c_str());
		else printf("%s",is[r[i]].c_str());
	}
	return 0;
}

