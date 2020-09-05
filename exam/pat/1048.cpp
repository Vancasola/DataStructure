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
using namespace std; //16:46
int main(){
	int n,m,t;
	cin>>n>>m;
	vector<int> v;
	set<int> s;
	unordered_map<int,int> p;
	for(int i=0;i<n;i++){
		scanf("%d",&t);
		v.push_back(t);
		s.insert(t);
		p[t]++;
	}
	sort(v.begin(),v.end());
	//for(int i=0;i<v.size();i++)
	//	printf("%d ",v[i]);
	for(int i=0;i<v.size();i++){
		if(v[i]!=(m-v[i])&&s.find(m-v[i])!=s.end()){
			printf("%d %d",v[i],m-v[i]);
			//else printf("%d %d",m-v[i],v[i]);
			return 0;
		}
		else if(v[i]==m-v[i]&&p[v[i]]>=2){
			printf("%d %d",v[i],m-v[i]);
			return 0;
		}
	}
	
	printf("No Solution");
	return 0;
}
