#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <vector>
#include <cstring>
#include <cmath>
#include <map>
#include <unordered_map>
#include <set>
#include <algorithm> 
using namespace std;
const int inf=99999999,maxn=1005;
int g[maxn][maxn];
int d[maxn],n,e,k;
bool vis[maxn]={false};
bool dijstra(vector<int>& v){
	fill(d,d+maxn,inf);
	fill(vis,vis+maxn,false);
	d[v[0]]=0;
	int p=0;
	for(int i=0;i<n;i++){
		int Min=inf,u=-1;
		set<int> s;
		for(int j=1;j<=n;j++){
			if(d[j]<Min&&!vis[j]){
				u=j;
				Min=d[j];
				s.clear();
				s.insert(j);
			}
			else if(d[j]==Min&&d[j]!=inf&&!vis[j]){
				s.insert(j);
			}
		}
		//printf("u==%d %d\n",u,s.size());
		//for(set<int>::iterator it=s.begin();it!=s.end();it++)printf("%d ",*it);
		//printf("\n%d %d\n",u,v[p]);
		if(s.find(v[p])==s.end()){
			return false;
		}
		if(u==-1)return true;
		u=v[p];
		p++;
		vis[u]=true;
		for(int v=1;v<=n;v++){
			if(!vis[v]&&g[u][v]!=inf&&d[v]>d[u]+g[u][v]){
				d[v]=d[u]+g[u][v];
			}
		}
	}

}
int main(){
	cin>>n>>e;
	int a,b,c;
	for(int i=0;i<maxn;i++)fill(g[i],g[i]+maxn,inf);
	for(int i=0;i<e;i++){
		scanf("%d %d %d",&a,&b,&c);
		g[a][b]=c;
		g[b][a]=c;
	}
	cin>>k;
	vector<int> v;
	int t;
	for(int i=0;i<k;i++){
		v.clear();
		for(int j=0;j<n;j++){
			scanf("%d",&t);
			v.push_back(t);
		}
		if(dijstra(v))printf("Yes\n");
		else printf("No\n");
	}
	return 0;
} 
