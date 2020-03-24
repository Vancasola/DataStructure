//
//  A1139.cpp
//  DataStructure
//
//  Created by vancasola on 2020/3/24.
//  Copyright © 2020 none. All rights reserved.
//  4:46 5:16
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <iostream>
#include <unordered_map>
#include <set>
using namespace std;
bool cmp(const pair<string,string>&a,const pair<string,string>&b){
    if(a.first!=b.first)return a.first<b.first;
    return a.second<b.second;
}
int main(){
    int n,m,k;
    unordered_map<string,set<string>> p;
    cin>>n>>m;
    string a,b;
    for(int i=0;i<m;i++){
        cin>>a>>b;
        p[a].insert(b);
        p[b].insert(a);
    }
    cin>>k;
    for(int i=0;i<k;i++){
        cin>>a>>b;
        vector<pair<string,string>> v;
        for(set<string>::iterator it1=p[a].begin();it1!=p[a].end();it1++){
            if(*it1!=a && *it1!=b && (((*it1)[0]=='-'&&a[0]=='-')||((*it1)[0]!='-'&&a[0]!='-'))){
                for(set<string>::iterator it2=p[*it1].begin();it2!=p[*it1].end();it2++){
                    if(*it2!=a && *it2!=b && *it2!=*it1 &&p[*it2].find(b)!=p[*it2].end() && (((*it2)[0]=='-'&&b[0]=='-')||((*it2)[0]!='-'&&b[0]!='-'))){
                        string t1,t2;
                        t1=*it1;
                        t2=*it2;
                        if(t1[0]=='-')t1=t1.substr(1,4);
                        if(t2[0]=='-')t2=t2.substr(1,4);
                        //if(t1>t2)swap(t1,t2);
                        v.push_back(pair<string,string>(t1,t2));
                        }
                    }
                }
            }
        sort(v.begin(),v.end(),cmp);
        printf("%d\n",v.size());
        for(int j=0;j<v.size();j++){
            printf("%s %s\n",v[j].first.c_str(),v[j].second.c_str());
        }
    }
    return 0;
}
*/
