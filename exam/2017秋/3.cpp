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
	set<int> s;
	vector<pair<int,int>> v;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		scanf("%d %d",&a,&b);
		v.push_back(pair<int,int>(a,b));
	}
	int k;
	cin>>m;
	int t;
	for(int i=0;i<m;i++){
		cin>>k;
		set<int> s;
		for(int j=0;j<k;j++){
			scanf("%d",&t);
			s.insert(t);	
		}
		bool f=true;
		for(int j=0;j<v.size();j++){
			a=v[j].first;
			b=v[j].second;
			if(s.find(a)==s.end()&&s.find(b)==s.end()){
				f=false;
				break;
			}
		}
		if(f)printf("Yes\n");
		else printf("No\n");
	}
	return 0;
} 

