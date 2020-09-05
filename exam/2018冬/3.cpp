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
	int k,n,m;
	int a,b;
	int c[10005];
	vector<pair<int,int>>v;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		scanf("%d %d",&a,&b);
		v.push_back(pair<int,int>(a,b));
	}
	cin>>k;
	for(int i=0;i<k;i++){
		set<int> s;
		for(int j=0;j<n;j++){
			scanf("%d",&c[j]);
			s.insert(c[j]);
		}
		bool f=true;
		for(int j=0;j<v.size();j++){
			if(c[v[j].first]==c[v[j].second])
			{
				f=false;
				break;
			}
		}
		if(f)printf("%d-coloring\n",s.size());
		else printf("No\n");
	}
	return 0; 
}

