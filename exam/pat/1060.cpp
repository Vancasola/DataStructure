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
int n;
using namespace std;
string convert(string&s){
	int w,e,p=-1;
	bool zf=true;
	for(int i=0;i<s.size();i++){
		if(s[i]!='0'||s[i]!='.'){
			zf=false;
			break;
		}
	}
	if(zf){
		string t="0.";
		for(int i=0;i<n;i++)t+="0";
		t+="10^0";
		return t;
		
	}
	int i=0;
	while(i+1<s.size()&&s[i]=='0'&&s[i+1]=='0'){
		i++;
	}
	if(s[i+1]!='.'&&s[i]=='0')s=s.substr(i+1,s.size()-i+1);
	else if(s[i]=='0') s=s.substr(i,s.size()-i+1);
	string str;
	bool dot=false;
	for(int i=0;i<s.size();i++)
		if(s[i]=='.'){
			p=i;
			break;
		}
	if(p==-1){
		str+="0.";
		e=s.size();
		if(n<s.size())str+=s.substr(0,n);
		else{
			str+=s;
			for(int i=str.size();i<n+2;i++){
				str+="0";
			}
		}
		str+="*10^";
		str+=to_string(e);
		}
	else {
		str+="0.";
		if(s[0]!='0'){
			e=p;
			string t;
			for(int i=0;i<s.size();i++)
				if(s[i]!='.')
					t+=s[i];
			if(n<t.size())str+=t.substr(0,n);
			else{
				str+=t;
				for(int i=str.size();i<n+2;i++){
					str+="0";
				}
			}
			str+="*10^";
			str+=to_string(e);
		}
		else {
			string t;
			for(int i=p+1;i<s.size();i++){
				if(s[i]!='0'){
					e=-1*(i-p-1);
					t=s.substr(i,s.size()-i);
					break;
				}
			}
			if(n<t.size())str+=t.substr(0,n);
			else{
				str+=t;
				for(int i=str.size();i<n+2;i++){
					str+="0";
				}
			}
			str+="*10^";
			str+=to_string(e);
		}
	}
	return str;
}
int main(){
	string a,b;
	string x,y;
	cin>>n>>a>>b;
	x=convert(a);
	y=convert(b);
	if(x==y)printf("YES %s",x.c_str());
	else printf("NO %s %s",x.c_str(),y.c_str());
	return 0; 
}
