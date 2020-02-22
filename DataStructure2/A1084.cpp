
//
//  A1084.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/22.
//  Copyright © 2020 none. All rights reserved.
//  10:11 10:23
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
int main(){
    set<char> s;
    vector<char> v;
    string s1,s2;
    cin>>s1>>s2;
    int p=0,q=0;
    while(p<s1.size() && q<s2.size()){
        if(s1[p]>='a' && s1[p]<='z')s1[p]=s1[p]-'a'+'A';
        if(s2[q]>='a' && s2[q]<='z')s2[q]=s2[q]-'a'+'A';
        if(s1[p]==s2[q]){
            p++;
            q++;
        }
        else{
            if(s.find(s1[p])==s.end()){
                v.push_back(s1[p]);
                s.insert(s1[p]);
            }
            p++;
        }
    }
    for(;p<s1.size();p++){
        if(s1[p]>='a' && s1[p]<='z')s1[p]=s1[p]-'a'+'A';
        if(s.find(s1[p])==s.end()){
            v.push_back(s1[p]);
            s.insert(s1[p]);
        }
    }
    for(int i=0;i<v.size();i++){
        printf("%c",v[i]);
    }
    return 0;
}
*/
