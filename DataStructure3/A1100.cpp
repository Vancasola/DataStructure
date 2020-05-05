//
//  A1100.cpp
//  DataStructure
//
//  Created by vancasola on 2020/5/5.
//  Copyright © 2020 none. All rights reserved.
//
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <iostream>
#include <cmath>
using namespace std;
string a[13]={"tret","jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
string b[12]={"tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
int main(){
    int n,t;
    int p[2];
    string s;
    scanf("%d\n",&n);
    for(int i=0;i<n;i++){
        getline(cin,s);
        if(s[0]>='0'&&s[0]<='9'){
            t=stoi(s);
            fill(p,p+2,0);
            int i=0;
            bool f=false;
            if(!t){
                printf("%s\n",a[0].c_str());
                goto l1;
            }
            while(t){
                p[i++]=t%13;
                t/=13;
            }
            if(p[1]){
                printf("%s",b[p[1]-1].c_str());
                f=true;
            }
            if(p[0]){
                if(f)printf(" ");
                printf("%s",a[p[0]].c_str());
            }
            printf("\n");
            l1:1;
        }
        else{
            string s1,s2;
            int sum=0;
            s1=s.substr(0,3);
            if(s.size()>3){
                s2=s.substr(4,3);
                for(int i=0;i<13;i++){
                    if(a[i]==s2){
                        sum+=i;
                        break;
                    }
                }
                for(int i=0;i<12;i++){
                    if(b[i]==s1){
                        sum+=(i+1)*13;
                        break;
                    }
                }
            }
            else{
                bool f=false;
                for(int i=0;i<13;i++){
                    if(a[i]==s1){
                        sum=i;
                        f=true;
                        break;
                    }
                }
                if(!f){
                    for(int i=0;i<12;i++){
                        if(b[i]==s1){
                            sum+=(i+1)*13;
                            break;
                        }
                    }
                }
            }
            printf("%d\n",sum);
        }
    }
    return 0;
}
*/
