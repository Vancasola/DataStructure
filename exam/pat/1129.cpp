//
//  A1139.cpp
//  DataStructure
//
//  Created by vancasola on 2020/3/24.
//  Copyright ? 2020 none. All rights reserved.
//  4:46

#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <iostream>
#include <unordered_map>
#include <set>
using namespace std;
unordered_map<int,int> p;
bool cmp(const int&a,const int&b){
	if(p[a]!=p[b])return p[a]>p[b];
	return a<b;
}
int main(){
    int n,m,t;
    vector<int> v;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		scanf("%d",&t);
		if(v.size()){
			printf("%d:",t);
			for(int j=0;j<v.size()&&j<m;j++){
				printf(" %d",v[j]);
			}
			printf("\n");
		}
		p[t]++;
		if(find(v.begin(),v.end(),t)==v.end()){
			if(v.size()<m)
				v.push_back(t);
			else
			{
				int Min=999999999,x=-1,pos=0;
				for(int j=0;j<v.size();j++){
					if(p[v[j]]<Min||(p[v[j]]==Min&&v[j]>x)){
						Min=p[v[j]];
						x=v[j];
						pos=j;
					}
				}
				if(p[t]>Min||(p[t]==Min&&x>t)){
					v[pos]=t;
				}
			}
		}
		sort(v.begin(),v.end(),cmp);
	} 
    return 0;
}

