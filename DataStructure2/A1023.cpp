//
//  A1023.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/13.
//  Copyright © 2020 none. All rights reserved.
//  9:30 9:44
/*
#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <stack>
using namespace std;
string convert(string a){
    stack<char> s;
    string b;
    int r=0;
    for(int i=a.size()-1;i>=0;i--){
        r=r+(a[i]-'0')*2;
        s.push(r%10+'0');
        r/=10;
    }
    while(r){
        s.push(r%10+'0');
        r/=10;
    }
    while(!s.empty()){
        b+=s.top();
        s.pop();
    }
    return b;
}
int main(){
    string sa,sb;
    cin>>sa;
    sb=convert(sa);
    map<char,int> p;
    for(int i=0;i<sa.size();i++)p[sa[i]]++;
    bool f=true;
    for(int i=0;i<sb.size();i++)
    {
        if(p[sb[i]])p[sb[i]]--;
        else{
            //cout<<sb[i];
            f=false;
            break;
        }
    }
    if(f)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    cout<<sb;
}

*/
