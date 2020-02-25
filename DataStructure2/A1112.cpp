//
//  A1112.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/25.
//  Copyright © 2020 none. All rights reserved.
//  9:40 9:54 11:04 11:13
/*
#include <stdio.h>
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
int main(){
    int n,t=0,cnt=0;
    char ch;
    string s;
    set<char> s1,s2;
    cin>>n>>s;
    ch=s[0];
    cnt=1;
    for(int i=1;i<s.size();i++){
        if(s[i]!=s[i-1]){
            if(cnt%n==0 && s2.find(s[i-1])==s2.end())s1.insert(s[i-1]);
            else if(cnt%n){
                s2.insert(s[i-1]);
                s1.erase(s[i-1]);
            }
            cnt=1;
        }
        else{
            cnt++;
        }
    }
    if(s[s.size()-2]==s[s.size()-1]){
        if(cnt%n==0 && s2.find(s[s.size()-1])==s2.end())s1.insert(s[s.size()-1]);
        else if(cnt%n){
            s2.insert(s[s.size()-1]);
            s1.erase(s[s.size()-1]);
        }
        cnt=1;
    }
    cnt=0;
    s2=s1;
    for(int i=0;i<s.size();i++){
        if(s2.find(s[i])!=s2.end()){
            printf("%c",s[i]);
            s2.erase(s[i]);
        }
    }
    printf("\n");
    for(int i=0;i<s.size();i++){
        if(s1.find(s[i])==s1.end()){
            printf("%c",s[i]);
            cnt=0;
        }
        else {
            if(cnt%n==0)printf("%c",s[i]);
            cnt++;
        }
    }
    return 0;
}
*/
 
