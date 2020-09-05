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
const int maxn=100005;
int main(){
	int n,t,b=sqrt(maxn);
	int a[maxn]={0},c[maxn]={0};
	string cmd;
	stack<int> s;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>cmd;
		if(cmd=="Push"){
			scanf("%d",&t);
			s.push(t);
			c[t/b]++;
			a[t]++;
		}
		else if(cmd=="Pop"){
			if(s.empty()){
				printf("Invalid\n");
				continue;
			}
			int t=s.top();
			printf("%d\n",s.top());
			s.pop();
			a[t]--;
			c[t/b]--;
		}
		else{
			if(s.empty()){
				printf("Invalid\n");
				continue;
			}
			int m=s.size();
			int mid,cnt=0,num=0;
			if(m%2==0)mid=m/2;
			else if(m%2==1)mid=(m+1)/2;
			for(int i=0;i<=b;i++){
				cnt+=c[i];
				if(cnt>=mid){
					num=i;
					cnt-=c[i];
					break;
				}
			} 
			for(int i=num*b;i<maxn;i++){
				cnt+=a[i];
				if(cnt>=mid){
					printf("%d\n",i);
					break;
				}
			}
			//printf("cnt==%d mid==%d num==%d",cnt,mid,num);
		}
	}
	
	return 0;
}

