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
struct student{
	int f,e,i,r,id;
	vector<int> v;
}a[40005];
struct school{
	int q;
	vector<student> v;
}s[101];
bool cmp(const student& a,const student& b){
	if(a.f==b.f)return a.e>b.e;
	return a.f>b.f;
}
int main(){
	int n,m,k,t;
	cin>>n>>m>>k;
	for(int i=0;i<m;i++){
		scanf("%d",&t);
		s[i].q=t;
	}
	for(int i=0;i<n;i++){
		scanf("%d %d",&a[i].e,&a[i].i);
		a[i].f=(a[i].e+a[i].i)/2;
		a[i].id=i;
		for(int j=0;j<k;j++){
			scanf("%d",&t);
			a[i].v.push_back(t);
		}
	}
	sort(a,a+n,cmp);
	int r=1;
	a[0].r=1;
	for(int i=1;i<n;i++){
		if(a[i].f!=a[i-1].f)r=i+1;
		else if(a[i].f==a[i-1].f&&a[i].e!=a[i-1].e)r=i+1;
		a[i].r=r; 
		//printf("%d %d %d %d\n",a[i].f,a[i].e,a[i].i,a[i].r);
	}
	int q=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<k;j++){
			q=a[i].v[j];
			if(s[q].q){
				s[q].v.push_back(a[i]);
				s[q].q--;
				break;
			}
			else if(!s[q].q){
				if(s[q].v.size()){
					if((s[q].v.back()).r==a[i].r){
						s[q].v.push_back(a[i]);
						break;
					}
				}
			}
		}
	}
	vector<int> res;
	for(int i=0;i<m;i++){
		if(!s[i].v.size()){
			printf("\n");
			continue;
			}
		else 
		{
			res.clear();
			for(int j=0;j<s[i].v.size();j++)
				res.push_back(s[i].v[j].id);
			
			sort(res.begin(),res.end()); 
		}
		for(int j=0;j<res.size();j++){
			if(j<res.size()-1)printf("%d ",res[j]);
			else printf("%d\n",res[j]); 
			} 
	}
	return 0;
}

