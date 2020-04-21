//
//  A1040.cpp
//  DataStructure
//
//  Created by vancasola on 2020/4/21.
//  Copyright © 2020 none. All rights reserved.
//
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <unordered_map>
#include <iostream>
#include <map>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int m=1,sum=0;
    for(int i=0;i<s.size();i++){
        sum=1;
            for(int j=1;i-j>=0&&i+j<s.size();j++){
                if(s[i-j]!=s[i+j])break;
                sum+=2;
            }
        if(sum>m)m=sum;
    }
    for(int i=0;i<s.size();i++){
        sum=0;
            for(int j=1;i-j+1>=0&&i+j<s.size();j++){
                if(s[i-j+1]!=s[i+j])break;
                sum+=2;
            }
        if(sum>m)m=sum;
    }
    printf("%d",m);
}
*/
