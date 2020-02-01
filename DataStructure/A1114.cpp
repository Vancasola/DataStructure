//
//  A1114.cpp
//  DataStructure
//
//  Created by vancasola on 2020/1/31.
//  Copyright © 2020 none. All rights reserved.
//  10:09 10:29
/*
#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
struct Data{
    int id;
    vector<int> s;
    double estate,area;
}data[1010];
struct family{
    int id;
    int member=0;
    double estate=0,area=0;
    double ae=0,aa=0;
    bool flag=false;
}ans[10000];
bool vis[10000]={false};
int father[10000];
bool cmp(const family& a,const family& b){
    if(a.aa!=b.aa)return a.aa>b.aa;
    return a.id<b.id;
}
void init(){
    for(int i=0;i<10000;i++)father[i]=i;
}
int findfather(int x){
    while(x!=father[x])
        x=father[x];
    return x;
}
void un(int x,int y){
    int fx,fy;
    fx=findfather(x);
    fy=findfather(y);
    if(fx>fy)father[fx]=fy;
    else father[fy]=fx;
}
int main(){
    int n;
    int id,f,m,k,c;
    int e,a;
    cin>>n;
    init();
    for(int i=0;i<n;i++){
        cin>>id>>f>>m>>k;
        data[i].id=id;
        data[i].s.push_back(id);
        if(f!=-1)data[i].s.push_back(f);
        if(m!=-1)data[i].s.push_back(m);
        for(int j=0;j<k;j++){
            cin>>c;
            data[i].s.push_back(c);
        }
        cin>>e>>a;
        data[i].estate+=e;
        data[i].area+=a;
        vis[id]=true;
        for(int j=1;j<data[i].s.size();j++){
            un(data[i].s[j],data[i].id);
            vis[data[i].s[j]]=true;
        }
    }
    vector<family> r;
    int x,cnt=0;
    for(int i=0;i<n;i++){
        x=findfather(data[i].id);
        ans[x].id=x;
        ans[x].area+=data[i].area;
        ans[x].estate+=data[i].estate;
    }
    for(int i=0;i<10000;i++){
        if(vis[i]){
            x=findfather(i);
            ans[x].member++;
            if(i==x){
                cnt++;
                ans[x].flag=true;
            }
        }
    }
    for(int i=0;i<10000;i++)
        if(ans[i].flag)
            r.push_back(ans[i]);
    for(int i=0;i<r.size();i++){
        r[i].aa=r[i].area/r[i].member;
        r[i].ae=r[i].estate/r[i].member;
    }
    sort(r.begin(),r.end(),cmp);
    cout<<cnt<<endl;
    for(int i=0;i<cnt;i++)
        printf("%04d %d %.3lf %.3lf\n",r[i].id,r[i].member,r[i].ae,r[i].aa);
    return 0;
}
*/
