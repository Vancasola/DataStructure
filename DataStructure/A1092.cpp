//
//  A1092.cpp
//  DataStructure
//
//  Created by vancasola on 2020/1/30.
//  Copyright © 2020 none. All rights reserved.
//  2:55 3:09
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;
int main(){
    string s1,s2;
    unordered_map<char,int> a,b;
    int more=0,less=0;
    bool f=true;
    char t;
    cin>>s1>>s2;
    for(int i=0;i<s2.size();i++){
        if(b.find(s2[i])==b.end())
            b[s2[i]]=1;
        else b[s2[i]]++;
    }
    for(int i=0;i<s1.size();i++){
        if(a.find(s1[i])==a.end())
            a[s1[i]]=1;
        else a[s1[i]]++;
    }
    for(unordered_map<char,int>::iterator it=b.begin();it!=b.end();it++){
        t=it->first;
        if(b[t] >a[t]){
            f=false;
            less+=b[t]-a[t];
        }
    }
    if(f)printf("Yes %d",s1.size()-s2.size());
    else printf("No %d",less);
    return 0;
}
*/
