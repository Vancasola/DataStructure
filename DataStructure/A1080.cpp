//
//  A1080.cpp
//  DataStructure
//
//  Created by vancasola on 2020/1/30.
//  Copyright © 2020 none. All rights reserved.
//  11:07 12:03 12:16
/*
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
struct student{
    int ge,gi,g;
    int id,r,p;
    vector<int> app;
};
int n,m,k,t;
vector<student> v(40010),a(40010);
vector<int> quota(105);
vector<vector<int>> s(105);
bool cmp(const student & a,const student &b){
    if(a.g!=b.g)return a.g>b.g;
    return a.ge>b.ge;
}
bool cmp2(const student & a,const student &b){
    return a.id<b.id;
}
int main(){
    cin>>n>>m>>k;
    for(int i=0;i<m;i++)
        scanf("%d",& quota[i]);
    for(int i=0;i<n;i++){
        scanf("%d %d",&v[i].ge,&v[i].gi);
        v[i].g=(v[i].ge+v[i].gi)/2;
        v[i].id=i;
        for(int j=0;j<k;j++){
            scanf("%d", &t);
            v[i].app.push_back(t);
        }
    }
    sort(v.begin(),v.begin()+n,cmp);
    int r=1;
    v[0].r=r;
    for(int i=1;i<n;i++){
        if(v[i].g!=v[i-1].g){
            r=i+1;
            v[i].r=r;
        }
        else if(v[i].ge!=v[i-1].ge){
            r=i+1;
            v[i].r=r;
        }
        else
            v[i].r=r;
    }
    for(int i=0;i<v.size();i++)
        a[i]=v[i];
    sort(a.begin(),a.begin()+n,cmp2);
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            int goal=v[i].app[j];
            if(!quota[goal])continue;
            if(s[goal].size()<quota[goal]){
                s[goal].push_back(v[i].id);
                break;
            }
            int last=s[goal][s[goal].size()-1];
            if(s[goal].size() && a[last].r==v[i].r){
                s[goal].push_back(v[i].id);
                break;
            }
        }
    }
    for(int i=0;i<s.size();i++)sort(s[i].begin(),s[i].end());
    for(int i=0;i<m;i++){
        if(!s[i].size()){
            printf("\n");
            continue;
        }
        for(int j=0;j<s[i].size()-1;j++)
            printf("%d ",s[i][j]);
        printf("%d\n",s[i][s[i].size()-1]);
    }
    return 0;
}
*/
