//
//  A1087.cpp
//  DataStructure
//
//  Created by vancasola on 2020/1/30.
//  Copyright © 2020 none. All rights reserved.
//  3:11 4:18
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;
const int inf=99999999;
int G[205][205];
vector<bool> vis(205);
vector<int> d(205),happy(205),pre[205];
vector<int> ans,tmp;
unordered_map<string,int> ctoi;
unordered_map<int,string> itoc;
string src,dst;
int n,k,t,p=0,x,y;
int lowcost=0,lowcostnum=0,happymax=0;
string str,a,b;
void dijstra(int s){
    fill(d.begin(),d.end(),inf);
    d[s]=0;
    for(int i=0;i<n;i++){
        int u=-1,Min=inf;
        for(int j=0;j<n;j++){
            if(!vis[j] && d[j]<Min){
                u=j;
                Min=d[j];
            }
        }
        if(u==-1)return ;
        vis[u]=true;
        for(int v=0;v<n;v++){
            if(!vis[v] && G[u][v]!=inf){
                if(d[u]+G[u][v]<d[v])
                {
                    d[v]=d[u]+G[u][v];
                    pre[v].clear();
                    pre[v].push_back(u);
                }
                else if(d[u]+G[u][v]==d[v])
                    pre[v].push_back(u);
            }
        }
    }
}
void dfs(int x){
    if(x==0){
        int sum=0,id;
        lowcostnum++;
        for(int i=0;i<tmp.size();i++){
            id=tmp[i];
            sum+=happy[id];
        }
        if(sum>happymax){
            happymax=sum;
            ans=tmp;
            ans.push_back(0);
        }
        return;
    }
    tmp.push_back(x);
    for(int i=0;i<pre[x].size();i++)
        dfs(pre[x][i]);
    tmp.pop_back();
}
int main(){
    
    for(int i=0;i<205;i++)
        fill(G[i],G[i]+205,inf);
    fill(vis.begin(),vis.end(),false);
    cin>>n>>k>>src;
    dst="ROM";
    ctoi[src]=0;
    itoc[0]=src;
    for(int i=1;i<n;i++){
        cin>>str>>t;
        ctoi[str]=i;
        itoc[i]=str;
        happy[i]=t;
    }
    for(int i=0;i<k;i++){
        cin>>a>>b>>t;
        x=ctoi[a];
        y=ctoi[b];
        G[x][y]=G[y][x]=t;
    }
    dijstra(0);
    dfs(ctoi[dst]);
    //cout<<ans.size()<<endl;
    for(int i=0;i<ans.size()-1;i++)
        lowcost+=G[ans[i]][ans[i+1]];
    printf("%d %d %d %d\n",lowcostnum,lowcost,happymax,happymax/(ans.size()-1));
    for(int i=ans.size()-1;i>0;i--)
        cout<<itoc[ans[i]]<<"->";
    cout<<itoc[ans[0]]<<endl;
    return 0;
}
*/
