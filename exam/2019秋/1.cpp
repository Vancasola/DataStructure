#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <vector>
#include <cstring>
#include <cmath>
#include <map>
#include <unordered_map>
#include <set>
#include <algorithm> 
using namespace std;
vector<pair<int,string>> v;
int gcd(int a,int b){
	if(b>a)swap(a,b);
	int c=a%b;
	while(c!=0){
		a=b;
		b=c;
		c=a%b;
	}
		return b;
}
bool isprime(int x){
	if(x<=1)return false;
	for(int i=2;i<=sqrt(x);i++){
		if(x%i==0)return false;
	}
	return true;
}
int count(string s){
	s=to_string(stoi(s)+1); 
	int sum=0;
	for(int i=0;i<s.size();i++)sum+=s[i]-'0';
	return sum;
}
bool cmp(const pair<int,string>&a,const pair<int,string>&b){
	if(a.first==b.first)return a.second<b.second;
	return a.first<b.first;
}
int k=0,m,n=10;
string s;
bool f=false;
void dfs(int sum,int x,int p,int r){
	s+=x+'0';
	if(sum+9*(k-p)<m)return;
	if(sum>m)return;
	if(p==k&&sum==m){
		n=count(s);
		if(!n)return; 
		int g=gcd(m,n);
		if(g>2&&isprime(g)){
			f=true;
			v.push_back(pair<int,string>(n,s));
			//printf("%d %s\n",n,s.c_str());
		}
	}
	for(int i=0;i<10;i++){
		dfs(sum+i,i,p+1,r-i);
		if(s.size())s.pop_back();
	}
}
int main(){
	int N;
	int a,b;
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>k>>m;
		printf("Case %d\n",i+1);
		f=false;
		v.clear();
		for(int i=0;i<10;i++)
		{
			if(i)dfs(i,i,1,m);
			if(s.size())s.pop_back();
		}
		if(!f)printf("No Solution\n");
		else{
			sort(v.begin(),v.end(),cmp);
		for(int i=0;i<v.size();i++)
			printf("%d %s\n",v[i].first,v[i].second.c_str());
		}
	}
	return 0;
}
