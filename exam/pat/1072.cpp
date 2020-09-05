#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <cstring>
#include <vector>
#include <cstring>
#include <cmath>
#include <map>
#include <stack>
#include <unordered_map>
#include <set>
#include <algorithm> 
using namespace std;//11£º50 
const int maxn=1050,inf=99999999;
int d[maxn],vis[maxn],g[maxn][maxn];
int n,m,k,ds;
void dijstra(int src){
	fill(vis,vis+maxn,false);
	fill(d,d+maxn,inf);
	d[src]=0;
	for(int i=1;i<=n+m;i++){
		int u=-1,Min=inf;
		for(int j=1;j<=n+m;j++){
			if(!vis[j]&&d[j]<Min){
				u=j;
				Min=d[j];
			}
		}
		if(u==-1)return;
		vis[u]=true;
		for(int v=1;v<=n+m;v++){
			if(!vis[v]&&g[u][v]!=inf&&d[v]>d[u]+g[u][v]){
				d[v]=d[u]+g[u][v];
			}
		}
	}
}
int main(){
	string a,b;
	int x,y,t;
	for(int i=0;i<maxn;i++)fill(g[i],g[i]+maxn,inf);
	cin>>n>>m>>k>>ds;
	for(int i=0;i<k;i++){
		cin>>a>>b>>t;
		if(a[0]=='G'){
			a=a.substr(1,2);
			x=stoi(a)+n;
		}
		else x=stoi(a);
		if(b[0]=='G'){
			b=b.substr(1,2);
			y=stoi(b)+n;
		}
		else y=stoi(b);
		g[x][y]=g[y][x]=t; 
	}
	int r=-1;
	double dis=-1,av=-1;
	for(int i=1;i<=m;i++){
		int p=n+i;
		double sum=0,Min=inf,avr=0;
		bool f=true;
		dijstra(p);
		for(int j=1;j<=n;j++){
			if(d[j]>ds){
				f=false;
				break;
			}
			sum+=d[j];
			if(d[j]<Min)Min=d[j];
		}
		if(!f)continue;
		avr=sum/n;
		if(Min>dis){
			r=i;
			dis=Min;
			av=avr;
		}
		else if(Min==dis&&avr<av){
			r=i;
			dis=Min;
			av=avr;
		}
		else if(Min==dis&&avr==av&&i<r){
			r=i;
			dis=Min;
			av=avr;
		}
	}
	if(r!=-1)printf("G%d\n%.1lf %.1lf",r,dis,av);
	else printf("No Solution");
	return 0; 
}

