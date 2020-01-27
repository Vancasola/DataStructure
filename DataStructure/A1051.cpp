//
//  A1051.cpp
//  DataStructure
//
//  Created by vancasola on 2020/1/3.
//  Copyright © 2020 none. All rights reserved.
//  
/*
#include <stdio.h>
#include <iostream>
#include <stack>
using namespace std;
int main()
{
    int m,n,k;
    int a[1010];
    cin>>m>>n>>k;
    for(int i=0;i<k;i++){
        for(int j=0;j<n;j++)scanf("%d",&a[j]);
        stack<int> s;
        bool f=true;
        int p=1;
        for(int j=0;j<n;){
            if(s.empty() || s.top()!=a[j]){
                s.push(p);
                p++;
                if(s.size()>m || p==n+2){
                    f=false;
                    break;
                }
                if(j==n)break;
            }
            if(!f)break;
            while(!s.empty()&&s.top()==a[j]){
                s.pop();
                j++;
                if(j==n)break;
            }
        }
        if(!s.empty())f=false;
        if(f)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
*/
