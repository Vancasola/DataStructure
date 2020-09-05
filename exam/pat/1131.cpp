#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <iostream>
#include <unordered_map>
#include <map>
using namespace std;
int n,m,k,src,dst;
unordered_map<int,vector<int>> v,line;
map<pair<int,int>,int> s;
bool vis[10005]={false};
vector<int> tmp,ans;
int Min=999999999;
void dfs(int x){
	if(x==dst){
		if(!ans.size()||tmp.size()<ans.size()){
			ans=tmp;
			int last=s[pair<int,int>(ans[0],ans[1])],id;
			int transfer=0;
			for(int i=0;i<ans.size()-1;i++){
				id=s[pair<int,int>(ans[i],ans[i+1])];
				if(id!=last)
					transfer++;	
				last=id;
			}
			if(id!=last)
				transfer++;
			Min=transfer;
			ans=tmp;
			return;
		}
		else if(tmp.size()==ans.size()){
			int last=s[pair<int,int>(tmp[0],tmp[1])],id;
			int transfer=0;
			for(int i=0;i<ans.size()-1;i++){
				id=s[pair<int,int>(tmp[i],tmp[i+1])];
				if(id!=last)
					transfer++;
				last=id;
			}
			if(id!=last)
				transfer++;
			if(transfer<Min){
				Min=transfer;
				ans=tmp;
			}
		}
		return;
	}
	for(int i=0;i<v[x].size();i++){
		if(!vis[v[x][i]]){
			vis[x]=true;
			tmp.push_back(v[x][i]);
			dfs(v[x][i]);
			tmp.pop_back();
			vis[x]=false;
		}
	}
}
int main(){
    cin>>n;
    int a,b,t,p=1;
    for(int i=0;i<n;i++){
    	scanf("%d",&m);
    	vector<int> r;
		for(int j=0;j<m;j++){
    		scanf("%d",&t);
    		r.push_back(t);
		}
		line[p]=r;
		for(int i=0;i<m-1;i++){
			a=r[i];
			b=r[i+1];
			v[a].push_back(b);
			v[b].push_back(a);
			s[pair<int,int>(a,b)]=p;
			s[pair<int,int>(b,a)]=p;
		}
		p++;
	}
	cin>>k;
	for(int i=0;i<k;i++){
		cin>>src>>dst;
		fill(vis,vis+105,false);
		ans.clear();
		Min=999999999;
		tmp.push_back(src);
		dfs(src);
		tmp.pop_back();
		vector<pair<int,int>> stop;
		int last=s[pair<int,int>(ans[0],ans[1])],id;
		for(int i=0;i<ans.size()-1;i++){
			id=s[pair<int,int>(ans[i],ans[i+1])];
			if(id!=last){
				stop.push_back(pair<int,int>(last,ans[i]));
			}
			last=id;
		}
		if(id!=last){
				stop.push_back(pair<int,int>(last,ans[i]));
			}
		stop.push_back(pair<int,int>(last,dst));
		printf("%d\n",ans.size()-1);
		if(stop.size())printf("Take Line#%d from %04d to %04d.\n",stop[0].first,src,stop[0].second);	
		for(int i=1;i<stop.size();i++){
			printf("Take Line#%d from %04d to %04d.\n",stop[i].first,stop[i-1].second,stop[i].second);
		}
	}
    return 0;
}

