//
//  A1114.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/24.
//  Copyright © 2020 none. All rights reserved.
//  4:16 5:01 5:31
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
struct node{
    double num=0;
    double area=0.0;
}v[10005];
struct family{
    double num=0;
    int id=9999999;
    double area=0;
    int cnt=0;
};
bool cmp(const family&a,const family& b){
    if(a.area!=b.area)return a.area>b.area;
    return a.id<b.id;
}
int father[10005];
void init(){
    for(int i=0;i<10005;i++)father[i]=i;
}
int findfather(int x){
    while(x!=father[x])
        x=father[x];
    return x;
}
void un(int a,int b){
    int fa=findfather(a);
    int fb=findfather(b);
    father[fb]=fa;
}
int main(){
    init();
    int n;
    int id,f,m,k,t,num;
    double area=0.0;
    bool vis[10005]={false};
    cin>>n;
    for(int i=0;i<n;i++){
        scanf("%d %d %d %d",&id,&f,&m,&k);
        vis[id]=true;
        if(f!=-1){
            un(id,f);
            vis[f]=true;
        }
        if(m!=-1){
            un(id,m);
            vis[m]=true;
        }
        for(int j=0;j<k;j++){
            scanf("%d",&t);
            un(id,t);
            vis[t]=true;
        }
        scanf("%d %lf",&num,&area);
        v[id].num=num;
        v[id].area=area;
    }
    int x;
    unordered_map<int,family> p;
    vector<family> ans;
    for(int i=0;i<10005;i++){
        if(!vis[i])continue;
        x=findfather(i);
        if(i<p[x].id)p[x].id=i;
        p[x].cnt++;
        p[x].area+=v[i].area;
        p[x].num+=v[i].num;
    }
    for(unordered_map<int,family>::iterator it=p.begin();it!=p.end();it++){
        it->second.area/=it->second.cnt;
        it->second.num/=it->second.cnt;
        ans.push_back(it->second);
    }
    sort(ans.begin(),ans.end(),cmp);
    printf("%d\n",ans.size());
    for(int i=0;i<ans.size();i++){
        printf("%04d %d %.3lf %.3lf\n",ans[i].id,ans[i].cnt,ans[i].num,ans[i].area);
    }
    return 0;
}
*/
 
