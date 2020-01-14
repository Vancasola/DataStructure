//
//  A1021.cpp
//  DataStructure
//
//  Created by vancasola on 2020/1/14.
//  Copyright © 2020 none. All rights reserved.
//  8:02 8:42 9:11
/*
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<vector<int>> v(10010);
vector<bool> vis(10010,false);
int m=0;
int root;
int dfs(int x,int sum){
    vis[x]=true;
    if(sum>m)m=sum;
    for(int i=0;i<v[x].size();i++)
        if(!vis[v[x][i]])
            dfs(v[x][i],sum+1);
    return m;
}
int main(){
    int n,a,b,cnt=0;
    cin>>n;
    for(int i=1;i<=n-1;i++){
        scanf("%d %d",&a,&b);
        v[a].push_back(b);
        v[b].push_back(a);
    }
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            dfs(i,0);
            cnt++;
        }
    }
    if(cnt>1){
        printf("Error: %d components",cnt);
        return 0;
    }
    int MAX=0;
    vector<int> ans;
    for(int x=1;x<=n;x++){
        fill(vis.begin(),vis.begin()+n+10,false);
        m=0;
        dfs(x, 0);
        if(m>MAX){
            MAX=m;
            ans.clear();
            ans.push_back(x);
        }
        else if(m==MAX)ans.push_back(x);
    }
    sort(ans.begin(),ans.end());
    int i;
    for( i=0;i<ans.size();i++)
        printf("%d\n",ans[i]);
    return 0;
}
*/
