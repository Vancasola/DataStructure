#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
typedef long long ty;
ty f(char ch){
	if(ch>='0'&&ch<='9')return ch-'0';
	return ch-'a'+10;
}
ty convert(string a,ty r){
	ty sum=0ll,m=1ll;
	for(int i=a.size()-1;i>=0;i--){
		sum+=f(a[i])*m;
		m*=r;
	}
	return sum;
}
int main(){
	string a,b;
	ty tag,r,x,y;
	cin>>a>>b>>tag>>r;
	if(tag==1)swap(a,b);
	y=convert(b,r);
	//cout<<y<<endl;
	ty left=-1,right=y+2;
	for(int i=0;i<a.size();i++){
		if(f(a[i])>left)
			left=f(a[i]);
	}
	left++;
	if(right<left)right=left;
	//cout<<left<<' '<<right<<endl;
	ty mid,t;
	while(left<=right){
		mid=(right+left)/2;
		//cout<<mid<<endl;
		t=convert(a,mid);
		if(t==y){
			printf("%lld",mid);
			return 0;
		}
		else if(t>y||t<0){
			right=mid-1;
		}
		else{
			left=mid+1;
		}
	}
	printf("Impossible");
	
	return 0;
}

