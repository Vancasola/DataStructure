//
//  A1010.cpp
//  DataStructure
//
//  Created by vancasola on 2020/3/6.
//  Copyright © 2020 none. All rights reserved.
//  4:14 4:36 4:42
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <iostream>
#include <map>
using namespace std;
bool judge(char ch)
{
    if(ch>='0'&&ch<='9')return true;
    return false;
}
long long convert(string s,long long r){
    long long c=0,t=0,x=1;
    for(int i=s.size()-1;i>=0;i--){
        if(judge(s[i])){
            t=s[i]-'0';
            c+=t*x;
        }
        else{
            t=s[i]-'a'+10;
            c+=t*x;
        }
        x*=r;
    }
    return c;
}
int main(){
    string a,b;
    long long tag,radix,r=-1;
    string str;
    cin>>a>>b>>tag>>radix;
    if(tag==2)swap(a,b);
    long long c=convert(a,radix);
    str=b;
    for(int i=0;i<str.size();i++){
        if(judge(str[i])){
            if(str[i]-'0'>r)
                r=str[i]-'0';
        }
        else if(str[i]-'a'+10>r)
            r=str[i]-'a'+10;
    }
    r++;
    long long left=r,right=max(c+2,r),mid=0,t;
    while(left<right){
        mid=(left+right)/2;
        t=convert(b, mid);
        if(t==c){
            printf("%lld",mid);
            return 0;
        }
        else if(t<0||t>c)
            right=mid;
        else if(t<c)
            left=mid;
    }
    printf("Impossible");
    return 0;
}
*/
