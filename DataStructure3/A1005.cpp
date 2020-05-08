//
//  A1005.cpp
//  DataStructure
//
//  Created by vancasola on 2020/5/9.
//  Copyright © 2020 none. All rights reserved.
//  12:16

#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <iostream>
#include <map>
using namespace std;
string a[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
int main(){
    string s;
    int sum=0;
    cin>>s;
    for(int i=0;i<s.size();i++){
        sum+=s[i]-'0';
    }
    s=to_string(sum);
    for(int i=0;i<s.size();i++){
        if(i)cout<<' '<<a[s[i]-'0'];
        else cout<<a[s[i]-'0'];
    }
    return 0;
}

