#include<iostream>
#include<cstdio>
#include<string>
#include<vector>
#include<stack>
#include<map>
#include<unordered_map>
#include<queue>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<cstdlib>
using namespace std;
vector<int> v;
int n;
bool isp(int x){
	if(x<=1)return false;
	for(int i=2;i<=sqrt(x);i++)
		if(x%i==0)return false;
	return true;
}
int main(){
	string s;
	cin>>s;
	int m=s.size();
	bool f=true;
	while(s.size()){
		cout<<s;
		n=stoi(s);
		if(isp(n))printf(" Yes\n");
		else {
			f=false;
			printf(" No\n");
		}
		s=s.substr(1,s.size()-1);
	}
	if(f)printf("All Prime!");
	
	return 0;
} 
