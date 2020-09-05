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
int n;
int a[1005],p=0;
int v[1005];
void inorder(int r){
	if(r>=n)return;
	if(2*r+1<n)inorder(2*r+1);
	v[r]=a[p++];
	if(2*r+2<n)inorder(2*r+2);
}
int main(){
	cin>>n;
	fill(v,v+1005,-1);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]); 
	}
	sort(a,a+n);
	inorder(0);
	for(int i=0;i<n;i++){
		if(i<n-1)printf("%d ",v[i]);
		else printf("%d",v[i]) ;
	}
	return 0;
}


