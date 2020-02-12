//
//  A1024.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/12.
//  Copyright © 2020 none. All rights reserved.
//  9:25 9:41 10:52 11:20
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
using namespace std;
bool judge(string a){
    for(int i=0;i<a.size()/2;i++){
        if(a[i]!=a[a.size()-1-i])
            return false;
    }
    return true;
}
string rev(string a){
    string s;
    for(int i=a.size()-1;i>=0;i--)s+=a[i];
    return s;
}
string add( string a, string b ){
    if(b.size()>a.size())swap(a,b);
    stack<char> s,s2;
    string c;
    int r=0;
    for(int i=0;i<b.size();i++)s.push(b[i]);
    for(int i=a.size()-1;i>=0;i--){
        if(s.empty())r=r+a[i]-'0';
        else {
            r=r+s.top()+a[i]-2*'0';
            s.pop();
        }
        s2.push(r%10+'0');
        r/=10;
    }
    while(r){
        s2.push(r%10+'0');
        r/=10;
    }
    while(!s2.empty()){
        c+=s2.top();
        s2.pop();
    }
    return c;
}
int main(){
    long long n,k;
    string s1,s2;
    cin>>n>>k;
    s1=to_string(n);
    long long p=k;
    bool f=false;
    for(int i=0;i<k;i++){
        if(judge(s1)){
            f=true;
            p=i;
            break;
        }
        else{
            s2=rev(s1);
            s1=add(s1,s2);
        }
    }
    printf("%s\n%lld",s1.c_str(),p);
    return 0;
}
*/
