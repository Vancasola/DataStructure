//
//  A1048.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/15.
//  Copyright © 2020 none. All rights reserved.
//  4:23 4:29 4:37/
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
int main(){
    int n,m,t;
    bool f=false,v[1001]={false};
    cin>>n>>m;
    for(int i=0;i<n;i++){
        scanf("%d",&t);
        v[t]=true;
    }
    //sort(a,a+n);
    for(int i=1;i<1001;i++){
        if(v[i] && v[m-i] && i!=m-i){
            printf("%d %d",i,m-i);
            f=true;
        }
        if(f)break;
    }
    if(!f)printf("No Solution\n");
    return 0;
}
*/
