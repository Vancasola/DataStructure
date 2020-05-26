//
//  A1136.cpp
//  DataStructure
//
//  Created by vancasola on 2020/5/26.
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
#include <unordered_map>
#include <cmath>
#include <set>
using namespace std;
bool judge(string s){
    for(int i=0;i<s.size()/2+1;i++){
        if(s[i]!=s[s.size()-1-i])
            return false;
    }
    return true;
}
string add(string a,string b){
    int m=min(a.size(),b.size()),t=0;
    stack<int> s;
    for(int i=0;i<m;i++){
        t+=a[a.size()-i-1]+b[b.size()-i-1]-2*'0';
        s.push(t%10);
        t/=10;
    }
    while(t){
        s.push(t%10);
        t/=10;
    }
    string r="";
    while(!s.empty()){
        r+=s.top()+'0';
        s.pop();
    }
    return r;
}
int main(){
    string a,b,c;
    cin>>a;
    b=a;
    reverse(b.begin(), b.end());
    for(int i=0;i<10;i++){
        if(judge(a)){
            printf("%s is a palindromic number.\n",a.c_str());
            return 0;
        }
        b=a;
        reverse(b.begin(), b.end());
        c=add(a,b);
        printf("%s + %s = %s\n",a.c_str(),b.c_str(),c.c_str());
        a=c;
    }
    printf("Not found in 10 iterations.");
    return 0;
}
*/
