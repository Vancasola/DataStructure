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
bool isp(string& s){
	if(s.size()==1)return true;
	for(int i=0;i<s.size()/2;i++){
		if(s[i]!=s[s.size()-i-1])return false;
	}
	return true;
}
string add(string a,string b){
	if(b.size()>a.size())swap(a,b);
	stack<int> s;
	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());
	int i,sum=0,c=0;
	for( i=0;i<b.size();i++){
		sum=c+a[i]+b[i]-2*'0';
		s.push(sum%10);
		c=sum/10;
	}
	for(;i<a.size();i++){
		sum=c+a[i]-'0';
		s.push(sum%10);
		c=sum/10;
	}
	while(c){
		sum=c;
		s.push(sum%10);
		c=sum/10;
	}
	string str;
	while(!s.empty()){
		str+=s.top()+'0';
		s.pop();
	}
	return str;
}
int main(){
	int k;
	string a,b;
	cin>>a>>k;
	for(int i=0;i<k;i++){
		if(isp(a)){
			printf("%s\n%d",a.c_str(),i);
			return 0;
		}
		b=a;
		reverse(b.begin(),b.end());
		a=add(a,b);
	} 
	printf("%s\n%d",a.c_str(),k);
	return 0;
}
