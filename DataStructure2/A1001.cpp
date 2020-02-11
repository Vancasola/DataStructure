//
//  A1001.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/11.
//  Copyright © 2020 none. All rights reserved.
//  11:05 11:13
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
using namespace std;
int main(){
    int a,b,c;
    string str;
    stack<char> s;
    scanf("%d %d",&a,&b);
    c=a+b;
    str=to_string(c);
    for(int i=str.size()-1,j=0;i>=0;i--,j++){
        if(j&&j%3==0){
            s.push(',');
            if(i==0 && str[i]=='-')s.pop();
        }
        s.push(str[i]);
    }
    while(!s.empty()){
        printf("%c",s.top());
        s.pop();
    }
    return 0;
}
*/
