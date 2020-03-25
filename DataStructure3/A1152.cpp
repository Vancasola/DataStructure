//
//  A1152.cpp
//  DataStructure
//
//  Created by vancasola on 2020/3/25.
//  Copyright © 2020 none. All rights reserved.
//  3:01 3:07
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <unordered_map>
#include <iostream>
#include <set>
using namespace std;
bool isprime(int x){
    if(x<=1)return false;
    if(x==2)return true;
    for(int i=2;i<=sqrt(x);i++)
        if(x%i==0)return false;
    return true;
}
int main(){
    int n,m;
    string s,str;
    cin>>n>>m>>s;
    for(int i=0;i<=n-m;i++){
        str=s.substr(i,m);
        if(isprime(stoi(str))){
            cout<<str;
            return 0;
        }
    }
    cout<<"404";
    return 0;
}
*/
