//
//  A1152.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/28.
//  Copyright © 2020 none. All rights reserved.
//  9:44 9:54
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
#include <cmath>
#include <unordered_map>
using namespace std;
bool isprime(int x){
    if(x<=1)return false;
    if(x==2)return true;
    for(int i=2;i<=sqrt(x);i++)
        if(x%i==0)return false;
    return true;
}

int main(){
    int n,m,x;
    string s,t;
    cin>>n>>m>>s;
    if(m>s.size()){printf("404");return 0;}
    for(int i=0;i<=s.size()-m;i++){
        t=s.substr(i,m);
        x=stoi(t);
        if(isprime(x)){
            cout<<t;
            return 0;
        }
    }
    cout<<"404";
    return 0;
}
*/
