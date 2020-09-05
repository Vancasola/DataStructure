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
bool cmp(const pair<string,int>&a,const pair<string,int>&b){
	if(a.second!=b.second)return a.second>b.second;
	return a.first<b.first;
}
const int maxn=20010;
int main(){
	int n,m;
	string s;
	int t;
	string photo[maxn];
	vector<pair<string,int>> v;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>s>>t;
		v.push_back(pair<string,int>(s,t));
	}
	sort(v.begin(),v.end(),cmp);
	int x=0; 
	for(int u=0;u<m;u++){
		int p=0,q=0,base=maxn/2+1;
		photo[base]=v[x++].first;
		if(!u){
			for(int i=0;i<(n-(m-1)*(n/m))-1;i++){
					if(i%2)photo[base+(++p)]=v[x++].first;
					else photo[base+(--q)]=v[x++].first;
			}
		}
		else
			for(int i=0;i<n/m-1;i++){
					if(i%2)photo[base+(++p)]=v[x++].first;
					else photo[base+(--q)]=v[x++].first;
			}
		for(int i=base+q;i<=base+p;i++)
			if(i!=base+p)printf("%s ",photo[i].c_str());
			else printf("%s\n",photo[i].c_str());
	}
	//for(int i=0;i<n;i++)printf("%s ",v[i].first.c_str());
	return 0; 
}

