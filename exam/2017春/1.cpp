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
	int m,n,s;
	cin>>m>>n>>s;
	string t;
	vector<string> v,r;
	set<string> st;
	for(int i=0;i<m;i++){
		cin>>t;
		v.push_back(t);
	} 
	for(int i=s-1;i<m;){
		if(i>=m)break;
		if(st.find(v[i])==st.end()){
			st.insert(v[i]);
			r.push_back(v[i]);
			i+=n;
		}
		else {
			i++;
			continue;
		}
	}
	if(r.size())
		for(int i=0;i<r.size();i++)printf("%s\n",r[i].c_str());
	else printf("Keep going...");
	return 0;
} 

