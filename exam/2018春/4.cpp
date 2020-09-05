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
	int m,n,t,a,b;
	set<int> s;
	vector<int> v;
	cin>>m>>n;
	for(int i=0;i<n;i++){
		scanf("%d",&t);
		v.push_back(t); 
		s.insert(t);
	}
	int x,y;
	for(int i=0;i<m;i++){
		scanf("%d %d",&a,&b);
		x=a;
		y=b;
		if(x>y)swap(x,y);
		if(s.find(a)==s.end()&&s.find(b)==s.end()){printf("ERROR: %d and %d are not found.\n",a,b);continue;}
		else if(s.find(a)==s.end()&&s.find(b)!=s.end()){printf("ERROR: %d is not found.\n",a);continue;}
		else if(s.find(a)!=s.end()&&s.find(b)==s.end()){printf("ERROR: %d is not found.\n",b);continue;}
		for(int j=0;j<v.size();j++){
			if(v[j]>=x&&v[j]<=y){
				if(v[j]==a)printf("%d is an ancestor of %d.\n",a,b);
				else if(v[j]==b)printf("%d is an ancestor of %d.\n",b,a);
				else printf("LCA of %d and %d is %d.\n",a,b,v[j]); 
				break;
			}
		}
	}
	return 0;
}

