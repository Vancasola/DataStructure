//
//  A1069.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/19.
//  Copyright © 2020 none. All rights reserved.
//  4:53 5:12
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s1,s2,s3;
    int a,b,c;
    cin>>s1;
    while(s1.size()<4)s1.push_back('0');
    s2=s1;
    for(int i=0;;i++){
        sort(s1.begin(),s1.end(),greater<char>());
        sort(s2.begin(),s2.end(),less<char>());
        a=stoi(s1);
        b=stoi(s2);
        c=a-b;
        bool f=true;
        for(int j=0;j<s1.size();j++)if(s1[j]!=s1[0]){f=false;break;}
        if(f){printf("%04d - %04d = %04d\n",a,b,c);break;}
        s3=to_string(c);
        printf("%04d - %04d = %04d\n",a,b,c);
        if(c==6174){
            break;
        }
        s1=to_string(c);
        while(s1.size()<4)s1.push_back('0');
        s2=s1;
    }
    
    return 0;
}
*/
