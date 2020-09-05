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
int main(){
	int n,m,t;
	vector<int> in,pre;
	unordered_map<int,int> p; 
	set<int> vis;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		scanf("%d",&t);;
		in.push_back(t);
		p[t]=i;
		vis.insert(t);
	}
	for(int i=0;i<m;i++){
		scanf("%d",&t);;
		pre.push_back(t);
		vis.insert(t);
	}
	int a,b;
	for(int i=0;i<n;i++){
		scanf("%d %d",&a,&b);
		if(vis.find(a)==vis.end()&&vis.find(b)!=vis.end()){printf("ERROR: %d is not found.\n",a);continue;}
		else if(vis.find(a)!=vis.end()&&vis.find(b)==vis.end()){printf("ERROR: %d is not found.\n",b);continue;}
		else if(vis.find(a)==vis.end()&&vis.find(b)==vis.end()){printf("ERROR: %d and %d are not found.\n",a,b);continue;}
		int p1=p[a],p2=p[b];
		if(p1>p2)swap(p1,p2); 
		set<int> s;

		for(int j=p1;j<=p2;j++)s.insert(in[j]);
		for(int i=0;i<m;i++){
			if(s.find(pre[i])!=s.end()){
				if(a==pre[i])printf("%d is an ancestor of %d.",pre[i],b);
				else if(b==pre[i])printf("%d is an ancestor of %d.",pre[i],a);
				else printf("LCA of %d and %d is %d.",a,b,pre[i]);
				printf("\n");
				break;
			}
		}
	}
	return 0; 
}

