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
const int maxn=10005;
int f[maxn];
void init(){
	for(int i=0;i<maxn;i++)
		f[i]=i;
}
int findfather(int x){
	while(x!=f[x])
		x=f[x];
	return x;
} 
void un(int a,int b){
	int fa=findfather(a);
	int fb=findfather(b);
	f[fb]=fa;
}
int main(){
	int n,k,m,t;
	bool vis[maxn]={false};
	init();
	cin>>n;
	for(int i=0;i<n;i++){
		scanf("%d",&k);
		vector<int> v;
		for(int j=0;j<k;j++){
			scanf("%d",&t);
			vis[t]=true;
			v.push_back(t);
		}
		for(int j=1;j<k;j++){
			un(v[0],v[j]);
		}
	}
	set<int> s;
	int d,sum=0;
	for(int i=0;i<maxn;i++){
		if(vis[i]){
			d=findfather(i);
			f[i]=d;
			s.insert(d);
			sum++;
		}
	}
	printf("%d %d\n",s.size(),sum);
	cin>>n;
	int a,b;
	for(int i=0;i<n;i++){
		scanf("%d %d",&a,&b);
		if(findfather(a)==findfather(b))printf("Yes\n");
		else printf("No\n");
	}
	return 0;
} 

