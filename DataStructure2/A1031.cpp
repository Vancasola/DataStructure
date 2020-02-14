
//
//  A1031.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/14.
//  Copyright © 2020 none. All rights reserved.
//  9:55 10:03;
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool modify(string& s){
    bool f=false;
    for(int i=0;i<s.size();i++){
        if(s[i]=='l'){s[i]='L';f=true;}
        else if(s[i]=='0'){s[i]='%';f=true;}
        else if(s[i]=='1'){s[i]='@';f=true;}
        else if(s[i]=='O'){s[i]='o';f=true;}
    }
    return f;
}
int main(){
    int n;
    string a,b;
    vector<pair<string,string>> v;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;;
        if(modify(b)){
            v.push_back(pair<string, string>(a,b));
        }
    }
    if(v.size()){
        printf("%d\n",v.size());
        for(int i=0;i<v.size();i++){
            printf("%s %s\n",v[i].first.c_str(),v[i].second.c_str());
        }
    }
    else{
        if(n<=1)printf("There is %d account and no account is modified",n);
        else printf("There are %d accounts and no account is modified",n);
    }
    return 0;
}

*/
