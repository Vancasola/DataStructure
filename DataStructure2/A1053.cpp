//
//  A1053.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/14.
//  Copyright © 2020 none. All rights reserved.
//  10:18 10:35 10:45 11:04
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
struct node{
    int w;
    vector<int> c;
}a[105];
int n,m,s,k,t,id;
vector<vector<int>> v;
vector<int> tmp;
bool cmp( const vector<int> &x, const vector<int>  &y){
    int len=min(x.size(),y.size());
    for(int i=0;i<len;i++){
        if(a[x[i]].w!=a[y[i]].w){
            return a[x[i]].w>a[y[i]].w;
        }
    }
    return a[x[0]].w>a[y[0]].w;
}
void dfs(int x,int sum){
    tmp.push_back(x);
    sum+=a[x].w;
    if(sum>s)return ;
    if(sum==s && a[x].c.size()==0){
        v.push_back(tmp);
    }
    for(int i=0;i<a[x].c.size();i++)
    {
        dfs(a[x].c[i],sum);
        tmp.pop_back();
    }
}
int main(){
    cin>>n>>m>>s;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i].w);
    }
    for(int i=0;i<m;i++){
        cin>>id >>k;
        for(int j=0;j<k;j++){
            scanf("%d",&t);
            a[id].c.push_back(t);
        }
    }
    dfs(0,0);
    sort(v.begin(), v.end(), cmp);
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            if(j!=v[i].size()-1)printf("%d ",a[v[i][j]].w);
            else printf("%d\n",a[v[i][j]].w);
        }
    }
    
    return 0;
}
*/
 
