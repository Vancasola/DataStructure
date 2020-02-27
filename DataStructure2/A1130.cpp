//
//  A1130.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/27.
//  Copyright © 2020 none. All rights reserved.
//  4:26
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <stack>
#include <set>
#include <algorithm>
#include <unordered_map>
using namespace std;
struct node{
    string x;
    int lc=-1,rc=-1;
}v[25];
int n;
int cnt=0;
void dfs(int x,int cnt){
    if(cnt&&(v[x].lc!=-1 || v[x].rc!=-1))printf("(");
    if(v[x].lc!=-1)dfs(v[x].lc,cnt+1);
    printf("%s",v[x].x.c_str());
    if(v[x].rc!=-1)dfs(v[x].rc,cnt+1);
    if(cnt&&(v[x].lc!=-1 || v[x].rc!=-1))printf(")");
}
int main(){
    cin>>n;
    char ch;
    set<int> s;
    for(int i=1;i<=n;i++)s.insert(i);
    for(int i=1;i<=n;i++){
        cin>>v[i].x>>v[i].lc>>v[i].rc;
        s.erase(v[i].lc);
        s.erase(v[i].rc);
    }
    dfs(*s.begin(),0);
    return 0;
}
*/
