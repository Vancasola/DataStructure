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
	int n,t;
	int sum=0;
	bool f=false;
	vector<int>v; 
	cin>>n;
	for(int i=0;i<n;i++){
		scanf("%d",&t);
		v.push_back(t);
		if(t>=0)f=true;
	}
	if(!f){
		printf("%d %d %d",0,*v.begin(),v.back());
		return 0;
	}
	int m=-1;
	int p=0,q=0,a=0;
	for(int i=0;i<n;i++){
		sum+=v[i];
		if(sum<0){
			sum=0;
			a=i+1;
		}
		else if(sum>m){
			m=sum;
			p=i;
			q=a;
		}
	}
	cout<<m<<' '<<v[q]<<' '<<v[p];
	return 0; 
}

