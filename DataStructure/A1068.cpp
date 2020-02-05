//
//  A1068.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/5.
//  Copyright © 2020 none. All rights reserved.
//  10:37 11:09
/*
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int n,m;
int a[10010];
vector<int> v,ans;
bool f=false;
void dfs(int p,int sum){
    if(f)return;
    v.push_back(a[p]);
    if(sum==m){
        if(!f)ans=v;
        f=true;
        return ;
    }
    else if(sum>m)return ;
    for(int i=p;i<n-1;i++)
    {
        if(sum+a[i+1]>m)break;
        dfs(i+1,sum+a[i+1]);
        if(f)return;
    }
    v.pop_back();
    return;
}
int main(){
    int sum=0;
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    if(sum<m){printf("No Solution");return 0;}
    sort(a,a+n);
    for(int i=0;i<n;i++){
        if(a[i]>m)break;
        dfs(i,a[i]);
        if(f)break;
    }
    for(int i=0;i<ans.size();i++){
        if(i<ans.size()-1)printf("%d ",ans[i]);
        else printf("%d",ans[i]);
    }
    if(!f)printf("No Solution");
    return 0;
}
*/
