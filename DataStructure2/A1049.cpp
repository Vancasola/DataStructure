//
//  A1049.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/28.
//  Copyright © 2020 none. All rights reserved.
//  10:35
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <set>
#include <unordered_map>
using namespace std;
int main(){
    int n,r,sum=0;
    string s;
    cin>>s;
    n=stoi(s);
    for(int i=0;i<s.size();i++){
        int r=pow(10,i+1);
        int t;
        if(s[s.size()-1-i]<'1')t=n/r;
        else t=n/r+1;
        r=pow(10,i);
        if(s[s.size()-1-i]=='1')t=(t-1)*r+n%r+1;
        else t*=r;
        sum+=t;
    }
    cout<<sum<<endl;
    return 0;
}
*/
