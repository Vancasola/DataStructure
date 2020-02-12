//
//  A1038.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/12.
//  Copyright © 2020 none. All rights reserved.
//  10:28 10:49
/*
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
bool cmp( string a, string b){
    bool f=false;
    if(b.size()>a.size()){
        swap(a,b);
        f=true;
    }
    for(int i=0;i<b.size();i++){
        if(a[i]!=b[i]){
            if(!f)return a[i]<b[i];
            else return a[i]>b[i];
        }
    }
    if(a.size()!=b.size()){
        for(int i=b.size(),j=0;i<a.size(),j<b.size();i++,j++){
            if(a[i]!=b[j]){
                if(!f)return a[i]<b[j];
                else return a[i]>b[j];
            }
        }
    }
    return a[0]<b[0];
}
bool cmp1(const string &a,const string &b){
    return a+b<b+a;
}
int main(){
    string s[10010];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>s[i];
    sort(s, s+n, cmp1);
    int p=n;
    for(int i=0;i<n;i++)
    {
        if(stoi(s[i])!=0){
            p=i;
            break;
        }
    }
    if(p<n)cout<<stoi(s[p]);
    else if(p==n)cout<<0;
    if(p+1<n)
    for(int i=p+1;i<n;i++)
        cout<<s[i];
    return 0;
}

*/
