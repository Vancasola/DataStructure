#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <set>
using namespace std;
pair<long long,long long> a,b,c;
long long gcd(long long a,long long b){
	long long c;
	if(a<b)swap(a,b);
	while(1){
		c=a%b;
		if(c==0)return b;
		a=b;
		b=c;
	}
}
void reduction(pair<long long,long long>&v){
	if(v.first==0){
		b.second=1;
		return;
	}
	long long g=gcd(abs(v.first),abs(v.second));
	v.first/=g;
	v.second/=g;
	if(v.first*v.second<0){
		v.first=-1*abs(v.first);
		v.second=abs(v.second);
	}
}
void display(pair<long long,long long> v){
	if(v.first==0){
		printf("0");
		return ;
	}
	if(v.first<0)printf("(-");
	long long a,b;
	a=abs(v.first);
	b=abs(v.second);
	if(a<b)printf("%lld/%lld",a,b);
	else if(b==1)printf("%lld",a/b);
	else printf("%lld %lld/%lld",a/b,a%b,b);
	if(v.first<0)printf(")");
}
pair<long long,long long> add(pair<long long,long long>a,pair<long long,long long>b){
	long long g=gcd(abs(a.second),abs(b.second)),h=(a.second*b.second)/g;
	pair<long long,long long> c;
	a.first*=(h/a.second);
	a.second=h;
	b.first*=(h/b.second);
	b.second=h;
	c.first=a.first+b.first;
	c.second=h;
	return c;
}
pair<long long,long long> multy(pair<long long,long long>a,pair<long long,long long>b){
	pair<long long,long long> c;
	c.first=a.first*b.first;
	c.second=a.second*b.second;
	return c;
}
int main(){
	scanf("%lld/%lld",&a.first,&a.second);
	scanf("%lld/%lld",&b.first,&b.second);
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
	b.first*=-1;
	reduction(c);
	display(c);
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
	if(b.first==0){
		printf("Inf\n");
		return 0;
	}
	swap(b.first,b.second);
	reduction(b);
	c=multy(a,b);
	swap(b.first,b.second); 
	reduction(c);
	display(c);
	printf("\n");
	return 0;
}

