//
//  A1110.cpp
//  DataStructure
//
//  Created by vancasola on 2020/4/5.
//  Copyright © 2020 none. All rights reserved.
//  11:32 11:51
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <iostream>
#include <set>
using namespace std;
struct node{
    int x;
    int lc,rc;
}v[25];
void layerorder(int r){
    queue<int> q;
    q.push(r);
    int x=r;
    bool f=true;
    while(!q.empty()){
        x=q.front();
        q.pop();
        if(!f&&(v[x].lc!=-1||v[x].rc!=-1)){
            printf("NO %d",r);
            return;
        }
        if(v[x].rc==-1||v[x].lc==-1)f=false;
        if(v[x].lc==-1&&v[x].rc!=-1){
            printf("NO %d",r);
            return;
        }
        if(v[x].lc!=-1)q.push(v[x].lc);
        if(v[x].rc!=-1)q.push(v[x].rc);
    }
    printf("YES %d",x);
}
void layerorder1(int r){
    queue<int> q;
    q.push(r);
    int x=r;
    bool f=true;
    while(!q.empty()){
        x=q.front();
        q.pop();
        if(!f&&v[x].lc!=-1){
            printf("NO %d",r);
            return;
        }
        if(v[x].lc==-1)f=false;
        if(!f&&v[x].rc!=-1){
            printf("NO %d",r);
            return;
        }
        if(v[x].rc==-1)f=false;
        if(v[x].lc!=-1)q.push(v[x].lc);
        if(v[x].rc!=-1)q.push(v[x].rc);
    }
    printf("YES %d",x);
}
int main(){
    int n;
    string a,b;
    set<int> s;
    cin>>n;
    for(int i=0;i<n;i++)
        s.insert(i);
    for(int i=0;i<n;i++){
        cin>>a>>b;
        if(a[0]=='-')v[i].lc=-1;
        else {
            v[i].lc=stoi(a);
            s.erase(v[i].lc);
        }
        if(b[0]=='-'){
            v[i].rc=-1;
            s.erase(v[i].rc);
        }
        else{
            v[i].rc=stoi(b);
            s.erase(v[i].rc);
        }
    }
    layerorder1(*s.begin());
    return 0;
}
*/
