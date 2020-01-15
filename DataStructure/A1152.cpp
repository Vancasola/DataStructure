//
//  A1152.cpp
//  DataStructure
//
//  Created by vancasola on 2020/1/15.
//  Copyright © 2020 none. All rights reserved.
//  9:15 9:36
/*
#include <stdio.h>
#include <string>
#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
bool isPrime(int a){
    if(a<=1)return false;
    for(int i=2;i<=sqrt(a);i++)
        if(a%i==0)return false;
    return true;
}
int main(){
    string sub, str;
    int L,n,a;
    cin>>L>>n;
    cin>>str;
    for(int i=0;i<=(L-n);i++){
        sub=str.substr(i,n);
        a=stoi(sub);
        if(isPrime(a)){cout<<sub;return 0;}
    }
    cout<<"404";
    return 0;
}
*/
