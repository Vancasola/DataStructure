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
int n;
int toll[24];
using namespace std;
struct node{
	string id;
	int mon,mm,hh,dd,t;
	bool f;
	node(){	};
	node(string s,int a,int b,int c,int d,bool flag){
		id=s,mon=a,dd=b,hh=c,mm=d,f=flag;
		t=dd*60*24+hh*60+mm;
	}
};
bool cmp(const node&a,const node&b){
	if(a.id!=b.id)return a.id<b.id;
	if(a.t!=b.t)return a.t<b.t;
	return a.f>b.f;
}
int dailyfee=0;
int fee(node&a){
	int sum=0;
	for(int i=0;i<a.dd;i++)sum+=dailyfee;
	for(int i=0;i<a.hh;i++)sum+=toll[i]*60;
	sum+=toll[a.hh]*a.mm;
	return sum;
}
int main(){
	vector<node> v;
	string t,flag;
	int mon,dd,hh,mm;
	for(int i=0;i<24;i++)scanf("%d",&toll[i]);
	for(int i=0;i<24;i++)dailyfee+=60*toll[i];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>t;
		scanf("%d:%d:%d:%d",&mon,&dd,&hh,&mm);
		cin>>flag;
		bool f=false;
		if(flag=="on-line")f=true;
		v.push_back(node(t,mon,dd,hh,mm,f));
	}
	sort(v.begin(),v.end(),cmp);
	double sum=0.0;
	int f1,f2;
	unordered_map<string,vector<node>>p;
	vector<string> name;
	string last;
	for(int i=0;i<n-1;i++){
		if(v[i].id==v[i+1].id&&v[i].f&&!v[i+1].f){
			p[v[i].id].push_back(v[i]);
			p[v[i].id].push_back(v[i+1]);
			if(v[i].id!=last)name.push_back(v[i].id);
			last=v[i].id;
		}
	}
	node a,b;
	for(int i=0;i<name.size();i++){
		printf("%s %02d\n",name[i].c_str(),p[name[i]][0].mon);
		sum=0;
		for(int j=0;j<p[name[i]].size();j+=2){
			f1=fee(p[name[i]][j]),f2=fee(p[name[i]][j+1]);
			a=p[name[i]][j],b=p[name[i]][j+1];
			printf("%02d:%02d:%02d ",a.dd,a.hh,a.mm,a.f);
			printf("%02d:%02d:%02d ",b.dd,b.hh,b.mm,b.f);
			printf("%d $%.2lf\n",b.t-a.t,(f2-f1)*0.01);
			sum+=f2-f1;
		}
		printf("Total amount: $%.2lf\n",sum*0.01);
	}
	return 0; 
}
