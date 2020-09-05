//
//  7-4 Replacement Selection.cpp
//  DataStructure
//
//  Created by vancasola on 2020/8/14.
//  Copyright © 2020 none. All rights reserved.
//
/*
#include <stdio.h>
#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
priority_queue<int,vector<int>,greater<int>> p,q;
int n,k;
int main()
{
    cin>>n>>k;
    int a[100005],index=0,cnt=0;
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    while(cnt<k&&index<n){
        q.push(a[index++]);
        cnt++;
    }
    vector<int> v[50];
    int tag=0;
    while(index<n){
        if(q.empty()){
            while(p.size()){
                q.push(p.top());
                p.pop();
            }
            tag++;
        }
        if(q.empty())break;
        int x=q.top();
        v[tag].push_back(x);
        q.pop();
        if(a[index]>=x){
            q.push(a[index]);
        }
        else {
            p.push(a[index]);
        }
        index++;
    }
    while(q.size()||p.size()){
        while(!q.empty()){
            int x=q.top();
            v[tag].push_back(x);
            q.pop();
        }
        while(p.size()){
            q.push(p.top());
            p.pop();
        }
        tag++;
    }
    for(int i=0;i<=tag;i++)sort(v[i].begin(),v[i].end());
    for(int i=0;i<=tag;i++){
        for(int j=0;j<v[i].size();j++){
            if(j<v[i].size()-1)printf("%d ",v[i][j]);
            else printf("%d\n",v[i][j]);
        }
    }
    return 0;
}

*/
#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int c,cnt=0;
    int sum=0,last;
    vector<int> v;
    while(1){
        cin>>c;
        if(c==-1)break;
        sum+=c;
        cnt++;
        v.push_back(c);
    }
    sort(v.begin(),v.end(),greater<int>());
    for(int i=0;i<v.size();i++)
        printf("%d %d\n",i+1,v[i]);
    return 0;
}
/*
85
75
76
100
100
99
85
100
57
88
100
95
84
100
70
81
100
100
100
90
72
70
97
100
85
99
85
88
100
97
100
64
92
83
82
100
83
100
91
52
100
100
87
89
71
85
97
64
64
100
65
85
85
80
90
85
92
65
80
68
75
91
87
100
92
100
79
97
88
23
73
86
88
83
86
88
100
87
100
92
100
88
100
70
97
66
100
63
72
85
72
83
92
100
88
66
83
91
86
83
67
98
100
58
94
60
96
96
85
*/
