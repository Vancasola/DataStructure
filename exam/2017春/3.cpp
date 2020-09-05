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
vector<int> v[505];
bool vis[505]={false};
void dfs(int x){
	vis[x]=true;
	if(!v[x].size()){
		return;
	}
	for(int i=0;i<v[x].size();i++){
		if(!vis[v[x][i]])dfs(v[x][i]);
	}
}
int main(){
	int n,m,a,b;
	int d[505]={0};
	cin>>n>>m;
	for(int i=0;i<m;i++){
		scanf("%d %d",&a,&b);
		v[a].push_back(b);
		v[b].push_back(a);
		d[a]++;
		d[b]++;
	}
	int sum=0;
	for(int i=1;i<=n;i++){
		if(!vis[i]){
		 	dfs(i);
		 	sum++;
		}
	}
	int even=0,odd=0;
	for(int i=1;i<=n;i++){
		if(i<n)printf("%d ",d[i]);
		else printf("%d\n",d[i]);
		if(d[i]%2)odd++;
		else even++;
	}
	if(sum>1){
		printf("Non-Eulerian");
		return 0;
	}
	if(even==n)printf("Eulerian");
	else if(odd==2)printf("Semi-Eulerian");
	else printf("Non-Eulerian");
	return 0;
} 

