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
		unordered_map<char,vector<string>> p;
		char ch;
		string s;
		for(int i=0;i<26;i++){
			ch='A'+i;
			//vector<int> v;
			for(int j=0;j<7;j++){
				cin>>s;
				p[ch].push_back(s);
			} 
		}
		getchar();
		getline(cin,s);
		string str;
		vector<string> in;
		for(int i=0;i<s.size();i++){
			if(s[i]>='A'&&s[i]<='Z'){
				str+=s[i];
			}
			else{
				if(str.size())in.push_back(str);
				str.clear();
			}
		}
		if(str.size())in.push_back(str);
		for(int i=0;i<in.size();i++){
			str=in[i];
				for(int j=0;j<7;j++){
					for(int k=0;k<str.size();k++){
						if(k<str.size()-1)cout<<p[str[k]][j]<<' ';
						else cout<<p[str[k]][j]<<endl;
					}
				}
			if(i<in.size()-1)cout<<endl;
		}
	
		return 0;
	} 

