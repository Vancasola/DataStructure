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
int father[1005];
void init(){
for(int i=0;i<1005;i++)
	father[i]=i;
}
int findfather(int x){
	while(x!=father[x])
		x=father[x];
	return x;
}
void un(int a,int b){
	int fa=findfather(a);
	int fb=findfather(b);
	if(fb<fa)swap(fa,fb);
	father[fb]=fa;
}
int main(){
	init();
	int k,n,m;
	int c,r,d;
	unordered_map<int,int> p[1005];
	cin>>k>>n>>m;
	for(int i=0;i<m;i++){
		scanf("%d %d %d",&c,&r,&d);
		if(p[c].find(r)!=p[c].end())p[c][r]+=d;
		else p[c][r]=d;
	}
	vector<int>v;
	set<int> s;
	for(int i=1;i<=n;i++){
		c=i;
		int sa=p[i].size(),sb=0,short_call=0;
		for(unordered_map<int,int>::iterator it=p[i].begin();it!=p[i].end();it++){
			r=it->first;
			if(it->second<=5)short_call++;
			if(it->second<=5&&(p[r].find(c)!=p[r].end()))sb++;
		}
		//cout<<i<<' '<<short_call<<' '<<double(sb)/double(sa)<<' '<<sa<<' '<<sb<<endl;	
		if(short_call>k&&sb*5<=short_call){
			v.push_back(i);
			s.insert(i);
		}
	}
	if(!v.size()){
		printf("None");
		return 0;
	}
	int a,b;
	for(int i=0;i<v.size();i++){
		for(int j=i+1;j<v.size();j++){
			a=v[i];
			b=v[j];
			if((p[a].find(b)!=p[a].end())&&(p[b].find(a)!=p[b].end()))un(a,b);
		}
	}
	unordered_map<int,vector<int>> res;
	for(int i=0;i<v.size();i++){
		int f=findfather(v[i]);
		res[f].push_back(v[i]);
	}
	for(int i=0;i<v.size();i++){
		if(s.find(v[i])!=s.end()){
			s.erase(v[i]);
			sort(res[v[i]].begin(),res[v[i]].end());
			for(int j=0;j<res[v[i]].size();j++){
				s.erase(res[v[i]][j]);
				if(j<res[v[i]].size()-1)printf("%d ",res[v[i]][j]);
				else printf("%d\n",res[v[i]][j]);
			}
		}
	}
	return 0; 
}

