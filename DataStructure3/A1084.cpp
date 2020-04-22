//
//  A1084.cpp
//  DataStructure
//
//  Created by vancasola on 2020/4/22.
//  Copyright © 2020 none. All rights reserved.
//
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <set>
#include <unordered_map>
using namespace std;
void cap(string &s){
    for(int i=0;i<s.size();i++)
        if(s[i]>='a'&&s[i]<='z')
            s[i]='A'+s[i]-'a';
}
int main(){
    string a,b;
    vector<char> v;
    set<char> s,g;
    cin>>a>>b;
    cap(a);
    cap(b);
    for(int i=0;i<b.size();i++)
        s.insert(b[i]);
    for(int i=0;i<a.size();i++){
        if(s.find(a[i])==s.end()&&g.find(a[i])==g.end()){
            g.insert(a[i]);
            v.push_back(a[i]);
        }
    }
    for(int i=0;i<v.size();i++)
        printf("%c",v[i]);
    return 0;
}
*/
