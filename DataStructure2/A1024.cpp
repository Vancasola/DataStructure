//
//  A1024.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/12.
//  Copyright © 2020 none. All rights reserved.
//  9:25 9:41
/*
#include <stdio.h>
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
bool judge(string a){
    for(int i=0;i<a.size()/2;i++){
        if(a[i]!=a[a.size()-1-i]){
            return false;
        }
    }
    return true;
}
string rev(string &a){
    string s;
    for(int i=a.size()-1;i>=0;i--)s+=a[i];
    return s;
}
int main(){
    long long n,k;
    string s1,s2;
    cin>>n>>k;
    s1=to_string(n);
    long long p=k;
    bool f=false;
    for(int i=0;i<k;i++){
        s2=rev(s1);
        if(judge(s1) && judge(s2)){
            f=true;
            p=i;
            break;
        }
        else{
            s1=to_string(stoll(s1)+stoll(s2));
        }
    }
    printf("%s\n%lld",s1.c_str(),p);
    return 0;
}*/

