//
//  A1096.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/23.
//  Copyright © 2020 none. All rights reserved.
//  2:25 2:35
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <unordered_map>
using namespace std;
int main(){
    int n,t;
    vector<int> v,m;
    cin>>n;
    t=1;
    for(int i=2;i<=sqrt(n)+1;i++){
        t=1;
        for(int j=i;j<=sqrt(n)+1;j++){
            t*=j;
            if(n%t)break;
            v.push_back(j);
        }
        t=1;
        if(m.size()<v.size())m=v;
        v.clear();
    }
    if(m.size()<v.size())m=v;

    if(!m.size()){
        printf("%d\n%d",1,n);
        return 0;
    }
    printf("%d\n",m.size());
    for(int i=0;i<m.size();i++){
        if(i)printf("*%d",m[i]);
        else printf("%d",m[i]);
    }
    return 0;
}

*/
