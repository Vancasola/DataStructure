//
//  A1028.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/13.
//  Copyright © 2020 none. All rights reserved.
//  10:17 10:23
/*
#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
struct student{
    string id,name;
    int sc;
};
bool cmp1(const student& a,const student& b){
    return a.id<b.id;
}
bool cmp2(const student& a,const student& b){
    if(a.name!=b.name)return a.name<b.name;
    return a.id<b.id;
}
bool cmp3(const student& a,const student& b){
    if(a.sc!=b.sc)return a.sc<b.sc;
    return a.id<b.id;
}
int main(){
    vector<student> v;
    int n,c;
    cin>>n>>c;
    for(int i=0;i<n;i++){
        student st;
        cin>>st.id>>st.name>>st.sc;
        v.push_back(st);
    }
    if(c==1){
        sort(v.begin(), v.end(), cmp1);
    }
    else if(c==2){
        sort(v.begin(), v.end(), cmp2);
    }
    else if(c==3){
        sort(v.begin(), v.end(), cmp3);
    }
    for(int i=0;i<n;i++)
    {
        printf("%s %s %d\n",v[i].id.c_str(),v[i].name.c_str(),v[i].sc);
    }
    return 0;
}
*/
