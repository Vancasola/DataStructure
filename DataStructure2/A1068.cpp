//
//  A1068.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/15.
//  Copyright © 2020 none. All rights reserved.
//  10:11 10:26
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int n,m,a[10005];
vector<int> v,ans;
bool f=false;
void dfs(int x,int sum){
    if(f)return;
    sum+=a[x];
    v.push_back(a[x]);
    if(sum==m){
        f=true;
        ans=v;
        return;
    }
    if(sum>m)return;
    for(int i=x+1;i<n;i++){
        dfs(i,sum);
        v.pop_back();
    }
}
int main(){
    cin>>n>>m;
    int sum=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    if(sum<m){
        printf("No Solution");
        return 0;
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        if(!f){
            dfs(i,0);
            v.pop_back();
        }
    }
    if(ans.size())
    for(int i=0;i<ans.size();i++){
        if(i!=ans.size()-1)printf("%d ",ans[i]);
        else printf("%d",ans[i]);
    }
    else printf("No Solution");
    return 0;
}
*/
