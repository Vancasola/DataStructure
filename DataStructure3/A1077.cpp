//
//  A1077.cpp
//  DataStructure
//
//  Created by vancasola on 2020/4/15.
//  Copyright © 2020 none. All rights reserved.
//
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <unordered_map>
using namespace std;
int main(){
    string  s[105];
    stack<char> st;
    int n,m=99999999;
    scanf("%d\n",&n);
    for(int i=0;i<n;i++){
        getline(cin,s[i]);
        if(s[i].size()<m)m=s[i].size();
    }
    int p=0;
    while(m--){
        char c=s[0][s[0].size()-p-1];
        bool f=false;
        for(int i=1;i<n;i++){
            if(s[i][s[i].size()-p-1]!=c){
                f=true;
                break;
            }
        }
        if(f)break;
        else st.push(c);
        p++;
    }
    if(st.empty()){
        printf("nai");
        return 0;
    }
    while(!st.empty()){
        printf("%c",st.top());
        st.pop();
    }
    return 0;
}
*/
