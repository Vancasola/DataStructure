//
//  A1116.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/25.
//  Copyright © 2020 none. All rights reserved.
//  3:18 3:30
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
bool isprime(int x){
    if(x<=1)return false;
    if(x==2)return true;
    for(int i=2;i<=sqrt(x);i++){
        if(x%i==0)return false;
    }
    return true;
}
int main(){
    unordered_map<int,pair<bool,int>> p;
    int n,id;
    cin>>n;
    for(int i=1;i<=n;i++){
        scanf("%d",&id);
        p[id].first=false;
        p[id].second=i;
    }
    cin>>n;
    for(int i=0;i<n;i++){
        scanf("%d",&id);
        printf("%04d: ",id);
        if(p.find(id)==p.end()){printf("Are you kidding?\n");continue;}
        else if(p[id].first)printf("Checked\n");
        else if(p[id].second==1)printf("Mystery Award\n");
        else if(isprime(p[id].second))printf("Minion\n");
        else printf("Chocolate\n");
        p[id].first=true;
    }
    return 0;
}
*/
