//
//  A1137.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/1.
//  Copyright © 2020 none. All rights reserved.
//  4:42
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
struct student{
    string id;
    int g1,g2,g3,g;
    student(string s){
        id=s;
        g1=g2=g3=g=-1;
    }
};
bool cmp(const student&a,const student&b){
    if(a.g!=b.g)return a.g>b.g;
    return a.id<b.id;
}
int main(){
    unordered_map<string,int> mp;
    vector<student> v;
    int n,m,k,s;
    string id;
    cin>>n>>m>>k;
    for(int i=0;i<n;i++){
        cin>>id>>s;
        if(s>=200 && mp.find(id)==mp.end()){
            v.push_back(student(id));
            v[v.size()-1].g1=s;
            mp[id]=v.size()-1;
        }
    }
    for(int i=0;i<m;i++){
        cin>>id>>s;
        if(mp.find(id)!=mp.end())
        v[mp[id]].g2=s;
    }
    for(int i=0;i<k;i++){
        cin>>id>>s;
        if(mp.find(id)!=mp.end())v[mp[id]].g3=s;
    }
    vector<student> ans;
    for(int i=0;i<v.size();i++){
        if(v[i].g3==-1)continue;
        else if(v[i].g2>v[i].g3)
             v[i].g=int(v[i].g2*0.4+v[i].g3*0.6+0.5);
        else
            v[i].g=v[i].g3;
        if(v[i].g>=60)ans.push_back(v[i]);
    }
    sort(ans.begin(),ans.end(),cmp);
    for(int i=0;i<ans.size();i++)
        printf("%s %d %d %d %d\n",ans[i].id.c_str(),ans[i].g1,ans[i].g2,ans[i].g3,ans[i].g);
    return 0;
}
*/
