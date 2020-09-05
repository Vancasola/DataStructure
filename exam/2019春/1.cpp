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
bool isp(int x){
	if(x<=1)return false;
	for(int i=2;i<=sqrt(x);i++)
		if(x%i==0)return false;
	return true;
}
int main(){
	bool f,f1,f2;
	int n,a,b;
	cin>>n;
	a=n+6,b=n-6;
	f=isp(n);
	f1=isp(a);
	f2=isp(b);
	if((f&&f1)||(f&&f2)){
		printf("Yes\n");
		if(!isp(b)&&isp(a))cout<<a;
		else cout<<b;
	}
	else {
		printf("No\n");
		for(int i=n+1;;i++){
			if((isp(i)&&isp(i+6))||(isp(i)&&isp(i-6))){
				cout<<i;
				return 0;
			}
		}
	}
	return 0; 
}

