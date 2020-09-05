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
		int n;
		long x,y,z;
		string s,a,b;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>s;
			a=s.substr(0,s.size()/2);
			b=s.substr(s.size()/2,s.size()/2);
			//cout<<a<<' '<<b<<endl;
			z=stoi(s);
			x=stoi(a);
			y=stoi(b);
			if((x*y)&&!(z%(x*y)))printf("Yes");
			else printf("No");
			cout<<endl; 
		} 
		return 0;
	} 
