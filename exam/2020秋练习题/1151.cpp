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
	int m,n;
	cin>>m>>n;
	int in[10005],pre[10005];
	unordered_map<int,int> p;
	set<int>s;
	for(int i=0;i<n;i++){
		scanf("%d",&in[i]);
		s.insert(in[i]);
		p[in[i]]=i;
	}
	for(int i=0;i<n;i++){
		scanf("%d",&pre[i]);
	}
	int a,b,x,y;
	for(int i=0;i<m;i++){
		scanf("%d %d",&a,&b);
		if(s.find(a)==s.end()&&s.find(b)==s.end()){
			printf("ERROR: %d and %d are not found.\n",a,b);
			continue;
		}
		else if(s.find(a)!=s.end()&&s.find(b)==s.end()){
			printf("ERROR: %d is not found.\n",b);
			continue;
		}
		else if(s.find(a)==s.end()&&s.find(b)!=s.end()){
			printf("ERROR: %d is not found.\n",a);
			continue;
		}
		int pa=p[a],pb=p[b];
		if(pa>pb)swap(pa,pb);
		int lca;
		for(int i=0;i<n;i++){
			if(p[pre[i]]>=pa&&p[pre[i]]<=pb){
				lca=pre[i];
				break;
			}
		}
		if(lca==a)printf("%d is an ancestor of %d.\n",lca,b);
			else if(lca==b) printf("%d is an ancestor of %d.\n",lca,a);
		else printf("LCA of %d and %d is %d.\n",a,b,lca);
	}
	return 0; 
}


