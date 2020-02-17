//
//  A1071.cpp
//  DataStructure
//
//  Created by vacansola on 2020/2/17.
//  Copyright © 2020 none. All rights reserved.
// 5:19 5:30
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <set>
using namespace std;
bool judge(char ch){
    if(ch>='A'&&ch<='Z')return true;
    else if(ch>='a'&&ch<='z')return true;
    else if(ch>='0'&&ch<='9')return true;
    return false;
}
char lowcase(char ch){
    if(ch>='A'&&ch<='Z')return ch-'A'+'a';
    return ch;
}
int main(){
    string s,t;
    unordered_map<string,int> p;
    getline(cin,s);
    for(int i=0;i<s.size();i++){
        if(judge(s[i])){
            t+=lowcase(s[i]);
        }
        else{
            if(!t.size())continue;
            p[t]++;
            t.clear();
        }
    }
    if(t.size())p[t]++;
    string ans;
    int Max=-1;
    for(unordered_map<string,int>::iterator it=p.begin();it!=p.end();it++){
        if(it->second>Max){
            Max=it->second;
            ans=it->first;
        }
    }
    cout<<ans<<' '<<Max;
    return 0;
}

*/
