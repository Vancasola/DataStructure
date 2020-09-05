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
using namespace std;
const int maxn=105;
int n;
int a[maxn],b[maxn],c[maxn];
void display(int a[]){
	for(int i=0;i<n;i++){
		if(i<n-1)printf("%d ",a[i]);
		else printf("%d\n",a[i]);
	}
}
bool cmp(int a[],int b[]){
	for(int i=0;i<n;i++){
		if(a[i]!=b[i])return false;
	}
	return true;
}
bool insertionsort(){
	bool f=false;
	for(int i=1;i<n;i++){
		int t=a[i];
		for(int j=i-1;j>=-1;j--){
			if(t<a[j])a[j+1]=a[j];
			else{
				a[j+1]=t;
				break;
			}
		}
		if(f){
			printf("Insertion Sort\n");
			display(a);
			return true;
		}
		if(cmp(a,c))f=true;
	}
	return false;
}
void downadjust(int x,int m){
	int t;
	while(x<m){
		t=2*x+1;
		if(t>=m)return;
		if(t+1<m&&b[t]<b[t+1])t++;
		if(b[x]<b[t])swap(b[x],b[t]);
		x=t;
	}
}
void buildheap(){
	for(int i=n/2;i>=0;i--){
		downadjust(i,n);
	}
}
void heapsort(){
	buildheap();
	bool f=false;
	for(int i=0;i<n;i++){
		swap(b[0],b[n-i-1]);
		downadjust(0,n-i-1);
		if(f){
			printf("Heap Sort\n");
			display(b);
			 return ;
		}
		if(cmp(b,c))f=true;
	}
}
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		b[i]=a[i];
	}
	for(int i=0;i<n;i++){
		scanf("%d",&c[i]);
	}
	if(insertionsort())return 0;
	heapsort();
	return 0;
}

