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
using namespace std;//14:02 14£º21 
int main(){
	int n;
	vector<int> v,r;
	int sum=0,Max=-1;
	cin>>n;
	for(int i=2;i<=sqrt(n)+1;i++){
		sum=n;
		v.clear();

		for(int j=i;j<=sqrt(n)+1;j++){
			if(!sum||sum%j)break;
			sum/=j;
			v.push_back(j);
			if(j-i+1>Max){
				Max=j-i+1;
				r=v;
			}
		}
	}
	if(!r.size()){
        printf("%d\n%d",1,n);
        return 0;
    }
    cout<<r.size()<<endl;
	for(int i=0;i<r.size();i++){
		if(i<r.size()-1)printf("%d*",r[i]);
		else printf("%d",r[i]);
	}
	return 0;
}
