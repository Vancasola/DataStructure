//
//  A1034.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/13.
//  Copyright © 2020 none. All rights reserved.
//  10:23 11:18;
/*
#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <map>
using namespace std;
struct gang{
    string head;
    int Max=0,cnt=0,sum=0;
};
bool cmp(const pair<string,int>& a,const pair<string,int>& b){
    return a.first<b.first;
}
int father[2000];
void init(){
    for(int i=0;i<2000;i++)father[i]=i;
}
int findfather(int x){
    while(x!=father[x])
        x=father[x];
    return x;
}
void un(int a,int b){
    int fa=findfather(a);
    int fb=findfather(b);
    father[fa]=fb;
}

int main(){
    int n,k,t,index=0;
    init();
    string sa,sb;
    unordered_map<string,int> p;
    unordered_map<int,string> name;
    unordered_map<int,int> s,r;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>sa>>sb>>t;
        if(p.find(sa)==p.end()){
            p[sa]=index;
            name[index]=sa;
            index++;
        }
        if(p.find(sb)==p.end()){
            p[sb]=index;
            name[index]=sb;
            index++;
        }
        s[p[sa]]+=t;
        s[p[sb]]+=t;
        r[p[sa]]+=t;
        un(p[sa],p[sb]);
    }
    vector<pair<string,int>> ans;
    map<int,gang> g;
    for(int i=0;i<n;i++){
        int root=findfather(i),x=i;
        if(g.find(root)==g.end()){
            gang tmp;
            g[root]=tmp;
        }
        g[root].sum+=r[x];
        g[root].cnt++;
        if(s[x]>g[root].Max){
            g[root].Max=s[x];
            g[root].head=name[x];
        }
    }
    for(map<int,gang>::iterator it=g.begin();it!=g.end();it++){
        if(it->second.cnt>2 && it->second.sum>k){
            ans.push_back(pair<string,int>(it->second.head,it->second.cnt));
        }
    }
    sort(ans.begin(), ans.end(), cmp);
    printf("%d\n",ans.size());
    for(int i=0;i<ans.size();i++){
        printf("%s %d\n",ans[i].first.c_str(), ans[i].second);
    }
    return 0;
}
*/
