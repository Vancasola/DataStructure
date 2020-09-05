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
int a[105],b[105],c[105];
int n;
void Print(int v[]){ 
	for(int i=0;i<n;i++){
		if(i<n-1)printf("%d ",v[i]);
		else printf("%d\n",v[i]); 
		}
}
bool cmp(int a[],int b[]){
	bool f=true;
	for(int i=0;i<n;i++)
		if(a[i]!=b[i])
			f=false;
	return f;
}
bool insertionsort(){
	bool f=false;
	for(int i=1;i<n;i++){
		int j=i-1;
		int t=a[i];
		
		for(;j>=-1;j--){
			if(j>=0&&t<a[j]){
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

void downadjust(int c[],int x,int n);
void build(int c[]){
	for(int i=n/2;i>=0;i--){
		downadjust(c,i,n);
	}
}

void downadjust(int c[],int x,int n){
	while(x<n){
		int p=2*x+1; 
		if(p+1<n&&c[p+1]>c[p])p++;
		if(p<n&&c[x]<c[p])
		{
			swap(c[p],c[x]);
			x=p;
		}
		else return;
	}
}
void heapsort(){
	bool f=false;
	for(int i=0;i<n;i++){
		swap(c[n-i-1],c[0]);
		downadjust(c,0,n-i-1);
		if(f){
			printf("Heap Sort\n");
			Print(c);
			return;
		}
		if(cmp(c,b))f=true;
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
	build(c);
	//Print(c);
	heapsort();
	return 0;
}

