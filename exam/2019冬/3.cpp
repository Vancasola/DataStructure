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
	int n,m;
	int a,b;
	set<pair<int,int>> s;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		scanf("%d %d",&a,&b);
		s.insert(pair<int,int>(a,b));
		s.insert(pair<int,int>(b,a));
	}
	cin>>m;
	int t,k;
	for(int i=0;i<m;i++){
		scanf("%d",&k);
		vector<int> v;
		set<int> vis; 
		for(int j=0;j<k;j++)
		{
			scanf("%d",&t);
			v.push_back(t);
			vis.insert(t);
		}
		bool f=true;
		for(int i=0;i<v.size();i++){
			for(int j=i+1;j<v.size();j++){
				if(s.find(pair<int,int>(v[i],v[j]))==s.end()){
					f=false;
					break;
				}
			}
			if(!f)break;
		}
		if(!f){
			printf("Area %d needs help.\n",i+1);
			continue;
		}
		int more=-1;
		for(int j=1;j<=n;j++){
			if(vis.find(j)!=vis.end())continue;
			bool f=true;
			for(int k=0;k<v.size();k++){
				if(s.find(pair<int,int>(j,v[k]))==s.end()){
					f=false;
					break;
				}
			}
			if(f){
				more=j;
				break;
			}
		}
		if(more==-1)printf("Area %d is OK.\n",i+1);
		else printf("Area %d may invite more people, such as %d.\n",i+1,more);
		
	}
	return 0;
} 
