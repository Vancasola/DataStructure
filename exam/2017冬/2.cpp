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
struct node{
	int p,mid,final,g;
	string id;
	node(){
		g=p=mid=final=-1;
	}
};
bool cmp(const node&a,const node&b){
	if(a.g!=b.g)return a.g>b.g;
	return a.id<b.id;
}
int main(){
	unordered_map<string,node> p;
	int k,n,m;
	string a;
	int b;
	cin>>k>>n>>m;
	for(int i=0;i<k;i++){
		cin>>a>>b;
		p[a].p=b;
	}
	for(int i=0;i<n;i++){
		cin>>a>>b;
		p[a].mid=b;
	}
	for(int i=0;i<m;i++){
		cin>>a>>b;
		p[a].final=b;
	}
	vector<node> v;
	for(unordered_map<string,node>::iterator it=p.begin();it!=p.end();it++)
	{
		it->second.id=it->first;
		if(it->second.p<200)continue;
		if(it->second.mid>it->second.final)it->second.g=(0.4*it->second.mid+0.6*it->second.final+0.5);
		else it->second.g=it->second.final; 
		if(it->second.g<60)continue;
		v.push_back(it->second);
	}
	sort(v.begin(),v.end(),cmp);
	for(int i=0;i<v.size();i++){
		printf("%s %d %d %d %d\n",v[i].id.c_str(),v[i].p,v[i].mid,v[i].final,v[i].g);
	}
	return 0; 
}

