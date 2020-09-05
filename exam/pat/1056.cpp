#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <cstring>
#include <vector>
#include <cstring>
#include <cmath>
#include <queue>
#include <stack>
#include <unordered_map>
#include <set>
#include <algorithm> 
using namespace std;//14:18
struct node{
	int id,sc,r;
}v[1005],a[1005];
vector<pair<int,int>> ans;
bool cmp1(const pair<int,int> &a,pair<int,int>&b){
	return a.second<b.second;
}
bool cmp2(const pair<int,int> &a,pair<int,int>&b){
	return a.first<b.first;
}
int main(){
	int n,m;
	int p[1005],r[1005]={0};
	queue<node> q,next;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		scanf("%d",&v[i].sc);
		v[i].id=i;
	}
	for(int i=0;i<n;i++)scanf("%d",&p[i]);
	for(int i=0;i<n;i++)a[i]=v[p[i]];
	for(int i=0;i<n;i++){
		q.push(a[i]);
		//printf("%d ",a[i].sc);
	}
	int round=1;
	while(q.size()!=1){
		while(!q.empty()){
			node Max=q.front();
			q.pop();
			for(int i=1;i<m&&!q.empty();i++){
				if(q.front().sc>Max.sc){
					Max=q.front();
				}
				q.pop();
			}
			next.push(Max);
		}
		q=next;
		while(!next.empty()){
			r[next.front().id]++;
			next.pop();
		}
	}
	for(int i=0;i<n;i++)ans.push_back(pair<int,int>(i,round-r[i]));
	sort(ans.begin(),ans.end(),cmp1);
	int rank=1;
	r[0]=1;
	for(int i=1;i<n;i++){
		if(ans[i].second!=ans[i-1].second)rank=i+1;
		r[i]=rank;
	}
	for(int i=0;i<ans.size();i++)ans[i].second=r[i];
	sort(ans.begin(),ans.end(),cmp2);
	for(int i=0;i<ans.size();i++){
		if(i)printf(" %d",ans[i].second);
		else printf("%d",ans[i].second);
	}
	return 0;
}
