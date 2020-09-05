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
int main(){
	int n,m;
	int a,b;
	set<pair<int,int>> s;
	set<int> vis;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		scanf("%d %d",&a,&b);
		vis.insert(b);
		s.insert(pair<int,int>(a,b));
		s.insert(pair<int,int>(b,a));
	} 
	int k,t;
	for(int i=0;i<m;i++){
		scanf("%d",&k);
		vector<int> v; 
		for(int j=0;j<k;j++){
			scanf("%d",&t);
			v.push_back(t);
		}
		bool f=false;
		for(int u=0;u<k;u++){
			if(vis.find(v[u])==vis.end())continue;
			for(int j=u+1;j<k;j++){
				if(s.find(pair<int,int>(v[u],v[j]))!=s.end()){
					f=true;
					break;
				}
			}
			if(f)break;
		}
		if(f)printf("No\n");
		else printf("Yes\n");
	} 
	return 0; 
	} 
	
