//
//  A1077.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/21.
//  Copyright © 2020 none. All rights reserved.
//  9:30 9:47
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <stack>
using namespace std;
int main(){
    string s[105],str;
    stack<char> st;
    int i,n;
    cin>>n;
    getchar();
    int Min=99999999;
    for(int i=0;i<n;i++){
        getline(cin,s[i]);
        if(s[i].size()<Min)Min=s[i].size();
    }
    for(int i=0;i<Min;i++){
        bool f=true;
        for(int j=1;j<n;j++){
            //cout<<s[0][s[0].size()-1-i]<<' '<<s[j][s[j].size()-1-i]<<endl;
            if(s[0][s[0].size()-1-i]!=s[j][s[j].size()-1-i]){
                f=false;
                break;
            }
        }
        //cout<<f<<' '<<s[0][s[0].size()-1-i]<<endl;
        if(f)st.push(s[0][s[0].size()-1-i]);
        else break;
    }
    if(!st.size())printf("nai\n");
    else {
        while(!st.empty()){
            printf("%c",st.top());
            st.pop();
        }
    }
    return 0;
}

*/
