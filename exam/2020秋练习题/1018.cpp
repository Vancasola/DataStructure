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
const int maxn=505,inf=999999999;
int t,n,m,c,src,dst;
int g[maxn][maxn];
bool vis[maxn];
int d[maxn];
vector<int> pre[maxn],s(maxn);
void dijstra(int src){
	fill(vis,vis+maxn,false);
	fill(d,d+maxn,inf);
	d[src]=0;
	for(int i=0;i<=n;i++){
		int u=-1,Min=inf;
		for(int j=0;j<=n;j++){
			if(!vis[j]&&d[j]<Min){
				Min=d[j];
				u=j;
			}
		}
		if(u==-1)return;
		vis[u]=true;
		for(int v=0;v<=n;v++){
			if(!vis[v]&&g[u][v]!=inf){
				if(d[u]+g[u][v]<d[v]){
					d[v]=d[u]+g[u][v];
					pre[v].clear();
					pre[v].push_back(u);
				}
				else if(d[u]+g[u][v]==d[v]){
					pre[v].push_back(u);
				}
			}
		}
	}
}
vector<int> tmp,res;
int Take=inf,Back=inf;
void dfs(int x){
	if(x==src){
		int take=0,back=0;
		for(int i=tmp.size()-1;i>=0;i--){
			if(s[tmp[i]]>=c/2){
				back+=s[tmp[i]]-c/2;
			}
			else{
				int r=c/2-s[tmp[i]];
				if(back>=r){
					back-=r;
				}
				else{
					take+=r-back;
					back=0;
				}
			}
		}
		if(take<Take){
			Take=take;
			Back=back;
			res=tmp;
		}
		else if(take==Take&&back<Back){
			Back=back;
			res=tmp;
		}
		return;
	}
	tmp.push_back(x);
	for(int i=0;i<pre[x].size();i++){
		dfs(pre[x][i]);
	}
	tmp.pop_back();
}
int main(){
	for(int i=0;i<maxn;i++)fill(g[i],g[i]+maxn,inf);
	cin>>c>>n>>dst>>m;
	int a,b,t;
	for(int i=1;i<=n;i++)
		scanf("%d",&s[i]);
	for(int i=0;i<m;i++){
		scanf("%d %d %d",&a,&b,&t);
		g[a][b]=g[b][a]=t;
	}
	src=0;
	dijstra(src);
	dfs(dst);
	printf("%d 0->",Take);
	for(int i=res.size()-1;i>=0;i--)
		if(i)printf("%d->",res[i]);
		else printf("%d ",res[i]);
	printf("%d",Back);
	return 0;
}


