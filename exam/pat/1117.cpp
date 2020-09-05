#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <unordered_map>
using namespace std;
int main(){
	int n,t;
	vector<int> v;
	cin>>n;
	for(int i=0;i<n;i++){
		scanf("%d",&t);
		v.push_back(t);
		} 
		sort(v.begin(),v.end());
		//for(int i=0;i<v.size();i++)
		//	printf("%d ",v[i]);
		int e=0,Max=-1;
		for(int i=0;i<v.size();i++){
			e=v[i];
			int sum=0;
			for(int j=i;j<n;j++){
				if(v[j]>e)sum++;
			}
			if(sum<e)break;
		}
		cout<<e-1;
    return 0;
}

