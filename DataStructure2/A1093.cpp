//
//  A1093.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/22.
//  Copyright © 2020 none. All rights reserved.
//  10:32 10:46 11:23 11:24
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
int main(){
    string s;
    int a[100005]={0},b[100005]={0},p=0,q=0,sum=0;
        cin>>s;
    for(int i=1;i<s.size();i++){
        if(s[i-1]=='P')a[i]=a[i-1]+1;
        else a[i]=a[i-1];
    }
    for(int i=s.size()-2;i>=0;i--){
        if(s[i+1]=='T')b[i]=b[i+1]+1;
        else b[i]=b[i+1];
    }
    for(int i=1;i<s.size()-1;i++){
        if(s[i]=='A'){
            sum+=(a[i]*b[i]);
            sum%=1000000007;
        }
    }
    printf("%d",sum);
    return 0;
}
*/
