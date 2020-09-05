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
using namespace std;//14:08 
bool cmp(const pair<string,string>& a,const pair<string,string>& b){
	if(a.first==b.first)return a.second<b.second;
	return a.first<b.first;
}
int judge(string s){
	if(s[0]=='-')return -1;
	return 1;
}
int main(){
	int n,m,k;
	unordered_map<string,set<string>> s;
	string a,b;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		cin>>a>>b;
		s[a].insert(b);
		s[b].insert(a);
	}
	cin>>k;
	//string c,d;
	for(int i=0;i<k;i++){
		cin>>a>>b;
		vector<pair<string,string>> v;
		
		for(set<string>::iterator c=s[a].begin();c!=s[a].end();c++){
			if(*c==a||*c==b||!(judge(*c)+judge(a)))continue;
			if(s[a].find(*c)==s[a].end())continue;
			for(set<string>::iterator d=s[*c].begin();d!=s[*c].end();d++){
				if(*d==a||*d==b||*d==*c||!(judge(*d)+judge(b)))continue;
				if(s[b].find(*d)!=s[b].end()){
					string s1=*c,s2=*d;
					if(judge(s1)==-1)s1=s1.substr(1,4);
					if(judge(s2)==-1)s2=s2.substr(1,4);
					//if(s2<s1)swap(s1,s2);
					v.push_back(pair<string,string>(s1,s2));
				}
			}
		}
		
		
		printf("%d\n",v.size());
		sort(v.begin(),v.end(),cmp);
		for(int i=0;i<v.size();i++){
			printf("%s %s\n",v[i].first.c_str(),v[i].second.c_str());
		}
	}
	return 0; 
}

