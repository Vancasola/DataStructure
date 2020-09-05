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
int judge(string a){
	if(a[0]=='-')return 1;
	return -1;
}
bool cmp(const pair<string,string>&a,const pair<string,string>&b){
	if(a.first!=b.first)return a.first<b.first;
	return a.second<b.second;
}
int main(){
	int n,m;
	string a,b;
	unordered_map<string,set<string>> p;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		cin>>a>>b;
		p[a].insert(b);
		p[b].insert(a);
	}
	int k;
	cin>>k;
	for(int i=0;i<k;i++){
		cin>>a>>b;
		vector<pair<string,string>> v;
		for(set<string>::iterator c=p[a].begin();c!=p[a].end();c++){
			if(*c==a||*c==b)continue;
			if(judge(a)+judge(*c)==0)continue;
			for(set<string>::iterator d=p[*c].begin();d!=p[*c].end();d++){
				if(*c==*d||*d==b||*d==a)continue;
				if(judge(b)+judge(*d)==0)continue;
				if(p[b].find(*d)==p[b].end())continue;
				string s1,s2;
				s1=*c;
				s2=*d;
				if(s1.size()>4)s1=s1.substr(1,4);
				if(s2.size()>4)s2=s2.substr(1,4);
				v.push_back(pair<string,string>(s1,s2));
				}
		}
		sort(v.begin(),v.end(),cmp);
		printf("%d\n",v.size());
		for(int i=0;i<v.size();i++){
			printf("%s %s\n",v[i].first.c_str(),v[i].second.c_str());
		}
	}
	return 0; 
}

