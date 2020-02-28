//
//  A1153.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/28.
//  Copyright © 2020 none. All rights reserved.
//  10:00 10:35
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
#include <unordered_map>
using namespace std;
struct node{
    string id,d,s,l;
    int sc=0;
};
bool cmp1(const pair<string,int>&a,const pair<string, int>&b){
    if(a.second!=b.second)return a.second>b.second;
    return a.first<b.first;
}
int main(){
    int n,m,sc,x;
    string str,level,date,site;
    vector<node> v;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        node t;
        cin>>t.id>>t.sc;
        t.l=t.id.substr(0,1);
        t.s=t.id.substr(1,3);
        t.d=t.id.substr(4,6);
        v.push_back(t);
        //cout<<t.l<<t.s<<t.d<<endl;
    }
    for(int i=1;i<=m;i++){
        cin>>x;
        printf("Case %d: %d ",i,x);
        if(x==1){
            char level;
            cin>>level;
            vector<pair<string,int>> p;
            printf("%c\n",level);
            for(int i=0;i<v.size();i++){
                if(v[i].id[0]==level){
                    p.push_back(pair<string,int>(v[i].id,v[i].sc));
                }
            }
            if(p.size()==0){
                printf("NA\n");
            }
            else {
                sort(p.begin(),p.end(),cmp1);
                for(int i=0;i<p.size();i++){
                    printf("%s %d\n",p[i].first.c_str(),p[i].second);
                }
            }
        }
        else if(x==2){
            cin>>site;
            printf("%s\n",site.c_str());
            int cnt=0,sum=0;
            for(int i=0;i<v.size();i++){
                if(v[i].s==site){
                    cnt++;
                    sum+=v[i].sc;
                }
            }
            if(!cnt){
                printf("NA\n");
            }
            else printf("%d %d\n",cnt,sum);
        }
        else{
            cin>>date;
            printf("%s\n",date.c_str());
            unordered_map<string, int> p;
            for(int i=0;i<v.size();i++){
                if(v[i].d==date)p[v[i].s]++;
            }
            if(p.size()==0){
                printf("NA\n");
            }
            else {
                vector<pair<string,int>> ans;
                for(unordered_map<string,int>::iterator it=p.begin();it!=p.end();it++){
                    ans.push_back(pair<string,int>(it->first,it->second));
                }
                sort(ans.begin(),ans.end(),cmp1);
                for(int i=0;i<ans.size();i++){
                    printf("%s %d\n",ans[i].first.c_str(),ans[i].second);
                }
            }
        }
    }
    
    return 0;
}
*/
