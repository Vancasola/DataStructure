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
const int maxn=100005;
int main(){
	int n,t;
	vector<int> v;
	cin>>n;
	for(int i=0;i<n;i++){
		scanf("%d",&t);
		v.push_back(t);
	}
	int a[maxn],b[maxn];
	a[0]=0;
	for(int i=1;i<n;i++){
		if(v[i-1]>a[i-1])a[i]=v[i-1];
		else a[i]=a[i-1];
	}
	b[n-1]=999999999;
	for(int i=n-2;i>=0;i--){
		if(v[i+1]<b[i+1])b[i]=v[i+1];
		else b[i]=b[i+1];
	}
	//for(int i=0;i<n;i++)printf("%d ",a[i]);
	//cout<<endl;
	//for(int i=0;i<n;i++)printf("%d ",b[i]);
	vector<int> r;
	for(int i=0;i<n;i++){
		if(v[i]>a[i]&&v[i]<b[i])r.push_back(v[i]);
	}
	printf("%d\n",r.size());
	
	for(int i=0;i<r.size();i++){
		if(i<r.size()-1)printf("%d ",r[i]);
		else printf("%d",r[i]);
	}
	printf("\n");
	return 0;
}

