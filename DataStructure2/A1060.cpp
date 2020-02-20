//
//  A1060.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/17.
//  Copyright © 2020 none. All rights reserved.
//  11:27 11:47 11:58/
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <cmath>
using namespace std;
int k;
string convert(string s){
    string ans="0.";
    //qiandaoling
    bool f=false;
    for(int i=0;i<s.size();i++){
        if(s[i]=='.')continue;
        if(s[i]!='0'){f=true;break;}
    }
    if(!f){
        int p=0;
        for(;p<k;p++)ans+='0';
        ans+="*10^0";
        return ans;
    }
    else {
        for(int i=0;i<s.size();i++){
            if(s[i]!='0'){
                s=s.substr(i,s.size());
                break;
            }
        }
    }
    if(s[0]=='.'){
        int p=0,i=0,d=-1;
        for(int i=1;i<s.size();i++)if(s[i]!='0'){d=i;break;}
        for( i=d;i<s.size() && p<k;i++){
                ans+=s[i];
                p++;
        }
        for(;p<k;p++)ans+="0";
        ans+="*10^";
        if(d==-1)ans+=to_string(0);
        else ans+=to_string(-1*(d-1));
    }
    else{
        int p=0,i=0,d=-1;
        for(int i=0;i<s.size();i++)if(s[i]=='.'){d=i;break;}
        for( i=0;i<s.size() && p<k;i++){
            if(s[i]=='.'){continue;}
            else {
                ans+=s[i];
                p++;
            }
        }
        for(;p<k;p++)ans+="0";
        ans+="*10^";
        if(d==-1)ans+=to_string(s.size());
        else ans+=to_string(d);
    }
    return ans;
}
int main(){
    string s1,s2,a,b;
    cin>>k>>s1>>s2;
    a=convert(s1);
    b=convert(s2);
    if(a==b){
        cout<<"YES"<<' '<<a;
    }
    else {
        cout<<"NO"<<' '<<a<<' '<<b;
    }
    return 0;
}
*/
