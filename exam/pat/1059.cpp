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
using namespace std;//14£º44 15:04
bool isp(int x){
	if(x<=1)return false;
	for(int i=2;i<=sqrt(x);i++){
		if(x%2==0)return false;
	}
	return true;
}
int main(){
	int n,sum;
	map<int,int> p;
	cin>>n;
	sum=n;
	for(int i=2;i<=sqrt(n)+1;){
		if(!(sum%i)&&isp(i)){
			p[i]++;
			sum/=i;
		}
		else i++;

	}
	printf("%d=",n);
	if(!p.size()){
		printf("%d",n);
		return 0;
	}
	vector<int> v;
	for(map<int,int>::iterator it=p.begin();it!=p.end();it++){
		v.push_back(it->first);
		}
	for(int i=0;i<v.size();i++){
		printf("%d",v[i]);
	//	printf("^%d",p[v[i]]);
		if(p[v[i]]>1)printf("^%d",p[v[i]]);
		if(i<v.size()-1)printf("*");
	}
}
