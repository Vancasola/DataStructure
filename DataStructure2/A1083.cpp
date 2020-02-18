//
//  A1083.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/18.
//  Copyright © 2020 none. All rights reserved.
//  5:15  5:47
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
struct node{
    string name,id;
    int sc;
};
bool cmp(const node& a,const node& b){
    return a.sc>b.sc;
}
int main(){
    vector<node> v;
    int n,t;
    cin>>n;
    for(int i=0;i<n;i++){
        node x;
        cin>>x.name>>x.id>>x.sc;
        v.push_back(x);
    }
    int l,r;
    scanf("%d %d",&l,&r);
    sort(v.begin(),v.end(),cmp);
    bool f=false;
    for(int i=0;i<v.size();i++){
        if(v[i].sc>=l && v[i].sc<=r){
            f=true;
            printf("%s %s\n",v[i].name.c_str(),v[i].id.c_str());
        }
        //else if(v[i].sc>r)break;
    }
    if(!f)printf("NONE");
    return 0;
}
*/
