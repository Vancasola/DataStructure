//
//  A1131.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/25.
//  Copyright © 2020 none. All rights reserved.
//  4:07 5:17 5:31
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <queue>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <map>
using namespace std;
vector<int> v[10010];
int n,k,t,start,src,dst,last;
const int inf=9999999;
bool vis[10010]={false};
unordered_map<int, int> p;
map<pair<int,int>, int> l;
vector<int> ans,tmp;
int mintran=inf;
void dfs(int x){
    tmp.push_back(x);
    if(x==dst){
        int s1=0;
        int id=l[pair<int,int>(tmp[0],tmp[1])];
        for(int i=1;i<tmp.size();i++){
            if(l[pair<int,int>(tmp[i-1],tmp[i])]!=id)s1++;
            id=l[pair<int,int>(tmp[i-1],tmp[i])];
        }
        if(!ans.size()||   tmp.size()<ans.size()){
            ans=tmp;
            mintran=s1;
        }
        else if(tmp.size()==ans.size()){
            if(s1<mintran){
                mintran=s1;
                ans=tmp;
            }
        }
        tmp.pop_back();
        return;
    }
    for(int i=0;i<v[x].size();i++){
        if(!vis[v[x][i]]){
            vis[v[x][i]]=true;
            //tmp.push_back(v[x][i]);
            dfs(v[x][i]);
            vis[v[x][i]]=false;
        }
    }
    tmp.pop_back();
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        scanf("%d",&k);
        if(k)scanf("%d",&start);
        p[start]++;
        last=start;
        for(int j=1;j<k;j++){
            scanf("%d",&t);
            p[t]++;
            l[pair<int, int>(last,t)]=i+1;
            l[pair<int, int>(t,last)]=i+1;
            v[t].push_back(last);
            v[last].push_back(t);
            last=t;
        }
    }
    cin>>n;
    for(int i=0;i<n;i++){
        scanf("%d %d",&src,&dst);
        fill(vis,vis+10010,false);
        ans.clear();
        tmp.clear();
        mintran=inf;
        dfs(src);
        vis[src]=false;
        printf("%d\n",ans.size()-1);
        start=0;
        for(int j=1;j<ans.size();j++){
            if(l[pair<int,int>(ans[j],ans[j-1])]!=l[pair<int,int>(ans[start],ans[start+1])]){
                printf("Take Line#%d from %04d to %04d.\n",l[pair<int,int>(ans[start],ans[start+1])],ans[start],ans[j-1]);
                start=j-1;
            }
        }
        printf("Take Line#%d from %04d to %04d.\n",l[pair<int,int>(ans[start],ans[start+1])],ans[start],dst);
    }
    return 0;
}
 */
