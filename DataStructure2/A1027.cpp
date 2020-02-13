//
//  A1027.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/13.
//  Copyright © 2020 none. All rights reserved.
//  2:50 3:00
/*
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
using namespace std;
string conver(int x){
    string str;
    stack<char> s;
    while(x){
        if(x%13<10)
            s.push(x%13+'0');
        else s.push(x%13-10+'A');
        x/=13;
    }
    while(s.size()<2)s.push('0');
    while(!s.empty()){
        str+=s.top();
        s.pop();
    }
    return str;
}
int main(){
    int r,g,b;
    string s1,s2,s3;
    cin>>r>>g>>b;
    s1=conver(r);
    s2=conver(g);
    s3=conver(b);
    printf("#%s%s%s",s1.c_str(),s2.c_str(),s3.c_str());
    return 0;
}
*/
