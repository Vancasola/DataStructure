//
//  A1112.cpp
//  DataStructure
//
//  Created by vancasola on 2020/4/14.
//  Copyright © 2020 none. All rights reserved.
//  4:20 4:35
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
int main(){
    int k,sum=1;
    string s;
    set<char> st,black;
    cin>>k>>s;
    for(int i=1;i<s.size();i++){
        if(s[i]==s[i-1]&&sum<k){
            sum++;
        }
        else{
            if(sum==k&&black.find(s[i-1])==black.end())st.insert(s[i-1]);
            else {
                black.insert(s[i-1]);
                st.erase(s[i-1]);
            }
            sum=1;
        }
    }
    if(sum==k&&black.find(s.back())==black.end())st.insert(s.back());
    else {
        black.insert(s.back());
        st.erase(s.back());
    }
    set<char> tmp=st;
    for(int i=0;i<s.size();i++){
        if(tmp.find(s[i])!=tmp.end()){
            printf("%c",s[i]);
            tmp.erase(s[i]);
        }
    }
    printf("\n");
    for(int i=0;i<s.size();i++){
        if(st.find(s[i])!=st.end()){
            printf("%c",s[i]);
            i+=k-1;
        }
        else printf("%c",s[i]);
    }
    return 0;
}
*/
