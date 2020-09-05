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
using namespace std;
int main(){
	int N,t;
	vector<int> v;
	cin>>N;
	for(int i=0;i<N;i++){
		scanf("%d",&t);
		v.push_back(t);
	}
	sort(v.begin(),v.end(),greater<int>());
	for(int i=0;i<N;i++){
		//printf("%d ",v[i]);
	}
	int n,m,Min=999999999,n1,m1;
	for(int n=1;n<=N;n++){
		if(N%n)continue;
		m=N/n;
		if(m<n)continue;
		if(m-n<Min){
			Min=m-n;
			n1=n;
			m1=m;
		}
	}
	n=n1;
	m=m1;
	//cout<<n<<' '<<m<<endl;
	int a[105][105];
	int p=0,l=0;
	while(p<N){
		for(int i=l;i<n-l&&p<N;i++){
			a[l][i]=v[p++];
		}
		for(int i=l+1;i<m-1-l&&p<N;i++){
			a[i][n-l-1]=v[p++];
		}
		//for(int j=0;j<n;j++){
		//	printf("%d ",a[0][j]);
		//}
		for(int i=n-1-l;i>=l&&p<N;i--){
			a[m-1-l][i]=v[p++];
		}
		for(int i=m-2-l;i>=l+1&&p<N;i--){
			a[i][l]=v[p++];
		}
		l++;
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(j<n-1)printf("%d ",a[i][j]);
			else printf("%d\n",a[i][j]);
		}
	}
	return 0;
}

