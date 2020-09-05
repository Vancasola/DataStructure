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
	set <int> s[1005];
	cin>>n>>m;
	for(int i=0;i<m;i++){
		scanf("%d %d",&a,&b);
		s[b].insert(a);
	}
	int k,t;
	vector<int> r;
	cin>>k;
	for(int i=0;i<k;i++){
		vector<int> v;
		bool f=true;
		for(int j=0;j<n;j++){
			scanf("%d",&t);
			v.push_back(t);
		}
		set<int> st; 
		for(int j=0;j<n;j++){
			b=v[j];
			if(s[b].size()==0){
				st.insert(b);
				continue;
			}
			for(set<int>::iterator it=s[b].begin();it!=s[b].end();it++){
				if(st.find(*it)==st.end())
				{
					f=false;
					break;
				}
			}
			if(!f)break;
			st.insert(b);
		}
		if(!f)r.push_back(i);
	}
	for(int i=0;i<r.size();i++)
	{
		if(i)printf(" %d",r[i]);
		else printf("%d",r[i]);
	}
}

