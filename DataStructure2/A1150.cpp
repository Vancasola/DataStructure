//
//  A1150.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/28.
//  Copyright © 2020 none. All rights reserved.
//  3:24 4:02
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <set>
#include <queue>
#include <algorithm>
#include <map>
using namespace std;
int main(){
    int n,m,k,h,t,a,b;
    set<int> s[205];
    map<pair<int,int>,int> p;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        scanf("%d %d %d",&a,&b,&t);
        p[pair<int,int>(a,b)]=t;
        p[pair<int,int>(b,a)]=t;
        s[a].insert(b);
        s[b].insert(a);
    }
    cin>>k;
    int Min=99999999,index=0;
    for(int i=0;i<k;i++){
        cin>>h;
        set<int> st;
        vector<int> v;
        int cnt[205]={0};
        int sum=0;
        int f=1;
        printf("Path %d: ",i+1);
        for(int j=0;j<h;j++){
            scanf("%d",&t);
            cnt[t]++;
            st.insert(t);
            v.push_back(t);
        }
        for(int j=1;j<h;j++){
            if(p.find(pair<int,int>(v[j-1],v[j]))==p.end()){
                f=-1;
            }
            else sum+=p[pair<int,int>(v[j-1],v[j])];
        }
        if(f==-1){
            printf("NA (Not a TS cycle)\n");
            continue;
        }
        if(*v.begin()!=v.back())
        {
            printf("%d (Not a TS cycle)\n",sum);
            continue;
        }
        for(int j=1;j<=n;j++){
            if(j==v[0] || j==v[h-1]){
                if(cnt[j]!=2){
                    f=2;
                }
            }
            else if(cnt[j]>1){
                f=2;
            }
            else if(cnt[j]==0){
                f=-1;
                break;
            }
        }
        if(f==-1)printf("%d (Not a TS cycle)\n",sum);
        if(f==1)printf("%d (TS simple cycle)\n",sum);
        else if(f==2)printf("%d (TS cycle)\n",sum);
        if(f!=-1 && sum<Min){
            Min=sum;
            index=i+1;
        }
    }
    printf("Shortest Dist(%d) = %d",index,Min);
    return 0;
}*/
