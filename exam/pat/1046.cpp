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
using namespace std;//14:49

int main(){
	int n,t,m,total=0;
	int a,b;
	int d[100005],v[100005];
	cin>>n;
	for(int i=1;i<=n;i++){
		scanf("%d",&t);
		total+=t;
		d[i]=t;
	}
	int sum=0;
	for(int i=1;i<=n;i++){
		v[i]=sum;
		sum+=d[i];
	}
	cin>>m;
	for(int j=0;j<m;j++){
		scanf("%d %d",&a,&b);
		if(b<a)swap(a,b);
		int x=v[b]-v[a],y=sum-x;
		if(y<x)swap(x,y);
		printf("%d\n",x);
	}
	return 0;
}

