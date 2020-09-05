#include <stdio.h>
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#include <set>
#include <unordered_map>
using namespace std;
int main(){
    int n,m,t;
    cin>>n>>m;
    vector<pair<int,int>> r;
    vector<int> v; 
    for(int i=0;i<n;i++){
		scanf("%d",&t);
    	v.push_back(t);
	}
	while(!r.size()){
		int sum=v[0];
	int p=0,q=0;
	while(p<n&&q<n){
		if(sum==m){
			r.push_back(pair<int,int>(q,p));
			sum-=v[q];
			q++; 
		}
		else if(sum>m){
			sum-=v[q];
			q++;
		}
		else if(sum<m&&p<n){
			p++;
			sum+=v[p];
		}
	}
	m++;
	}
	for(int i=0;i<r.size();i++)printf("%d-%d\n",r[i].first+1,r[i].second+1);
    return 0;
}

