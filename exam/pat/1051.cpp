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
using namespace std;//13£º22 13:36
int main(){
	int n,m,k;
	int t;
	cin>>m>>n>>k;
	for(int i=0;i<k;i++){
		vector<int> v;
		stack<int> s;
		for(int j=0;j<n;j++){
			scanf("%d",&t);
			v.push_back(t);
		}
		int p=1,q=0;
		bool f=true;
		while(p<=n+1&&q<n){
			//printf("%d ",p);
			if(s.size()>m){
				f=false;
				break;
			}
			else if(!s.size()){
				s.push(p++);
			}
			else if(s.size()&&s.top()==v[q]){
				s.pop();
				q++;
			}
			else if(s.size()&&s.top()!=v[q])
			{
				s.push(p++);
			}
		}
		if(s.size())f=false;
		if(f)printf("YES\n");
		else printf("NO\n");
	} 
	return 0;
}

