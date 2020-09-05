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
vector<int> v,v1,v2;
int p1=0,p2=0,p=0,t,n,m;
int main(){
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&t);
		v.push_back(t);
	}
	vector<int> r1,r2;
	while(p<n){
		v1.clear();
		v2.clear();
		r1.clear();
		for(int i=0;i<r2.size();i++)v1.push_back(r2[i]);
		r2.clear();
		for(int i=0;i<m&&p<n;i++)v1.push_back(v[p++]);
		for(int i=0;i<m&&p<n;i++)v2.push_back(v[p++]);
		set<int> s;
	for(int i=0;v1.size()&&v2.size()&&i<2*m;i++){
		sort(v1.begin(),v1.end());
		if(v1.size()&&s.find(*v1.begin())!=s.end()){
			r2.push_back(*v1.begin());
			v1.erase(v1.begin());
			continue;
		}
		t=*v1.begin();
		r1.push_back(t);
		v1.erase(v1.begin());
		if(v2.size()&&*v2.begin()<t)s.insert(*v2.begin());
		v1.push_back(*v2.begin());
		v2.erase(v2.begin());
	}
	for(int i=0;i<v1.size();i++)r1.push_back(v1[i]);
	for(int i=0;i<r1.size();i++){
		if(i<r1.size()-1){
			printf("%d ",r1[i]);
		}
		else printf("%d",r1[i]);
	}
	printf("\n");
	}
	return 0;
} 

//13 3
//81 94 11 96 12 99 17 35 28 58 41 75 15
