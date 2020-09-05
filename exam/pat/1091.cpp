#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <vector>
#include <queue>
#include <cmath>
#include <map>
#include <stack>
#include <unordered_map>
#include <set>
#include <algorithm> 
using namespace std;
int a[65][1300][130]={0};
bool vis[65][1300][130]={false};
int n,m,l,T,t;
int sum=0;
struct node{
	int x,y,z;
	node(int a,int b,int c){
		z=a,x=b,y=c;
	}
};
void bfs(int z,int x,int y){
	queue<node> q;
	node t= node(z,x,y);
	q.push(t);
	vis[z][x][y]=true;
	while(!q.empty()){
		t=q.front();
		sum++;
		q.pop();
		x=t.x;
		y=t.y;
		z=t.z;
	if(z+1<l&&!vis[z+1][x][y]&&a[z+1][x][y]){
		q.push(node(z+1,x,y));
		vis[z+1][x][y]=true;
	}
	if(z-1>=0&&!vis[z-1][x][y]&&a[z-1][x][y]){
		q.push(node(z-1,x,y));
		vis[z-1][x][y]=true;
	}
	if(x+1<n&&!vis[z][x+1][y]&&a[z][x+1][y]){
		q.push(node(z,x+1,y));
		vis[z][x+1][y]=true;
	}
	if(x-1>=0&&!vis[z][x-1][y]&&a[z][x-1][y]){
		q.push(node(z,x-1,y));
		vis[z][x-1][y]=true;
	}
	if(y+1<m&&!vis[z][x][y+1]&&a[z][x][y+1]){
		q.push(node(z,x,y+1));
		vis[z][x][y+1]=true;
	}
	if(y-1>=0&&!vis[z][x][y-1]&&a[z][x][y-1]){
		q.push(node(z,x,y-1));
		vis[z][x][y-1]=true;
	}
	
	}
	
}
int main(){
	cin>>n>>m>>l>>T;
	for(int i=0;i<l;i++){
		for(int j=0;j<n;j++){
			fill(vis[i][j],vis[i][j]+130	,false);
			for(int k=0;k<m;k++){
				scanf("%d",&a[i][j][k]);
			}
		}
	}
	int ans=0;
	for(int i=0;i<l;i++){
		for(int j=0;j<n;j++){
			for(int k=0;k<m;k++){
				if(!vis[i][j][k]&&a[i][j][k]){
					sum=0;
					bfs(i,j,k);
					//cout<<sum<<endl;
					if(sum>=T)ans+=sum;
				}
			}
		}
	}
	cout<<ans;
	return 0; 
}

