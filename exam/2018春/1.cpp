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
	vector<int> v,r;
	int n,t;
	cin>>t>>n;
	v.push_back(t);
	for(int i=1;i<n;i++){
		t=v[0];
		int cnt=0;
		for(int j=0;j<v.size();j++){
			if(t==v[j])cnt++;
			else {
				r.push_back(t);
				r.push_back(cnt);
				cnt=1;
				t=v[j];
			}
		}
		r.push_back(t);
		r.push_back(cnt);
		v=r;
		r.clear();
	}
	for(int i=0;i<v.size();i++)
		printf("%d",v[i]);
	return 0;
}

