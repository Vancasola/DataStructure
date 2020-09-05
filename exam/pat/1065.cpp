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
long long a,b,x,c ;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		scanf("%lld %lld %lld",&a,&b,&c);
		printf("Case #%d: ",i+1);
		x=a+b;
		if(a>0&&b>0&&x<0)printf("true");
		else if(a<0&&b<0&&x>=0)printf("false");
		else if(x>c)printf("true");
		else printf("false");
		printf("\n");
	}
	return 0; 
}

