//
//  A1095.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/8.
//  Copyright © 2020 none. All rights reserved.
//
/*
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
struct car{
    string id;
    int in,out,t;
    car(string str,int t1,int t2,int t3){
        id=str;
        in=t1;
        out=t2;
        t=t3;
    }
    car(){}
};
struct Data{
    string id;
    int t;
    bool in;
}data[10010];
bool cmp(const Data& a,const Data&b){
    if(a.id!=b.id)return a.id<b.id;
    else if(a.t!=b.t)return a.t<b.t;
    return a.in>b.in;
}
bool cmp2(const car& a,const car&b){
    return a.in<b.in;
}
int main(){
    int n,m;
    int hh,mm,ss,t,Max=0,id;
    unordered_map<string,int> mp;
    string f;
    vector<car> v;
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++){
        cin>>data[i].id;
        scanf("%d:%d:%d",&hh,&mm,&ss);
        t=3600*hh+60*mm+ss;
        cin>>f;
        if(f=="in"){
            data[i].t=t;
            data[i].in=true;
        }
        else if(f=="out"){
            data[i].t=t;
            data[i].in=false;
        }
    }
    sort(data,data+n,cmp);
    vector<string> ans;
    for(int i=0;i<n-1;i++){
        if(data[i].id==data[i+1].id &&data[i].in==true && data[i+1].in==false ){
            car c(data[i].id,data[i].t,data[i+1].t,data[i+1].t-data[i].t);
            v.push_back(c);
            mp[data[i].id]+=data[i+1].t-data[i].t;
            if(mp[data[i].id]>Max){
                Max=mp[data[i].id];
                ans.clear();
                ans.push_back(data[i].id);
            }
            else if(mp[data[i].id]==Max)
                ans.push_back(data[i].id);
            i++;
        }
    }
    sort(v.begin(),v.end(),cmp2);
    for(int i=0;i<m;i++){
        scanf("%d:%d:%d",&hh,&mm,&ss);
        t=3600*hh+60*mm+ss;
        int sum=0;
        for(int j=0;j<v.size();j++){
            if(v[j].in<=t && v[j].out>t)sum++;
            else if(v[j].in>t)break;
        }
        printf("%d\n",sum);
    }
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++) printf("%s ",ans[i].c_str());
    t=Max;
    printf("%02d:%02d:%02d\n",t/3600,t%3600/60,t%60);
    return 0;
}
*/
