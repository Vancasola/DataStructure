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
vector<int> v[11];
int n;
int main(){
	int a,b,n,m,t;
	cin>>a>>b;
	cin>>n>>m;
	if(n==0){
		printf("No winner.");
		return 0;}
	set<int> ans,s,win;
	for(int i=0;i<n;i++){
		win.insert(i);
		for(int j=0;j<m;j++){
			scanf("%d",&t);
			v[i].push_back(t);
		}
	}
	vector<int> w,res;
	s.insert(a);
	s.insert(b);
	ans.insert(abs(a-b));
	int x;
	for(int i=0;i<m;i++){
		vector<int> r;
		if(win.size()==0){
		printf("No winner.");
		return 0;}
		for(int j=0;j<n;j++){
			if(!win.size())break;
			if(win.find(j)==win.end())continue;
			t=v[j][i];
			if(ans.find(t)==ans.end()||s.find(t)!=s.end()){
				r.push_back(j);
				win.erase(j);
				continue;
			}
			//vis.insert(t);
			s.insert(t);
			for(set<int>::iterator it=s.begin();it!=s.end();it++){
				x=*it-t;
				if(x<0)x*=-1;
				ans.insert(x);
			}
		}
		sort(r.begin(),r.end());
		if(r.size()){
			printf("Round #%d: ",i+1);
			for(int i=0;i<r.size();i++)printf("%d ",r[i]+1);
			printf("is out.\n",i+1);	
		}
	}
	if(!win.size())printf("No winner.");
	else{
		printf("Winner(s):");
		vector<int> r;
		for(set<int>::iterator it=win.begin();it!=win.end();it++){
			r.push_back(*it+1);
		}
		sort(r.begin(),r.end());
		for(int i=0;i<r.size();i++){
			printf(" %d",r[i]);
		}
	}
	return 0;
} 

