#include <iostream>
#include <cstdio>
#include <unordered_map>
#include <vector>
#include <stack>
#include <queue>
#include <cmath>
#include <algorithm>
using namespace std;
double p,r,Max=-1;
int cnt=0;
int n;
vector<int> v[100005]; 
void dfs(int x,int sum){
	if(!v[x].size()){
		double t=p*pow(1+r*0.01,sum);
		if(t>Max){
			cnt=1;
			Max=t;
		}
		else if(t==Max){
			cnt++;
		}
		return ;
	}
	for(int i=0;i<v[x].size();i++){
		dfs(v[x][i],sum+1);
	}
}
int main(){
	cin>>n>>p>>r;
	int t,root;
	for(int i=0;i<n;i++){
		scanf("%d",&t);
		if(t!=-1)v[t].push_back(i);
		else root=i;
	}
	dfs(root,0);
	printf("%.2lf %d",Max,cnt);
	return 0;
}

