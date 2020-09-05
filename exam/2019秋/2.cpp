#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <vector>
#include <cstring>
#include <cmath>
#include <map>
#include <unordered_map>
#include <set>
#include <algorithm>
//15:18 
using namespace std;
struct node
{
	int data,addr=-1,next=-1;
}a[100005],b[100005],c[100005];
int main(){
	int h1,h2,n,data,addr,next;
	cin>>h1>>h2>>n;
	for(int i=0;i<n;i++){
		scanf("%d %d %d",&addr,&data,&next);
		a[addr].addr=addr;
		a[addr].data=data;
		a[addr].next=next;
	}
	int n1=0;
	for(int i=h1;i!=-1;i=a[i].next,n1++){
		b[n1]=a[i];
	}
	int n2=0; 
	for(int i=h2;i!=-1;i=a[i].next,n2++){
		c[n2]=a[i];
	}
	int p=0,q=0;
	if(n1>n2){
		p=0;
		q=n2-1;
		int cnt=0;
	for(int i=0;i<n1+n2;i++,cnt++){
		if(cnt==2){
			a[i]=c[q];
			q--;
			cnt=-1;
		}
		else{
			a[i]=b[p];
			p++;
		}
	}
	}
	else{
		p=0;q=n1-1;
		int cnt=0;
	for(int i=0;i<n1+n2;i++,cnt++){
		if(cnt==2){
			a[i]=b[q];
			q--;
			cnt=-1;
		}
		else{
			a[i]=c[p];
			p++;
		}
	}
	}
	for(int i=0;i<n1+n2-1;i++){
		printf("%05d %d %05d\n",a[i].addr,a[i].data,a[i+1].addr);
	}
	printf("%05d %d -1\n",a[n1+n2-1].addr,a[n1+n2-1].data);
	return 0;
}

