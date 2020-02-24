//
//  A1110.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/24.
//  Copyright © 2020 none. All rights reserved.
//  11:26
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
#include <cmath>
#include <set>
#include <unordered_map>
using namespace std;
struct node{
    int x;
    int lc=-1,rc=-1;
}v[25];
int last=0;
bool layerorder(int r){
    queue<int> q,p;
    q.push(r);
    bool f=false,f2=true;
    while(!q.empty()){
        r=q.front();
        last=r;
        q.pop();
        if(f&&(v[r].lc!=-1||v[r].rc!=-1)){
            f2=false;
        }
        if(!f&&v[r].lc==-1){
            f=true;
            if(v[r].rc!=-1){
                f2=false;
            }
        }
        if(!f && v[r].rc==-1){
            f=true;
        }
        if(v[r].lc!=-1)q.push(v[r].lc);
        if(v[r].rc!=-1)q.push(v[r].rc);
    }
    return f2;
}
int main(){
    int n;
    string a,b;
    set<int> s;
    cin>>n;
    for(int i=0;i<n;i++)s.insert(i);
    for(int i=0;i<n;i++){
        cin>>a>>b;
        if(a=="-")v[i].lc=-1;
        else {
            v[i].lc=stoi(a);
            s.erase(v[i].lc);
        }
        if(b=="-")v[i].rc=-1;
        else {
            v[i].rc=stoi(b);
            s.erase(v[i].rc);
        }
    }
    int root=*s.begin();
    if(layerorder(root)){
        printf("YES %d",last);
    }
    else printf("NO %d",root);
    return 0;
}
*/

