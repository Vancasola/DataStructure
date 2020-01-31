//
//  A1072.cpp
//  DataStructure
//
//  Created by vancasola on 2020/1/31.
//  Copyright © 2020 none. All rights reserved.
//  4:47 4:58 5:35 7:11
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int inf=9999999;
const int maxn=1050;
int G[maxn][maxn];
int d[maxn];
bool vis[maxn];
vector<int> s,tmp,ans;
vector<int> pre[maxn],ansp[maxn];
double MAX=inf;
int n,m,k,dg,t;
double res=0,Mindis=0;
int SRC,MAXSRC=-1;
void dijstra(int src){
    fill(vis,vis+n+m+10,false);
    fill(d,d+n+m+10,inf);
    d[src]=0;
    for(int i=1;i<=n+m;i++){
        int u=-1,Min=inf;
        for(int j=1;j<=n+m;j++){
            if(!vis[j] && d[j]<Min){
                Min=d[j];
                u=j;
            }
        }
        if(u==-1)return;
        vis[u]=true;
        for(int v=1;v<=n+m;v++){
            if(!vis[v] && G[u][v]!=inf ){
                if(d[u]+G[u][v]<d[v]){
                    d[v] = d[u]+G[u][v];
                    pre[v].clear();
                    pre[v].push_back(u);
                }
                else if(d[u]+G[u][v]==d[v]){
                    pre[v].push_back(u);
                }
            }
        }
    }
}
int main(){
    string s1,s2;
    int x1,x2;
    cin>>n>>m>>k>>dg;
    for(int i=1;i<=n+m+10;i++)fill(G[i],G[i]+n+m+10,inf);
    for(int i=0;i<k;i++){
        cin>>s1>>s2;
        scanf("%d",&t);
        if(s1[0]=='G')
            x1=n+stoi(s1.substr(1,s1.size()));
        else x1=stoi(s1);
        if(s2[0]=='G')
            x2=n+stoi(s2.substr(1,s2.size()));
        else x2=stoi(s2);
        G[x1][x2]=G[x2][x1]=t;
    }
    int MIN=0;
    for(int i=1;i<=m;i++){
        SRC=n+i;
        dijstra(SRC);
        double sum=0;
        int dis=inf;
        bool f=true;
        for(int j=1;j<=n;j++){
            sum+=d[j];
            if(d[j]<dis)dis=d[j];
            if(d[j]>dg)
                f=false;
        }
        if(f){
            if(dis>MIN){
                MIN=dis;
                MAX=(double)sum/(double)n;
                Mindis=(double)dis;
                MAXSRC=SRC;
                res=MAX;
            }
            else if(dis==MIN){
                if((double)sum/n<MAX){
                    MAX=(double)sum/(double)n;
                    Mindis=(double)dis;
                    MAXSRC=SRC;
                    res=MAX;
                }
            }
        }
    }
    if(MAXSRC==-1)printf("No Solution");
    else{
        cout<<"G"<<MAXSRC-n<<endl;
        printf("%.1lf %.1lf",Mindis,res);
    }
    return 0;
}
*/
