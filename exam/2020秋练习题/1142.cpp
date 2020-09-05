#include <iostream>
#include <stdio.h>
#include <vector>
#include <set>
using namespace std;
int main(){
	int n,m,e,a,b,t,k;
	cin>>n>>m;
	set <pair<int,int>> s;
	for(int i=0;i<m;i++){
		scanf("%d %d",&a,&b);
		s.insert(pair<int,int>(a,b));
		s.insert(pair<int,int>(b,a));
	}
	cin>>e;
	for(int i=0;i<e;i++){
		scanf("%d",&k);
		vector<int> v;
		set<int> st;
		for(int j=0;j<k;j++){
			scanf("%d",&t);
			v.push_back(t);
			st.insert(t);
		}
		int p=0;
		for(int i=0;i<v.size();i++){
			for(int j=i+1;j<v.size();j++){
				if(s.find(pair<int,int>(v[i],v[j]))==s.end()){
					p=-1;
					break;
				}
			}
			if(p==-1)break; 
		}
		if(p==-1){
			printf("Not a Clique\n");
			continue;
		}
		for(int i=1;i<=n;i++){
			if(st.find(i)!=st.end())continue;
			bool flag=true;
			for(int j=0;j<v.size();j++){
				if(s.find(pair<int,int>(i,v[j]))==s.end()){
					flag=false;
					break;
				}
			}
			if(flag){
				p=1;
				break;
			}
		}
		if(p==1)printf("Not Maximal\n");
		else printf("Yes\n");
	}
	return 0;
}
