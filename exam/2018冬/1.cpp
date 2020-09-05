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
string s;
bool isp(int x){
	if(x<=1)return false;
	for(int i=2;i<=sqrt(x);i++){
		if(x%i==0)return false;
	}
	return true;
}
int main(){
	int n,m,t;
	cin>>n>>m; 
	cin>>s;
	string x;
	for(int i=0;i<=n-m;i++){
		x=s.substr(i,m);
		t=stoi(x);
		if(isp(t)){
			printf("%s",x.c_str());
			return 0;
		}
	}
	printf("404");
	return 0; 
}

