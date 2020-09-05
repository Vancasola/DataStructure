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
const int inf=99999999,maxn=205;
int main(){
	int n,m;
	int a,b,w,vis[maxn];
	int g[maxn][maxn];
	for(int i=0;i<maxn;i++)fill(g[i],g[i]+maxn,inf);
	cin>>n>>m;
	for(int i=0;i<m;i++){
		scanf("%d %d %d",&a,&b,&w);
		g[a][b]=g[b][a]=w;
	} 
	int k,e,t,sum,id=0,Min=inf;
	cin>>e;
	for(int i=0;i<e;i++){
		scanf("%d",&k);
		vector<int> v;
		sum=0;
		fill(vis,vis+n+1,0);
		for(int j=0;j<k;j++){
			scanf("%d",&t);
			v.push_back(t);
			vis[t]++;
		}
		
		int f=1;
		if(*v.begin()!=v.back())f=0;
		for(int i=1;i<=n;i++)if(!vis[i])f=0;
		for(int u=1;u<k;u++){
			if(g[v[u]][v[u-1]]==inf){
				f=-1;
				break;
			}
			if(f&&vis[v[u]]>1&&u!=k-1)f=2;
			sum+=g[v[u]][v[u-1]];
		}
		printf("Path %d: ",i+1);
		if(f==-1)printf("NA (Not a TS cycle)");
		else if(f==0)printf("%d (Not a TS cycle)",sum);
		else if(f==2)printf("%d (TS cycle)",sum);
		else if(f==1)printf("%d (TS simple cycle)",sum);
		printf("\n");
		if(f>0&&sum<Min){
			Min=sum;
			id=i+1;
		}
	}
	printf("Shortest Dist(%d) = %d",id,Min);
	return 0; 
	} 
	
