//
//  A1040.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/14.
//  Copyright © 2020 none. All rights reserved.
//  4:22 4:30
/*
#include <stdio.h>
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int ans=1;
    for(int i=1;i<s.size();i++){
        if(s[i-1]==s[i+1]){
            int sum=1;
            for(int j=1;i+j<s.size() && i-j>=0;j++){
                if(s[i-j]==s[i+j]){
                    sum+=2;
                }
                else break;
            }
            if(sum>ans)ans=sum;
        }
    }
    for(int i=0;i<s.size();i++){
        if(s[i]==s[i+1]){
            int sum=0;
            for(int j=1;i+j<s.size() && i-j+1>=0;j++){
                if(s[i-j+1]==s[i+j]){
                    sum+=2;
                }
                else break;
            }
            if(sum>ans)ans=sum;
        }
    }
     printf("%d",ans);
    return 0;
}
*/
