//
//  A1073.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/20.
//  Copyright © 2020 none. All rights reserved.
//10:15 10:42
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <cmath>
using namespace std;
int main(){
    string s,s1,s2;
    int i=0;
    int b;
    cin>>s;
    for( i=0;i<s.size();i++){
        if(s[i]=='E')break;
            s1+=s[i];
    }
    for(i+=1;i<s.size();i++){
            s2+=s[i];
    }
    b=stoi(s2);
    if(s[0]=='-')printf("-");
    if(b>0){
        int cnt=0;
        for(int i=1;i<s1.size();i++){
            if(i==2)continue;
            printf("%c",s1[i]);
            if(i>2)cnt++;
            if(cnt==b&&i<s1.size()-1)printf(".");
        }
        while(cnt++<b)printf("0");
    }
    else if(b<0){
        int cnt=0;
        printf("0.");
        while(cnt++<abs(b)-1)printf("0");
        for(int i=1;i<s1.size();i++){
            if(s1[i]=='.')continue;
            printf("%c",s1[i]);
        }

    }
    else {
        if(!b){cout<<s1.substr(1,s1.size()-1) <<endl;return 0;}
    }
    return 0;
}*/
