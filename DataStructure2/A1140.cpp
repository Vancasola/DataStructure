//
//  A1140.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/28.
//  Copyright © 2020 none. All rights reserved.
//
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <stack>
#include <queue>
#include <algorithm>
#include <unordered_map>
using namespace std;
int main(){
    int m;
    string s,t;
    cin>>s>>m;
    for(int i=0;i<m-1;i++){
        t.clear();
        t.push_back(s[0]);
        int cnt=1;
        if(s.size()==1){
            t=s;
            t+=to_string(cnt);
            s=t;
            continue;
        }
        for(int j=1;j<s.size();j++){
            if(s[j]!=s[j-1]){
                t+=to_string(cnt);
                t+=s[j];
                cnt=1;
            }
            else cnt++;
        }
        t+=to_string(cnt);
        s=t;
    }
    cout<<s<<endl;
    return 0;
}
*/
