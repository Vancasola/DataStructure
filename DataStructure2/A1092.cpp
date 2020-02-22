//
//  A1092.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/22.
//  Copyright © 2020 none. All rights reserved.
//  3:40 3:47
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
int main(){
    unordered_map<char,int> p1,p2;
    string s1,s2;
    cin>>s1>>s2;
    for(int i=0;i<s2.size();i++)p2[s2[i]]++;
    for(int i=0;i<s1.size();i++)p2[s1[i]]--;
    bool f=true;
    int sum1=0,sum2=0;
    for(unordered_map<char,int>::iterator it=p2.begin();it!=p2.end();it++){
        if(it->second>0){
            f=false;
            sum2+=it->second;
        }
        if(it->second<0){
            sum1-=it->second;
        }
    }
    if(f)printf("Yes %d",sum1);
    else printf("No %d",sum2);
    return 0;
}

*/
