//
//  A1117.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/2.
//  Copyright © 2020 none. All rights reserved.
//  3:46
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace  std;
int main(){
    vector<int> v(100100);
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        scanf("%d",&v[i]);
    sort(v.begin(), v.begin()+n,greater<int>());
    int e=0;
    while(e < n && v[e] > e+1) e++;
    printf("%d",e);
    return 0;
}
*/
