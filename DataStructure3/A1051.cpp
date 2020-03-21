//
//  A1051.cpp
//  DataStructure
//
//  Created by vancasola on 2020/3/21.
//  Copyright © 2020 none. All rights reserved.
//
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <unordered_map>
using namespace std;
int main(){
    int m,n,k,t;
    cin>>m>>n>>k;
    for(int i=0;i<k;i++){
        vector<int> v;
        stack<int> s;
        for(int j=0;j<n;j++){
            scanf("%d",&t);
            v.push_back(t);
        }
        int q=1;
        bool f=true;
        for(int p=0;p<n;){
            if(!s.empty()&& s.top()==v[p]){
                s.pop();
                p++;
            }
            else if(s.empty() || (s.top()<q&&s.size()<m)){
                s.push(q);
                q++;
            }
            else if(s.top()>v[p]||s.size()==m){
                f=false;
                printf("NO\n");
                break;
            }
        }
        if(f)printf("YES\n");
    }
    return 0;
}
*/
