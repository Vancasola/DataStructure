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
vector<pair<string,int>> v; 
int n,m;
bool cmp(const pair<string,int>& a,const pair<string,int>& b){
	if(a.second==b.second)return a.first<b.first;
	return a.second>b.second;
}
int main(){
	string s;
	int sc;
	scanf("%d %d",&n,&m);
	set<string> f;
	for(int i=0;i<n;i++){
		cin>>s>>sc;
		if(f.find(s)==f.end())
		{
			f.insert(s);
			v.push_back(pair<string,int>(s,sc));
		}
	}
	int tag;
	char level;
	for(int j=0;j<m;j++){
		cin>>tag>>s;
		if(tag==1){
			printf("Case %d: %d",j+1,tag);
			printf(" %s\n",s.c_str());
			vector<pair<string,int>> a;
			for(int i=0;i<v.size();i++){
				if(v[i].first[0]==s[0]){
					a.push_back(v[i]);
				}
			}
			if(!a.size()){
				printf("NA\n");
				continue;
			}
			sort(a.begin(),a.end(),cmp);
			for(int i=0;i<a.size();i++)printf("%s %d\n",a[i].first.c_str(),a[i].second);
		}
		else if(tag==2){
			int sum=0;
			int cnt=0;
			printf("Case %d: %d",j+1,tag);
			printf(" %s\n",s.c_str());
			for(int i=0;i<n;i++){
				if(v[i].first.substr(1,3)==s){
					cnt++;
					sum+=v[i].second;
				}
			}
			if(!cnt){
				printf("NA\n");
				continue;
			}
			printf("%d %d\n",cnt,sum);
		}
		else{
			string d=s;
			printf("Case %d: %d",j+1,tag);
			printf(" %s\n",d.c_str());
			unordered_map<string,int> p;
			vector<pair<string,int>> a;
			for(int i=0;i<n;i++){
				//cout<<v[i].first.substr(4,6)<<endl;
				if(v[i].first.substr(4,6)==d){
					p[v[i].first.substr(1,3)]++;
				}
			}
			for(unordered_map<string,int>::iterator it=p.begin();it!=p.end();it++){
				a.push_back(pair<string,int>(it->first,it->second));
			}
			if(!a.size()){
				printf("NA\n");
				continue;
			}
			sort(a.begin(),a.end(),cmp);
			for(int i=0;i<a.size();i++)printf("%s %d\n",a[i].first.c_str(),a[i].second);
		}
	}
	return 0; 
}

