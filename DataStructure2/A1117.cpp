//
//  A1117.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/25.
//  Copyright © 2020 none. All rights reserved.
//  3:50 4:06 5:17 5:35
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <queue>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main(){
    int n,t;
    vector<int> v;
    cin>>n;
    for(int i=0;i<n;i++){
        scanf("%d",&t);
        v.push_back(t);
    }
    sort(v.begin(),v.end(),greater<int>());
    for(int e=0;e<n;e++){
        int sum=0;
        for(int i=0;i<n;i++){
            if(v[i]>e)sum++;
            else break;
        }
        if(sum<e)
        {
            printf("%d\n",e-1);
            return 0;
        }
    }
//    int e=0;
//    while(e < n && v[e] > e+1){
//        e++;
//    }
//    printf("%d",e);
    return 0;
}
*/
