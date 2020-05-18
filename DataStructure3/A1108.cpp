//
//  A1108.cpp
//  DataStructure
//
//  Created by vancasola on 2020/5/18.
//  Copyright © 2020 none. All rights reserved.
//  11:01 12:06
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <iostream>
#include <set>
using namespace std;
int main(){
    int n,m=0;
    double sum=0;
    string t;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>t;
        int dot=0;
        double num=0;
        bool f=true;
        for(int j=0;j<t.size();j++){
            if(t[j]>='0'&&t[j]<='9')
                continue;
            else if(t[j]=='.'){
                int d=0;
                for(int k=j+1;k<t.size();k++){
                    if(t[k]=='.'){
                        f=false;
                        break;
                    }
                    d++;
                }
                if(d>2){
                    f=false;
                    break;
                }
            }
            else if(t[j]!='-') {
                f=false;
                break;
            }
        }
        if(dot>1)f=false;
        if(f){
            num=stof(t);
            if(num>=-1000&&num<=1000){
                sum+=num;
                m++;
            }
            else f=false;
        }
        if(!f)
            printf("ERROR: %s is not a legal number\n",t.c_str());
    }
    if(m==1)
        printf("The average of %d number is %.2lf",m,sum/m);
    else if(m>1)
        printf("The average of %d numbers is %.2lf",m,sum/m);
    else
        printf("The average of 0 numbers is Undefined");
    return 0;
}
*/
