#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <vector>
#include <cstring>
#include <cmath>
#include <map>
#include <queue>
#include <unordered_map>
#include <set>
#include <algorithm> 
using namespace std;
struct node{
	int lc=-1,rc=-1;
	int x;
	node(){
	}
}v[105];
int n,a,b,d[105],p=0;
vector<int> s;
string s1,s2;
void inorder(int x)
{
	if(v[x].lc!=-1)inorder(v[x].lc);
	v[x].x=d[p++];
	if(v[x].rc!=-1)inorder(v[x].rc);
	
}
void layerorder(){
	queue<int> q;
	q.push(0);
	int r;
	while(!q.empty()){
		r=q.front();
		q.pop();
		s.push_back(v[r].x);
		if(v[r].lc!=-1)q.push(v[r].lc);
		if(v[r].rc!=-1)q.push(v[r].rc);
	}
}
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s1>>s2;
		if(s1[0]!='-'){
			a=stoi(s1);
			v[i].lc=a;
		}
		if(s2[0]!='-'){
			b=stoi(s2);
			v[i].rc=b;
		}
	} 
	for(int i=0;i<n;i++){
		scanf("%d",&a);
		d[i]=a;
	}
	sort(d,d+n);
	inorder(0);
	layerorder();
	for(int i=0;i<n;i++){
		if(i<n-1)printf("%d ",s[i]);
		else printf("%d",s[i]);
	}
	return 0; 
}

