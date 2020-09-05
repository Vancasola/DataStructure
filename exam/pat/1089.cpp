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
int a[105],b[105],c[105],n;
bool cmp(int a[],int b[]){
	for(int i=0;i<n;i++){
		if(a[i]!=b[i])
			return false;
	}
	return true;
}
void Print(int a[]){
	for(int i=0;i<n;i++)
	{
		if(i<n-1)printf("%d ",a[i]);
		else printf("%d\n",a[i]);
	}
}
bool insertionsort(){
	bool f=false;
	for(int i=1;i<n;i++){
		int t=a[i],j=0;
		for( j=i-1;j>=0;j--){
			if(t<a[j])a[j+1]=a[j];
			else {
				break;
			}
		}
		a[j+1]=t;
		if(f){
			printf("Insertion Sort\n");
			Print(a);
			return true;
		}
		if(cmp(a,c))f=true;
	}
	return false;
}
bool merge(){
	bool f=false;
	
	int step=2;
	for(int i=0;i<n;i++){
		for(int j=0;j<n/step*step;j+=step){
			sort(b+j,b+j+step);
		}
		sort(b+n/step*step,b+n);
		if(f){
			printf("Merge Sort\n");
			Print(b);
			return true;
		}
		if(cmp(b,c))f=true;
		step*=2;
	}
	return false;
}
int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		b[i]=a[i];
	}
	for(int i=0;i<n;i++){
		scanf("%d",&c[i]);
	}
	if(insertionsort())return 0;
	merge();
	return 0;
}

