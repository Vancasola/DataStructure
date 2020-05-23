//
//  A1124.cpp
//  DataStructure
//
//  Created by vancasola on 2020/5/23.
//  Copyright © 2020 none. All rights reserved.
//
/*
#include <stdio.h>
#include <unordered_map>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <iostream>
#include <set>
using namespace std;
int main(){
    int n,m,f;
    cin>>n>>m>>f;
    string s,t;
    set<string> st;
    vector<string> v;
    int p=0;
    for(int i=0;i<n;i++){
        cin>>t;
        v.push_back(t);
    }
    for(int i=f-1;i<n;i++,p++){
        t=v[i];
        if(p<m&&i!=f-1)continue;
        else p=0;
        if(st.find(t)==st.end()){
            cout<<t<<endl;
            st.insert(t);
        }
        else{
            i++;
            for(;i<n;i++){
                t=v[i];
                if(st.find(t)==st.end()){
                    cout<<t<<endl;
                    st.insert(t);
                    break;
                }
            }
        }
    }
    if(!st.size())printf("Keep going...\n");
    return 0;
}
*/
