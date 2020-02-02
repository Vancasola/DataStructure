
//
//  A1150.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/2.
//  Copyright © 2020 none. All rights reserved.
//
/*
#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;
const int maxn=220;
int inf=9999999;
int n,k,m,e,t[maxn];
int G[maxn][maxn];
bool vis[maxn]={false};
int Min=inf,Minid=0;
void tsp(int id){
    printf("Path %d: ",id);
    int sum=0;
    bool f=false;
    fill(vis,vis+maxn,false);
    for(int i=0;i<m-1;i++){
        //cout<<sum<<endl;
        int x=t[i],y=t[i+1];
        //cout<<x<<' '<<y<<' '<<G[x][y]<<endl;
        if(G[x][y]==inf){
            printf("NA (Not a TS cycle)\n");
            return;
        }
        else{
            if(!vis[y]){
                vis[y]=true;
            }
            else if(vis[y] && y!=t[0]){
                f=true;
            }
            sum+=G[x][y];
        }
    }
    //cout<<sum<<endl;
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            printf("%d (Not a TS cycle)\n",sum);
            return;
        }
    }
    if(t[0]!=t[m-1]){printf("%d (Not a TS cycle)\n",sum);return;}
    if(Min>sum){Min=sum;Minid=id;}
    if(f)printf("%d (TS cycle)\n",sum);
    else if(!f)printf("%d (TS simple cycle)\n",sum);
}
int main(){
    cin>>n>>e;
    for(int i=0;i<=n;i++)fill(G[i],G[i]+maxn,inf);
    int a,b,d;
    for(int i=0;i<e;i++){
        scanf("%d %d %d",&a,&b,&d);
        G[a][b]=G[b][a]=d;
    }
    cin>>k;
    for(int i=0;i<k;i++){
        cin>>m;
        for(int j=0;j<m;j++){
            scanf("%d",&t[j]);
        }
        tsp(i+1);
    }
    printf("Shortest Dist(%d) = %d\n",Minid,Min);
    return 0;
}
*/
