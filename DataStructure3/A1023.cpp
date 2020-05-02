//
//  A1023.cpp
//  DataStructure
//
//  Created by vancasola on 2020/5/2.
//  Copyright © 2020 none. All rights reserved.
//
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <iostream>
#include <set>
#include <unordered_map>
using namespace std;
string multy(string& s){
    string res="";
    stack<int> st;
    int r=0;
    for(int i=s.size()-1;i>=0;i--){
        r+=2*(s[i]-'0');
        st.push(r%10);
        r/=10;
    }
    while(r){
        st.push(r%10);
        r/=10;
    }
    while(!st.empty()){
        res+=st.top()+'0';
        st.pop();
    }
    return res;
}
int main(){
    unordered_map<char,int> p;
    string s1,s2;
    cin>>s1;
    for(int i=0;i<s1.size();i++)
        p[s1[i]]++;
    s2=multy(s1);
    for(int i=0;i<s2.size();i++)
        p[s2[i]]--;
    bool f=true;
    for(unordered_map<char, int>::iterator it=p.begin();it!=p.end();it++)
        if(it->second)f=false;
    if(f)printf("Yes\n");
    else printf("No\n");
    cout<<s2;
    return 0;
}
*/
