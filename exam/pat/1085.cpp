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
	long long m,p,t;
	cin>>m>>p;
	vector<long long> v;
	for(int i=0;i<m;i++){
		scanf("%lld",&t);
		v.push_back(t);
	}
	sort(v.begin(),v.end());
	//for(int i=0;i<m;i++)printf("%lld ",v[i]);
	long a=0,b=0,Max=0;
	while(a<m&&b<m){
		//printf("%lld %lld\n",a,b);
		if(v[a]*p<v[b])a++;
		else if(v[a]*p>=v[b]){
			if(b-a>Max)Max=b-a;
			b++;
		}
	}
	cout<<Max+1;
	return 0; 
}

