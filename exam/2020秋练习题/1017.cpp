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
int n,m,k,w[105];
struct node{
	int arr=0,t=0;
	node(){
	}
	node(int a,int b){
		arr=a;
		t=b;
	}
};
queue<node> q;
bool cmp(const node& a,const node&b){
	return a.arr<b.arr;
}
int main(){
	cin>>n>>m;
	int hh,mm,ss,t,arr;
	vector<node> v;
	for(int i=0;i<n;i++){
		scanf("%d:%d:%d %d",&hh,&mm,&ss,&t);
		arr=hh*3600+60*mm+ss;
		if(arr>3600*17)continue;
		if(t>60)t=60;
		t*=60;
		v.push_back(node(arr,t));
	}
	fill(w,w+105,3600*8);
	node x;
	int p=0;
	sort(v.begin(),v.end(),cmp);
	int sum=0,cnt=0;
	while(p<n){
		x=v[p++];
		int Min=w[0],id=0;
		for(int i=1;i<m;i++){
			if(w[i]<Min){
				Min=w[i];
				id=i;
			}
		}
		cnt++;
		if(x.arr<w[id]){
			sum+=w[id]-x.arr;
			w[id]+=x.t;
		}
		else if(x.arr>=w[id]){
			w[id]=x.arr+x.t;
		}
		//cout<<w[id]/3600<<' '<<w[id]/60-w[id]/3600*60<<endl;
		//cout<<sum<<' '<<cnt<<endl;
	}
	if(cnt==0)printf("0.0");
	else printf("%.1lf",sum/cnt/60.0);
}

