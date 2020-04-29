//
//  A1073.cpp
//  DataStructure
//
//  Created by vancasola on 2020/4/29.
//  Copyright © 2020 none. All rights reserved.
//
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <unordered_map>
using namespace std;
int main(){
    string s,s1,s2;
    bool sign1=false,sign2=false;
    cin>>s;
    if(s[0]=='+')sign1=true;
    for(int i=1;i<s.size();i++){
        if(s[i]=='E'){
            s1=s.substr(1,i-1);
            if(s[i+1]=='+')sign2=true;
            s2=s.substr(i+2,s.size());
        }
    }
    int p=0,e=stoi(s2);
    if(stoi(s2)==0){
        cout<<s1<<endl;
        return 0;
    }
    if(!sign1)printf("-");
    if(sign2){
        bool f=false;
        for(int i=0;i<s1.size();i++){
            if(p<=e){
                if(s1[i]!='.'){
                    printf("%c",s1[i]);
                    p++;
                }
            }
            else {
                if(!f&&i!=s1.size()){
                    printf(".");
                    f=true;
                }
                printf("%c",s1[i]);
                p++;
            }
        }
            for(;p<=e;p++){
                printf("0");
            }
        }
    else{
        printf("0.");
        for(int p=1;p<e;p++){
            printf("0");
        }
        for(int i=0;i<s1.size();i++){
            if(s1[i]=='.')continue;
            printf("%c",s1[i]);
        }
    }
    return 0;
}
*/
