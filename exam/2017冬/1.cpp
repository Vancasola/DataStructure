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
bool judge(string& s){
	for(int i=0;i<s.size()/2;i++){
		if(s[i]!=s[s.size()-i-1])
			return false;
	}
	return true;
}
string add(string a,string b){
	int c=0,r=0,x,y;
	string str;
	if(a.size()<b.size())swap(a,b);//a larger
	stack<int> s1,s2,s;
	for(int i=0;i<a.size();i++)
		s1.push(a[i]-'0');
	for(int i=0;i<b.size();i++)
		s2.push(b[i]-'0');
	while(s1.size()&&s2.size()){
		x=s1.top();
		y=s2.top();
		s1.pop();
		s2.pop();
		r=x+y+c;
		s.push(r%10);
		c=r/10;
	}
	/*
	while(s1.size()){
		x=s1.top();
		s1.pop();
		r=x+c;
		s.push(r%10);
		c=r/10;
	}*/
	while(c){
		r=c;
		s.push(r%10);
		c=r/10;
	}
	while(s.size()){
		str+=s.top()+'0';
		s.pop();
	}
	return str;
}
int main(){
	string a,b,c;
	cin>>a;
	int i=0;
	while(i++<10){
		if(judge(a)){
			printf("%s is a palindromic number.",a.c_str());
			return 0;
		}
		b=a;
		reverse(a.begin(),a.end());
		printf("%s + %s = ",b.c_str(),a.c_str());
		a=add(a,b);
		printf("%s\n",a.c_str());
	}
	printf("Not found in 10 iterations.");
	return 0; 
}
//97152
