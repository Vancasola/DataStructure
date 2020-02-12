//
//  A1021.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/12.
//  Copyright © 2020 none. All rights reserved.
//  10:18 10:52
/*
#include <stdio.h>
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
using namespace std;
const int maxn=10005;
vector<int> v[maxn];
set<int> r;
int n,a,b,Max=0,src,m=0;
bool vis[maxn]={false};
void dfs(int x){
    vis[x]=true;
    for(int i=0;i<v[x].size();i++){
        if(!vis[v[x][i]])dfs(v[x][i]);
    }
}
void DFS(int x,int sum){
    vis[x]=true;
    if(v[x].size()==1&&x!=src){
        if(sum>m)m=sum;
        return ;
    }
    for(int i=0;i<v[x].size();i++){
        if(!vis[v[x][i]])DFS(v[x][i],sum+1);
    }
}
int main(){
    cin>>n;
    if(n==1)printf("1");
    for(int i=1;i<=n-1;i++){
        scanf("%d %d",&a,&b);
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int sum=0;
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            dfs(i);
            sum++;
        }
    }
    if(sum!=1){
        printf("Error: %d components",sum);
        return 0;
    }
    for(int i=1;i<=n;i++){
        if(v[i].size()==1){
            fill(vis,vis+n+10,false);
            src=i;
            m=0;
            DFS(i,1);
            if(m>Max){
                Max=m;
                r.clear();
                r.insert(i);
            }
            else if(m==Max){
                r.insert(i);
            }
        }
    }
    vector<int> ans;
    for(set<int>::iterator it=r.begin();it!=r.end();it++)ans.push_back(*it);
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++)printf("%d\n",ans[i]);
    return 0;
}

*/
