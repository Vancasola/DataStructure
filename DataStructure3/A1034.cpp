//
//  A1034.cpp
//  DataStructure
//
//  Created by vancasola on 2020/4/7.
//  Copyright © 2020 none. All rights reserved.
//  3:42 4:08
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <unordered_map>
#include <iostream>
#include <map>
using namespace std;
const int maxn=10005;
int father[maxn];
void init(){
    for(int i=0;i<maxn;i++)
        father[i]=i;
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
struct gang{
    vector<int> v;
    int sum=0,total=0,m=-1;
    string h;
};
bool cmp(const gang& a,const gang& b){
    return a.h<b.h;
}
int main(){
    unordered_map<string, int> sti,toll;
    unordered_map<int, string> its;
    unordered_map<int, int> toll2;
    string a,b;
    int w,n,k,p=0;
    cin>>n>>k;
    init();
    bool vis[maxn]={false};
    for(int i=0;i<n;i++){
        cin>>a>>b>>w;
        if(sti.find(a)==sti.end()){
            sti[a]=p;
            its[p]=a;
            vis[p]=true;
            p++;
        }
        if(sti.find(b)==sti.end()){
            sti[b]=p;
            its[p]=b;
            vis[p]=true;
            p++;
        }
        un(sti[a],sti[b]);
        toll[a]+=w;
        toll[b]+=w;
        toll2[sti[a]]+=w;
    }
    unordered_map<int,gang> g;
    for(int i=0;i<maxn;i++){
        if(vis[i]){
            int f=findfather(i);
            g[f].v.push_back(i);
            g[f].sum++;
            g[f].total+=toll2[i];
            if(toll[its[i]]>g[f].m){
                g[f].m=toll[its[i]];
                g[f].h=its[i];
            }
        }
    }
    vector<gang> res;
    for(unordered_map<int, gang>::iterator it=g.begin();it!=g.end();it++){
        if(it->second.sum>2 && it->second.total>k){
            res.push_back(it->second);
        }
    }
    printf("%d\n",res.size());
    sort(res.begin(),res.end(),cmp);
    for(int i=0;i<res.size();i++){
        printf("%s %d\n",res[i].h.c_str(),res[i].sum);
    }
    return 0;
}
*/
