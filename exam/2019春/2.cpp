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
	int n,m;
	string t;
	vector<string> a,b,c;
	set<string> s;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>t;
		a.push_back(t);
		s.insert(t);
	}
	cin>>m;
	for(int j=0;j<m;j++){
		cin>>t;
		b.push_back(t);
		if(s.find(t)!=s.end())c.push_back(t);
	}
	if(c.size()){
		printf("%d\n",c.size());
		string Max="99999999";
		int id=0;
		for(int i=0;i<c.size();i++)
			if(c[i].substr(7,8)<Max){
				Max=c[i].substr(7,8);
				id=i;
			}
		printf("%s\n",c[id].c_str());
	}
	else{
		printf("%d\n",c.size());
		string Max="99999999";
		int id=0;
		for(int i=0;i<b.size();i++)
			if(b[i].substr(7,8)<Max){
				Max=b[i].substr(7,8);
				id=i;
			}
		printf("%s\n",b[id].c_str());
	}
	return 0; 
}

