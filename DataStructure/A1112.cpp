//
//  A1112.cpp
//  DataStructure
//
//  Created by vancasola on 2020/1/11.
//  Copyright © 2020 none. All rights reserved.
//  8:06 9:01
//set is unordered
/*
#include <stdio.h>
#include <string>
#include <iostream>
#include <set>
using namespace std;
int main(){
    int k;
    char last;
    set<char> se,no;
    string s;
    cin>>k;
    getchar();
    getline(cin,s);
    last=s[0];
    int cnt=1;
    for(int i=1;i<s.size();i++)
    {
        if(s[i]!=last){
            if(cnt%k==0){
                if(no.find(last)==no.end())se.insert(last);
            }
            else{
                no.insert(last);
            }
            cnt=1;
            last=s[i];
        }
        else cnt++;
    }
    if(cnt%k==0){
        if(no.find(last)==no.end())se.insert(last);
    }
    else{
        no.insert(last);
    }
    for(set<char>::iterator it=se.begin();it!=se.end();it++)
    {
        if(no.find(*it)!=no.end() )
        se.erase(*it);
    }
    set<char> al;
    for(int i=0;i<s.size();i++)
    {
        if(se.find(s[i])!=se.end())
        {
            if(al.find(s[i])==al.end())
            {cout<<s[i];
             al.insert(s[i]);
            }
        }
    }
    if(se.size())cout<<endl;
    for(int i=0;i<s.size();i++)
    {
        if(se.find(s[i])==se.end()){
            cout<<s[i];
        }
        else{
            cout<<s[i];
            i+=k-1;
        }
    }
    return 0;
}

*/
