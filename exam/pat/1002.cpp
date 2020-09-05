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
bool cmp(const pair<int,double> &a,const pair<int,double> &b){
	return a.first>b.first;
}
int main(){
	int n,m;
	double x;
	int e;
	unordered_map<int,double> p1,p2,p;
	vector<pair<int,double>> v; 
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d %lf",&e,&x);
		p1[e]=x;
	}
	scanf("%d",&m);
	for(int i=0;i<m;i++){
		scanf("%d %lf",&e,&x);
		p2[e]=x;
	}
	for(unordered_map<int,double>::iterator it=p1.begin();it!=p1.end();it++)
		p[it->first]+=p1[it->first];
	for(unordered_map<int,double>::iterator it=p2.begin();it!=p2.end();it++)
		p[it->first]+=p2[it->first];
	for(unordered_map<int,double>::iterator it=p.begin();it!=p.end();it++)
		if(it->second!=0)v.push_back(pair<int,double>(it->first,it->second));
	sort(v.begin(),v.end(),cmp);
	printf("%d",v.size());
	for(int i=0;i<v.size();i++){
		printf(" %d %.1lf",v[i].first,v[i].second);
	} 
	
	return 0; 
}

