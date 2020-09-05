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
struct school{
	string id;
	int a=0,b=0,t=0,r=0;
	int tws=0,n=0;
};
void low(string&a){
	for(int i=0;i<a.size();i++)
		if(a[i]>='A'&&a[i]<='Z')a[i]=a[i]-'A'+'a';
}
bool cmp(const school& a,const school& b){
	if(a.tws==b.tws){
		if(a.n==b.n)return a.id<b.id;
		return a.n<b.n;
	}
	return a.tws>b.tws;
}
int main(){
	int n;

	string id,sch;
	int sc;
	unordered_map<string,school> p;
	vector<school>v;
	cin>>n;
	if(!n){
		printf("0");
		return 0;
	}
	for(int i=0;i<n;i++){
		cin>>id>>sc>>sch;
		low(sch);
		p[sch].id=sch;
		if(id[0]=='A')
			p[sch].a+=sc;
		else if(id[0]=='B')
			p[sch].b+=sc;
		else if(id[0]=='T')
			p[sch].t+=sc;
			p[sch].n++;
	}
	for(unordered_map<string,school>::iterator it=p.begin();it!=p.end();it++){
		it->second.tws=it->second.a+it->second.t*1.5+it->second.b/1.5; 
		v.push_back(it->second);
		}
	sort(v.begin(),v.end(),cmp);
	int r=1;
	v[0].r=1;
	for(int i=1;i<v.size();i++){
		if(v[i].tws!=v[i-1].tws)r=i+1;
		v[i].r=r;
	}
	printf("%d\n",v.size());
	for(int i=0;i<v.size();i++){
		printf("%d %s %d %d\n",v[i].r,v[i].id.c_str(),v[i].tws,v[i].n);
	}
	return 0;
}
/*
10
A57908 85 Au
B57908 54 LanX
A37487 60 au
T28374 67 CMU
T32486 24 hypu
A66734 92 cmu
B76378 71 AU
A47780 45 lanx
A72809 100 pku
A03274 45 hypu
*/
