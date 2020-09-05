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
	int n,m,k,e,t;
	int a,b;
	set<int> s[205];
	cin>>n>>e;
	for(int i=0;i<e;i++){
		scanf("%d %d",&a,&b);
		s[a].insert(b);
		s[b].insert(a);
	}
	cin>>k;
	bool vis[205];
	for(int i=0;i<k;i++){
		scanf("%d",&m);
		vector<int> v;
		fill(vis,vis+n+1,false);
		for(int j=0;j<m;j++){
			scanf("%d",&t);
			vis[t]=true;
			v.push_back(t);
		}
		int f=2;
		for(int i=0;i<m;i++){
			a=v[i];
			for(int j=i+1;j<m;j++){
				b=v[j];
				if(s[a].find(b)==s[a].end()){
					f=0;
					break;
				}
			}
			if(!f)break;
		}
		if(!f){
			printf("Not a Clique\n");
			continue;
		}
		for(int j=1;j<=n;j++){
			if(vis[j])continue;
			bool flag=true;
			for(int k=0;k<m;k++){
				a=v[k];
				if(a==j)break;
				if(s[a].find(j)==s[a].end()){
					flag=false;
					break;
				}
			}
			if(flag){
				f=1;
				break;
			}
		}
		if(f==1)printf("Not Maximal\n");
		else printf("Yes\n");
	}
	return 0;
}
