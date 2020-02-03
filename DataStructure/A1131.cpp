//
//  A1131.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/3.
//  Copyright © 2020 none. All rights reserved.
//  10:20
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <map>
using namespace std;
const int maxn=10010,inf=99999;
vector<int> G[maxn];
bool vis[maxn]={false};
set<int> s[maxn];
int n,m,k,t;
int src,dst;
int Min=inf,mintran=inf;
vector<int> line[101],pre[maxn],tmp,v;
map<pair<int,int>, int> link;
void dfs(int x,int sum){
    vis[x]=true;
    if(x==src){
        int tran=0;
        int id=link[pair<int,int>(tmp[0],tmp[1])];
        for(int i=1;i<tmp.size();i++){
            if(link[pair<int,int>(tmp[i-1],tmp[i])]!=id)tran++;
            id=link[pair<int,int>(tmp[i-1],tmp[i])];
        }
        if(Min>sum || v.size()>tmp.size()){
            v=tmp;
            Min=sum;
            mintran=tran;
        }
        else if(Min==sum && tran<mintran){
            v=tmp;
            mintran=tran;
        }
        return;
    }
    for(int i=0;i<G[x].size();i++){
        if(!vis[G[x][i]]){
            tmp.push_back(G[x][i]);
            vis[G[x][i]]=true;
            dfs(G[x][i],sum+1);
            vis[G[x][i]]=false;
            tmp.pop_back();
        }
    }
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>k;
        for(int j=0;j<k;j++){
            scanf("%d",&t);
            s[t].insert(i+1);
            line[i].push_back(t);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<line[i].size()-1;j++){
            int x=line[i][j];
            int y=line[i][j+1];
            link[pair<int,int>(x,y)]=i+1;
            link[pair<int,int>(y,x)]=i+1;
            G[x].push_back(y);
            G[y].push_back(x);
        }
    }
    cin>>m;
    for(int j=0;j<m;j++){
        cin>>src>>dst;
        v.clear();
        tmp.clear();
        fill(vis,vis+maxn,false);
        Min=inf;
        tmp.push_back(dst);
        vis[dst]=true;
        dfs(dst,0);
        vis[dst]=false;
        for(int i=0;i<v.size()/2;i++)swap(v[i],v[v.size()-1-i]);
        printf("%d\n",Min);
        int start,id;
        start=-1;
        id=-1;
            for(int i=1;i<v.size();i++){
                if(link[pair<int,int>(v[i-1],v[i])]!=id){
                    if(id!=-1)printf("Take Line#%d from %04d to %04d.\n",id,start,v[i-1]);
                    start=v[i-1];
                    id=link[pair<int,int>(start, v[i])];
                }
            }
        printf("Take Line#%d from %04d to %04d.\n",id,start,dst);
    }
    return 0;
}
*/
