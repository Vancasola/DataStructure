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
using namespace std;
struct node{
	int data,addr,next;
}a[100005],c[100005],b[100005];
int main(){
	int h,n,k;
	int addr,data,next;
	cin>>h>>n>>k;
	for(int i=0;i<n;i++){
		scanf("%d %d %d",&addr,&data,&next);
		a[addr].addr=addr;
		a[addr].data=data;
		a[addr].next=next;
	}
	int m=0;
	for(int i=h;i!=-1;i=a[i].next){
		b[m]=a[i];
		m++;
	}
	int p=0;
	for(int i=0;i<m/k;i++){
		reverse(b+i*k,b+k*(i+1));
	}
	//for(int i=m/k*k;i<m;i++)b[i]=a[i];
	for(int i=0;i<m-1;i++){
		printf("%05d %d %05d\n",b[i].addr,b[i].data,b[i+1].addr);
	}
	printf("%05d %d -1\n",b[m-1].addr,b[m-1].data);

	return 0;
}

