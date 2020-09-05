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
	int t;
	vector<int> v;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		scanf("%d",&t);
		v.push_back(t);	
	}
	sort(v.begin(),v.end());
	//for(int i=0;i<n;i++)printf("%d ",v[i]);
	int sum=v[0];
	for(int i=1;i<n;i++){
		sum=(sum+v[i])/2;
	}
	printf("%d",sum);
	return 0;
} 
//8
//10 15 12 3 4 13 1 15
