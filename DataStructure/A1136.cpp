
//
//  A1136.cpp
//  DataStructure
//
//  Created by vancasola on 2020/1/15.
//  Copyright © 2020 none. All rights reserved.
//  6:53 7:11 7:42
/*
#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <vector>
#include <cstdlib>
using namespace std;
bool judge(string s){
    for(int i=0;i<s.size()/2;i++)
    if(s[i]!=s[s.size()-i-1])return false;
    return true;
}
string convert(string str){
    stack<char> s;
    string b;
    for(int i=str.size()-1;i>=0;i--)
        b+=str[i];
    return b;
}
string add(string a,string b){
    string c,tmp;
    int t=0;
    char ch;
    for(int i=a.size()-1;i>=0;i--){
        t=a[i]+b[i]-2*'0'+t;
        ch=t%10+'0';
        tmp+=ch;
        t/=10;
    }
    if(t){
        ch=t%10+'0';
        tmp+=ch;
    }
    for(int i=tmp.size()-1;i>=0;i--)
        c+=tmp[i];
    return c;
}
int main(){
    string a,b,c;
    cin>>a;
    if(judge(a)){
        printf("%s is a palindromic number.",a.c_str());
        return 0;
    }
    for(int i=0;i<10;i++){
        //b=convert(a);
        b=a;
        reverse(b.begin(), b.end());
        c=add(a,b);
        printf("%s + %s = %s\n",a.c_str(),b.c_str(),c.c_str());
        if(judge(c)){
            printf("%s is a palindromic number.",c.c_str());
            return 0;
        }
        a=c;
    }
    printf("Not found in 10 iterations.");
    return 0;
}
*/
