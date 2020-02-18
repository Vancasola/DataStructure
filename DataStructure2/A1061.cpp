//
//  A1061.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/18.
//  Copyright © 2020 none. All rights reserved.
//  4:18 4:36  5:47   
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
string day[7]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
int main(){
    string s1,s2,s3,s4,a,b;
    char c,d;
    int p=0,i=0;
    cin>>s1>>s2>>s3>>s4;
    for( i=0;i<min(s1.size(),s2.size());i++){
        if(s1[i]==s2[i]){
            if(s1[i]>='A' && s1[i]<='G'){
                c=s1[i];
                break;
            }
        }
    }
    i++;
    for( ;i<min(s1.size(),s2.size());i++){
        if(s1[i]==s2[i]){
            if(s1[i]>='A' && s1[i]<='N'){
                d=s1[i];
                break;
            }
            if(s1[i]>='0' && s1[i]<='9'){
                d=s1[i];
                break;
            }
        }
    }
    for(int i=0;i<min(s3.size(),s4.size());i++){
        if(s3[i]==s4[i])
        if(( s3[i]>='a'&&s3[i]<='z') || (s3[i]>='A'&&s3[i]<='Z')){p=i;break;}
    }
    int y;
    if(isdigit(d))y=d-'0';
    else y=d-'A'+10;
    printf("%s %02d:%02d",day[c-'A'].c_str(),y,p);
    return 0;
}
*/
