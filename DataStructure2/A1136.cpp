//
//  A1136.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/27.
//  Copyright © 2020 none. All rights reserved.
//  11:16 11:30
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <stack>
#include <queue>
#include <algorithm>
#include <unordered_map>
using namespace std;
bool judge(string s){
    for(int i=0;i<s.size()/2;i++){
        if(s[i]!=s[s.size()-i-1])
            return false;
    }
    return true;
}
string add(string a,string b){
    if(b.size()>a.size())swap(a, b);
    stack<char> s;
    string str;
    int r=0,sum=0;;
    for(int i=a.size()-1;i>=0;i--){
        sum+=(a[i]+b[i])-2*'0';
        s.push(sum%10+'0');
        sum/=10;
    }
    if(sum){
        s.push(sum%10+'0');
        sum/=10;
    }
    while(!s.empty()){
        str+= s.top();
        s.pop();
    }
    return str;
}
int main(){
    string s,s1;
    long long a,b,cnt=0;;
    cin>>s;
    //cout<<judge(s);
    while(!judge(s)){
        if(cnt==10){
            printf("Not found in 10 iterations.\n");
            return 0;
        }
        s1=s;
        reverse(s1.begin(), s1.end());
        printf("%s + %s = ",s.c_str(),s1.c_str());
        s=add(s,s1);
        printf("%s\n",s.c_str());
        cnt++;
    }
    printf("%s is a palindromic number.\n",s.c_str());
    return 0;
}
*/
