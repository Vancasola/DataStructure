#include <iostream>
#include <cstdio>
#include <unordered_map>
#include <vector>
#include <stack>
#include <queue>
#include <cmath>
#include <algorithm>
using namespace std;
int n,a[105],b[105],c[105];
bool cmp(int a[],int b[]){
	bool f=true;
	for(int i=0;i<n;i++){
		if(a[i]!=b[i])return false;
	}
	return true;
}
void Print(int a[]){
	for(int i=0;i<n;i++){
		if(i<n-1)printf("%d ",a[i]);
		else printf("%d\n",a[i]);
	}
}
bool insertionsort(){
	bool f=false;
	for(int i=1;i<n;i++){
		int t=a[i];
		for(int j=i-1;j>=-1;j--){
			if(j>=0&&a[j]>t){
				a[j+1]=a[j];
			}
			else{
				a[j+1]=t;
				break;
			}
		}
		if(f){
			printf("Insertion Sort\n");
			Print(a);
			return true;
		}
		if(cmp(a,b))f=true;
	}
	return false;
}
void mergesort(){
	int j,step=2;
	bool f=false;
	for(int i=0;i<n;i++){
		for( j=0;j<n/step*step;j+=step){
			sort(c+j,c+j+step);
		}
		sort(c+j,c+n);
		if(f){
			printf("Merge Sort\n");
			Print(c);
			return ;
		}
		if(cmp(c,b))f=true;
		step*=2;
	}
}
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		c[i]=a[i];
	}
	for(int i=0;i<n;i++){
		scanf("%d",&b[i]);
	}
	if(insertionsort())return 0;
	mergesort();
	return 0;
}

