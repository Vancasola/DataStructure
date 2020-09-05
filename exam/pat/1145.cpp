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
bool isprime(int x){
	if(x<=1)return false;
	for(int i=2;i<=sqrt(x);i++){
		if(x%i==0)return false;
	}
	return true;
}
int main(){
	int s,n,m;
	int a[100005];
	fill(a,a+100005,-1);
	cin>>s>>n>>m;
	int t,p;
	while(!isprime(s))s++;
	for(int i=0;i<n;i++){
		scanf("%d",&t);
		bool f=false;
		for(int j=0;j<=s;j++){
			p=(t+j*j)%s;
			if(a[p]==-1){
				a[p]=t;
				f=true;
				break;
			}
		}
		if(!f)printf("%d cannot be inserted.\n",t);
	}
	double avg=0;
	for(int i=0;i<m;i++){
		scanf("%d",&t);
		bool f=false;
		for(int j=0;j<=s;j++){
			p=(t+j*j)%s;
			avg++;
			if(a[p]==-1||a[p]==t){
				f=true;
				break;
			}
		}
	}
	printf("%.1lf",avg/m);
	return 0; 
}

