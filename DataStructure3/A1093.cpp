//
//  A1093.cpp
//  DataStructure
//
//  Created by vancasola on 2020/3/15.
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
#include <map>
using namespace std;
int main(){
    string s;
    int a[100005]={0},b[100005]={0},m=0,n=0,t=0;
    cin>>s;
    for(int i=1;i<s.size();i++){
        if(s[i-1]=='P')m++;
        a[i]=m;
    }
    for(int i=s.size()-2;i>=0;i--){
        if(s[i+1]=='T')n++;
        b[i]=n;
    }
    for(int i=0;i<s.size();i++){
        if(s[i]=='A'){
            t+=a[i]*b[i];
            t%=1000000007;
        }
    }
    printf("%d",t);
    return 0;
}
*/
