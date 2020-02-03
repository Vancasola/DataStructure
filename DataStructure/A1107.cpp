

//
//  A1107.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/3.
//  Copyright © 2020 none. All rights reserved.
//  9:05 9:32
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int father[1010];
void init(){
    for(int i=0;i<1010;i++)father[i]=i;
    return;
}
int findfather(int x){
    while(x!=father[x])
        x=father[x];
    return x;
}
void un(int x,int y){
    int fx=findfather(x);
    int fy=findfather(y);
    father[fx]=fy;
}
vector<int> v[1010];
int main(){
    init();
    int n,k,t;
    cin>>n;
    for(int i=1;i<=n;i++){
        scanf("%d:",&k);
        for(int j=0;j<k;j++){
            scanf("%d",&t);
            v[t].push_back(i);
        }
    }
    for(int i=0;i<1010;i++){
        if(v[i].size()>1){
            int id=v[i][0];
            for(int j=1;j<v[i].size();j++)un(id,v[i][j]);
        }
    }
    vector<int> ans(1010),res;
    int cnt=0;
    for(int i=1;i<=n;i++){
        t=findfather(i);
        ans[t]++;
    }
    for(int i=1;i<=n;i++){
        if(ans[i]){
            cnt++;
            res.push_back(ans[i]);
        }
    }
    cout<<cnt<<endl;
    sort(res.begin(),res.end(),greater<int>());
    for(int i=0;i<res.size();i++){
        if(i==res.size()-1)printf("%d",res[i]);
        else printf("%d ",res[i]);
    }
    return 0;
}
*/
