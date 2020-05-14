//
//  A1015.cpp
//  DataStructure
//
//  Created by vancasola on 2020/5/14.
//  Copyright © 2020 none. All rights reserved.
//  5:00 5:09
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <iostream>
#include <unordered_map>
using namespace std;
bool isp(int x){
    if(x<=1)return false;
    for(int i=2;i<=sqrt(x);i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int x,r;
    while(1){
        scanf("%d",&x);
        if(x<0)break;
        scanf("%d",&r);
        if(!isp(x)){
            printf("No\n");
            continue;
        }
        string s;
        while(x){
            s+=x%r+'0';
            x/=r;
        }
        x=0;
        int t=1;
        for(int i=s.size()-1;i>=0;i--){
            x+=t*(s[i]-'0');
            t*=r;
        }
        if(isp(x))printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
*/
