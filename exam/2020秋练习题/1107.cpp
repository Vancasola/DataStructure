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
#include <iostream>
using namespace std;
const int maxn=1005;
int father[maxn];
unordered_map<int,vector<int>> p;
void init(){
	for(int i=0;i<maxn;i++)father[i]=i;
}
int findfather(int x){
	while(x!=father[x])
		x=father[x];
	return x;
}
void un(int a,int b){
	int fa=findfather(a);
	int fb=findfather(b);
	father[fb]=fa;
}
int main() {
	int n,m,t;
	cin>>n;
	init();
	bool vis[maxn]={false};
	for(int i=1;i<=n;i++){
		scanf("%d:",&m);
		vis[i]=true;
		for(int j=1;j<=m;j++){
			scanf("%d",&t);
			p[t].push_back(i);
		}
	}
	for(unordered_map<int,vector<int>>::iterator it=p.begin();it!=p.end();it++){
		for(int i=1;i<it->second.size();i++){
			un(it->second[0],it->second[i]);
		}
	}
	unordered_map<int,int> q;
	for(int i=1;i<maxn;i++){
		if(!vis[i])continue;
		t=findfather(i);
		q[t]++;
	}
	vector<int> r;
	for(unordered_map<int,int>::iterator it=q.begin();it!=q.end();it++){
		r.push_back(it->second);
	}
	printf("%d\n",r.size());
	sort(r.begin(),r.end(),greater<int>());
	for(int i=0;i<r.size();i++){
		if(i<r.size()-1)printf("%d ",r[i]);
		else printf("%d",r[i]);
	}
    return 0;
}

