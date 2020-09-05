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
using namespace std;//15:45
long long convert(string &s,long long r){
	long long sum=0l;
	long long m=1;
	for(int i=s.size()-1;i>=0;i--){
		if(s[i]>='0'&&s[i]<='9')sum+=(s[i]-'0')*m;
		else sum+=(s[i]-'a'+10)*m;
		m*=r;
	}
	return sum;
}
int main(){
	string a,b;
	long long tag,radix;
	cin>>a>>b>>tag>>radix;
	if(tag==2)swap(a,b);
	//cout<<convert(a,radix);
	long long x=convert(a,radix);
	long long Min=-1,t;
	for(int i=0;i<b.size();i++)
	{
		if(b[i]>='0'&&b[i]<='9'){
			t=b[i]-'0';
		}
		else t=b[i]-'a'+10;
		if(t>Min)Min=t;
	}
	long long c;
	long long left=Min+1;
	long long right=max(x+2,left);
	long long mid;
	while(left<=right){
		mid=(left+right)/2;
		c=convert(b,mid);
		if(c==x){
			printf("%lld",mid);
			return 0;
		}
		else if(c<0||c>x){
			right=mid-1;
		}
		else left=mid+1;
	}
	printf("Impossible");
}
//6 110 1 10
