#include<iostream>
#include<cstdio>
#include<string>
#include<vector>
#include<stack>
#include<set>
#include<unordered_map>
#include<queue>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<cstdlib>
using namespace std;
vector<int> v;
int n,m,k;
int main(){
	cin>>n>>m>>k;
	set<pair<int,int>> s;
	int a,b;
	for(int i=0;i<m;i++){
		scanf("%d %d",&a,&b);
		s.insert(pair<int,int>(a,b));
		//s.insert(pair<int,int>(b,a));
	}
	int e;
	cin>>e;
	for(int i=0;i<e;i++){
		vector<int> v;
		set<int> st;
		for(int j=0;j<n;j++){
			scanf("%d",&a);
			v.push_back(a);
			st.insert(a);
		}
		bool f=true;
		if(st.size()>k){
			printf("Error: Too many species.\n");
			continue;
		}
		else if(st.size()<k){
			printf("Error: Too few species.\n");
			continue;
		}
		for(set<pair<int,int>>::iterator it=s.begin();it!=s.end();it++){
			if(v[it->first-1]==v[it->second-1]){
				f=false;
				break;
			}
		}
		if(!f)printf("No\n");
		else printf("Yes\n");
	}

	return 0;
} 

