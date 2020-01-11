//
//  A1116.cpp
//  DataStructure
//
//  Created by vancasola on 2020/1/11.
//  Copyright © 2020 none. All rights reserved.
//  9:44 10:09
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <cmath>
using namespace std;
bool isPrime(int n){
    if(n<=1)return false;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)return false;
    return true;
}
int main(){
    int n;
    string s;
    char a[10];
    unordered_map<string, int> rank;
    vector<bool> vis(10010,false);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        scanf("%s",a);
        rank[a]=i+1;
    }
    cin>>n;
    for(int i=0;i<n;i++)
    {
        scanf("%s",a);
        printf("%s: ",a);
        if(rank.find(a)==rank.end()){printf("Are you kidding?\n");continue;}
        if(vis[rank[a]]){printf("Checked\n");continue;}
        vis[rank[a]]=true;
        if(rank[a]==1)printf("Mystery Award");
        else if(isPrime(rank[a]))printf("Minion");
        else printf("Chocolate");
        printf("\n");
    }
    return 0;
}
*/
