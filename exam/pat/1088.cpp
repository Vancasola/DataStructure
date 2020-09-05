#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <cstring>
#include <vector>
#include <cstring>
#include <cmath>
#include <queue>
#include <stack>
#include <unordered_map>
#include <set>
#include <algorithm> 
using namespace std;//14:18
struct node{
	bool s=false;
	long long a,b;
};
long long gcd(long long a,long long b){
	long long c;
	if(b>a)swap(a,b);
	while(1){
		c=a%b;
		if(c==0)return b;
		a=b;
		b=c;
	}
}
void loose(node&x){
	if(x.a==0){
		x.b=1;
		return;
	} 
	if(x.a*x.b<0)x.s=true;
	else x.s=false;
	x.a=abs(x.a);
	x.b=abs(x.b);
	long long c=gcd(x.a,x.b);
	x.a/=c;
	x.b/=c;
	if(x.s)x.a*=-1;
}
void display(node&x){
	if(!x.b){
		printf("Inf");
		return;
	}
	if(!x.a){
		printf("0");
		return;
	}
	if(x.s)printf("(-");
	int inter=abs(x.a)/x.b;
	if(inter)printf("%d",inter);
	if(inter&&(x.a%x.b))printf(" ");
	if(x.a%x.b)printf("%lld/%lld",abs(x.a%x.b),x.b);
	if(x.s)printf(")"); 
}
node add(node&x,node&y){
	node c;
	int g=gcd(x.b,y.b),d;
	c.b=x.b*y.b/g;
	c.a=x.a*y.b/g+y.a*x.b/g;
	return c;
}
node multy(node& x,node& y){
	node c;
	c.a=x.a*y.a;
	c.b=x.b*y.b;
	return c;
}
int main(){
	node x,y;
	scanf("%lld/%lld %lld/%lld",&x.a,&x.b,&y.a,&y.b);
	
	node c;
	loose(x);
	display(x);
	printf(" + ");
	loose(y);
	display(y);
	printf(" = ");
	c=add(x,y);
	loose(c);
	display(c);
	printf("\n");

	loose(x);
	display(x);
	printf(" - ");
	display(y);
	y.a*=-1;
	loose(y);
	printf(" = ");
	c=add(x,y);
	loose(c);
	display(c);
	printf("\n");
	
	loose(x);
	display(x);
	printf(" * ");
	y.a*=-1;
	loose(y);
	display(y);
	printf(" = ");
	c=multy(x,y);
	loose(c);
	display(c);
	printf("\n");
	
	loose(x);
	display(x);
	printf(" / ");
	loose(y);
	display(y);
	printf(" = ");
	if(!y.a||!y.b)printf("Inf");
	else
		{
		swap(y.a,y.b);
		c=multy(x,y);
		loose(c);
		display(c);
	}
	printf("\n");
	return 0; 
}
/*
2/3 + (-2) = (-1 1/3)
2/3 - (-2) = 2 2/3
2/3 * (-2) = (-1 1/3)
2/3 / (-2) = (-1/3)
*/

