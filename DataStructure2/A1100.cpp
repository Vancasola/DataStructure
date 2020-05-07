//
//  A1100.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/23.
//  Copyright © 2020 none. All rights reserved.
//  9:36 10:00 11:29 11:31
/*
#include <stdio.h> 
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
#include <unordered_map>
using namespace std;
string a[13]={"tret","jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
string b[13]={"","tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
int main(){
    int n;
    string s;
    cin>>n;
    getchar();
    for(int i=0;i<n;i++)
    {
        getline(cin,s);
        if(s=="0"){
            printf("tret\n");
            continue;
        }
        if(s[0]>='0'&&s[0]<='9'){
            int x=stoi(s);
            if(x/13)printf("%s",b[x/13].c_str());
            if(x/13 && x%13)printf(" ");
            if(x%13)printf("%s",a[x%13].c_str());
        }
        else{
            int sum=0;
            string y;
            for(int j=0;j<s.size();j++){
                if(s[j]!=' ')y+=s[j];
                else {
                    for(int k=1;k<13;k++){
                        if(y==b[k]){
                            //cout<<y<<endl;
                            sum+=13*k;
                            break;
                        }
                    }
                    y.clear();
                }
            }
                if(y.size()){
                    for(int k=1;k<13;k++){
                        if(y==b[k]){
                            sum+=13*k;
                            y.clear();
                            break;
                        }
                    }
                    if(y.size()){
                        for(int k=0;k<13;k++){
                            if(y==a[k]){
                                sum+=k;
                                y.clear();
                                break;
                            }
                        }
                    }
                }
            printf("%d",sum);
        }
        printf("\n");
    }
    return 0;
}
*/
