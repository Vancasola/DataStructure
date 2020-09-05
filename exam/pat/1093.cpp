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
	int n=0,m=0,sum=0;
	int p[100005],t[100005];
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++){
		if(s[i]=='P')n++;
		p[i]=n;
	}
	for(int i=s.size()-1;i>=0;i--){
		if(s[i]=='T')m++;
		t[i]=m;
	}
	for(int i=0;i<s.size();i++){
		if(s[i]=='A'){
			sum+=p[i]*t[i];
			sum%=1000000007;
		}
	}
	cout<<sum;
	return 0;
}

