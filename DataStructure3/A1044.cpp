//
//  A1044.cpp
//  DataStructure
//
//  Created by vancasola on 2020/3/20.
//  Copyright © 2020 none. All rights reserved.
//
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <iostream>
#include <map>
using namespace std;
int main(){
    int n,m;
    int a[100005]={0},p=1,q=1,sum=0;
    vector<pair<int, int>> v;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    sum=0;
    while(!v.size()){
        q=1;
        p=0;
        sum=0;
        while(p<=n && q<=n){
            if(sum<m){
                p++;
                sum+=a[p];
            }
            else if(sum==m){
                v.push_back(pair<int, int>(q,p));
                p++;
                sum+=a[p];
            }
            else if(sum>m){
                sum-=a[q];
                q++;
            }
        }
        m++;
    }
    for(int i=0;i<v.size();i++)
        printf("%d-%d\n",v[i].first,v[i].second);
    return 0;
}
*/
