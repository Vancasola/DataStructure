#include <iostream>
#include <cstdio>
#include <unordered_map>
#include <vector>
#include <stack>
#include <queue>
#include <cmath>
#include <algorithm>
using namespace std;
long long gcd(long long a,long long b){
	if(a<b)swap(a,b);
	long long c;
	while(1){
		c=a%b;
		if(!c)return b;
		a=b;
		b=c;
	}
	return 1;
}
void reduction(pair<long long,long long>& a){
	if(a.first==0){
		a.second=1;
		return;
	}
	if(a.second==0)return;
	int c=gcd(abs(a.first),abs(a.second));
	a.first/=c;
	a.second/=c;
	if(a.second<0){
		a.first*=-1;
		a.second*=-1;
		return ;
	}
}
void display(pair<long long,long long> x){
	if(x.second==0){
		printf("Inf");
		return;
	}
	if(x.first==0){
		printf("0");
		return;
	}
	if(x.first<0)printf("(-");
	long long a=0,b=0;
	a=abs(x.first)/x.second;
	b=abs(x.first)%x.second;
	if(a>0){
		printf("%lld",a);
		if(b>0)printf(" ");
	}
	if(b>0){
		printf("%lld/%lld",b,x.second);
	}
	if(x.first<0)printf(")");
}
pair<long long,long long> add(pair<long long,long long>a,pair<long long,long long> b){
	int c=gcd(a.second,b.second);
	pair<long long,long long> r;
	r.second=a.second*b.second/c;
	a.first*=r.second/a.second;
	b.first*=r.second/b.second;
	r.first=a.first+b.first;
	return r;
}
pair<long long,long long> multy(pair<long long,long long>a,pair<long long,long long> b){
	//int c=gcd(a.second,b.second);
	pair<long long,long long> r;
	r.second=a.second*b.second;
	r.first=a.first*b.first;
	return r;
}
int main(){
	pair<long long,long long> a,b,c;
	scanf("%lld/%lld %lld/%lld",&a.first,&a.second,&b.first,&b.second);
	reduction(a);
	reduction(b);
	display(a);
	printf(" + ");
	display(b);
	printf(" = ");
	c=add(a,b);
	reduction(c);
	display(c);
	printf("\n");
	
	display(a);
	printf(" - ");
	display(b);
	printf(" = ");
	b.first*=-1;
	c=add(a,b);
	reduction(c);
	display(c);
	b.first*=-1;
	printf("\n");
	
	display(a);
	printf(" * ");
	display(b);
	printf(" = ");
	c=multy(a,b);
	reduction(c);
	display(c);
	printf("\n");
	
	display(a);
	printf(" / ");
	display(b);
	printf(" = ");
	swap(b.second,b.first);
	c=multy(a,b);
	if(c.first==0){
		printf("Inf");
		return 0;
	}
	reduction(c);
	display(c);
	printf("\n");
	
	return 0;
}
/*
2/3 -4/2
2/3 + (-2) = (-1 1/3)
2/3 - (-2) = 2 2/3
2/3 * (-2) = (-1 1/3)
2/3 / (-2) = (-1/3)
*/
