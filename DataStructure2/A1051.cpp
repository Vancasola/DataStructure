//
//  A1051.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/15.
//  Copyright © 2020 none. All rights reserved.
//  10:21 10:45
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;
int main(){
    stack<int> s;
    int n,m,k,p=1,a[1005];
    cin>>m>>n>>k;
    for(int i=0;i<k;i++){
        for(int j=0;j<n;j++)scanf("%d",&a[j]);
        bool f=true;
        while(!s.empty())s.pop();
        for(int j=0,p=1;j<n;){
            if(!s.empty()&& a[j]==s.top()){
                s.pop();
                j++;
            }
            else if(a[j]>=p && s.size()<m)
                s.push(p++);
            else {f=false;break;}
        }
        if(f)printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}*/ 
