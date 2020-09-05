#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <vector>
#include <cstring>
#include <cmath>
#include <map>
#include <unordered_map>
#include <set>
#include <algorithm> 
using namespace std;
struct node{
	string x;
	int lc=-1,rc=-1;
}a[25];
bool f[25]={false};
void postorder(int r){
	printf("(");
	if(a[r].lc!=-1&&a[r].rc==-1&&!f[r]){
		printf("%s",a[r].x.c_str());
		f[r]=true;
	}
	if(a[r].lc==-1&&a[r].rc!=-1&&!f[r]){
		printf("%s",a[r].x.c_str());
		f[r]=true;
	}
	if(a[r].lc!=-1)postorder(a[r].lc);
	if(a[r].rc!=-1)postorder(a[r].rc);
	if(!f[r])printf("%s",a[r].x.c_str());
	printf(")");
}
int main(){
	int n,lc,rc;
	string x;
	cin>>n;
	set<int> s;
	for(int i=1;i<=n;i++)s.insert(i);
	for(int i=1;i<=n;i++){
		cin>>x>>lc>>rc;
		s.erase(lc);
		s.erase(rc);
		a[i].x=x;
		a[i].lc=lc;
		a[i].rc=rc;
	}
	postorder(*s.begin());
	return 0;
} 
