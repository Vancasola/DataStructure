//
//  A1072.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/18.
//  Copyright © 2020 none. All rights reserved.
//  11:29 12:07
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <set>
using namespace std;
const int inf=99999999,maxn=1100;
int G[maxn][maxn],d[maxn];
bool vis[maxn]={false};
int n,m,k,ds,src,dst;
vector<int> pre[maxn],ans,tmp;
void dijstra(int x){
    fill(vis,vis+maxn,false);
    fill(d,d+maxn,inf);
    d[x]=0;
    for(int i=1;i<=n+m;i++){
        int u=-1,Min=inf;
        for(int j=1;j<=n+m;j++){
            if(!vis[j]&&d[j]<Min){
                Min=d[j];
                u=j;
            }
        }
        if(u==-1)return;
        vis[u]=true;
        for(int v=1;v<=n+m;v++){
            if(!vis[v]&&G[u][v]!=inf){
                if(d[v]>d[u]+G[u][v]){
                    d[v]=d[u]+G[u][v];
                    //pre[v].clear();
                    //pre[v].push_back(u);
                }
                else if(d[v]==d[u]+G[u][v]){
                    //pre[v].push_back(u);
                }
            }
        }
    }
}
int main(){
    for(int i=0;i<maxn;i++)fill(G[i],G[i]+maxn,inf);
    cin>>n>>m>>k>>ds;
    string s1,s2;
    int a,b,c;
    for(int i=0;i<k;i++){
        cin>>s1>>s2>>c;
        if(s1[0]=='G')
            a=n+stoi(s1.substr(1,s1.size()-1));
        else a=stoi(s1);
        if(s2[0]=='G')
            b=n+stoi(s2.substr(1,s2.size()-1));
        else b=stoi(s2);
        G[a][b]=G[b][a]=c;
    }
    int Max=-1,Min=inf;
    int index=-1;
    for(int i=1;i<=m;i++){
        src=n+i;
        dijstra(src);
        bool f=true;
        int sum=0,num=inf;
        for(int j=1;j<=n;j++){
            //cout<<i<<' '<<d[j]<<endl;
            if(d[j]>ds){
                f=false;
                break;
            }
            if(d[j]<num)num=d[j];
            sum+=d[j];
        }
        if(!f)continue;
        //cout<<sum<<' '<<num<<endl;
        if(num>Max){
            Max=num;
            index=src;
            Min=sum;
        }
        else if(num==Max && sum<Min){
            Min=sum;
            index=src;
        }
        //cout<<Max<<' '<<Min<<endl;
    }
    if(index==-1){
        printf("No Solution\n");
        return 0;
    }
    printf("G%d\n",index-n);
    printf("%.1lf %.1lf",1.0*Max,1.0*Min/n);
    return 0;
}
*/
