//
//  A1021.cpp
//  DataStructure
//
//  Created by vancasola on 2020/4/26.
//  Copyright © 2020 none. All rights reserved.
//  10:38 11:11
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <iostream>
#include <set>
using namespace std;
set<int> s;
vector<int> v[10005],ans;
bool vis[10005]={false};
int n,m=-1;
int a,b,src;
void dfs(int x){
    vis[x]=true;
    for(int i=0;i<v[x].size();i++){
        if(!vis[v[x][i]])
            dfs(v[x][i]);
    }
}
void DFS(int x,int sum){
    vis[x]=true;
    if(v[x].size()==1&&x!=src){
        if(sum>m)m=sum;
    }
    for(int i=0;i<v[x].size();i++){
        if(!vis[v[x][i]])
            DFS(v[x][i],sum+1);
    }
}
int main(){
    cin>>n;
    if(n==1){printf("1");return 0;}
    for(int i=0;i<n-1;i++){
        scanf("%d %d",&a,&b);
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int c=0;
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            dfs(i);
            c++;
        }
    }
    if(c!=1){
        printf("Error: %d components\n",c);
        return 0;
    }
    int Max=-1;
    for(int i=1;i<=n;i++){
        if(v[i].size()==1){
            fill(vis,vis+n+10,false);
            src=i;
            m=0;
            DFS(i,1);
            if(m>Max){
                Max=m;
                s.clear();
                s.insert(i);
            }
            else if(Max==m)s.insert(i);
        }
    }
    for(set<int>::iterator it=s.begin();it!=s.end();it++)ans.push_back(*it);
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        printf("%d\n",ans[i]);
    }
    return 0;
}
*/
