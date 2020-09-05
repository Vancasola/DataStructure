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
#include <iostream>
using namespace std;
int father[1005];
unordered_map<int,vector<int>> p;
void init(){
	for(int i=0;i<1005;i++)father[i]=i;
}
int findfather(int x){
	while(father[x]!=x)
		x=father[x];
	return x;
}
void un(int a,int b){
	int fa=findfather(a);
	int fb=findfather(b);
	father[fb]=fa;
}
int main() {
    int n,k,t;
    bool vis[1005]={false};
	cin>>n;
	init();
    for(int i=0;i<n;i++){
    	scanf("%d:",&k);
    	vis[i]=true;
    	for(int j=0;j<k;j++){
    		scanf("%d",&t);
    		p[t].push_back(i);
		}
	}
	for(unordered_map<int,vector<int>>::iterator it=p.begin();it!=p.end();it++){
		for(int i=1;i<it->second.size();i++){
			un(it->second[0],it->second[i]);
		}
	}
	int sum=0;
	unordered_map<int,int> q;
	for(int i=0;i<1005;i++){
		if(vis[i]){
			int f=findfather(i);
			if(q.find(f)==q.end())sum++;
				q[f]++;
		}
	}
	vector<int> v;
	for(unordered_map<int,int>::iterator it=q.begin();it!=q.end();it++){
		v.push_back(it->second);
	}
	sort(v.begin(),v.end(),greater<int>());
	printf("%d\n",v.size());
	for(int i=0;i<v.size();i++)
		if(i)printf(" %d",v[i]);
		else printf("%d",v[i]);

	//for(int i=0;i<n)
    return 0;
}

