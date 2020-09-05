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
int a[1005];
vector<int> v;
int t,n,p=0;
void inorder(int r){
	if(2*r+1<n)inorder(2*r+1);
	if(a[r]==-1){
		a[r]=v[p++];
		//return;
	}
	if(2*r+2<n)inorder(2*r+2);
}
int main(){
	int m;
	fill(a,a+1005,-1);
	cin>>n;

	for(int i=0;i<n;i++){
		scanf("%d",&t);
		v.push_back(t);
	}
	sort(v.begin(),v.end());
		inorder(0);
	for(int i=0;i<n-1;i++)printf("%d ",a[i]);
	printf("%d",a[n-1]);
	return 0; 
}
