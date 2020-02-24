//
//  A1108.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/24.
//  Copyright © 2020 none. All rights reserved.
//  3:30 3:42
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
int main(){
    int n,num=0;;
    double sum=0,t;
    string s,str;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        str.clear();
        bool f=true;
        int j=0,cnt=0,d=0;
        if(s[j]=='-'){
            str+=s[j];
            j++;
        }
        for( ;j<s.size();j++){
            if(s[j]>='0'&&s[j]<='9'){
                if(cnt)d++;
                str+=s[j];
            }
            else if(s[j]=='.'){
                if(!cnt){
                    str+=s[j];
                    cnt++;
                }
                else {
                    f=false;
                    break;
                }
            }
            else {
                f=false;
                break;
            }
        }
        if(f){
            t=stof(str);
            if(d>2)f=false;
            if(t<-1000||t>1000)f=false;
        }
        if(!f){
            printf("ERROR: %s is not a legal number\n",s.c_str());
        }
        else{
            sum+=t;
            num++;
        }
    }
    if(num){
        if(num>1)printf("The average of %d numbers is %.2lf\n",num,sum/num);
        else printf("The average of %d number is %.2lf\n",num,sum/num);
    }
    else printf("The average of 0 numbers is Undefined\n");
                return 0;
}
*/
