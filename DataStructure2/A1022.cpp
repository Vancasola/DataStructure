//
//  A1022.cpp
//  DataStructure
//
//  Created by vancaosla on 2020/2/11.
//  Copyright © 2020 none. All rights reserved.
//  1:09 1:26
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
int n,m;
struct book{
    string id,title,author,pushlish,year;
    set<string> key;
}b[10010];
vector<string> v;
void convert(set<string>& key, string s){
    string t;
    for(int i=0;i<s.size();i++){
        if(s[i]!=' '){
            t+=s[i];
        }
        else {
            key.insert(t);
            t.clear();
        }
    }
    key.insert(t);
}
int main(){
    cin>>n;
    getchar();
    string key,t;
    int num;
    for(int i=0;i<n;i++){
        getline(cin,b[i].id);
        getline(cin,b[i].title);
        getline(cin,b[i].author);
        getline(cin,key);
        getline(cin,b[i].pushlish);
        getline(cin,b[i].year);
        convert(b[i].key, key);
    }
    cin>>m;
    for(int i=0;i<m;i++){
        scanf("%d: ",&num);
        getline(cin,t);
        cout<<num<<": "<<t<<endl;
        v.clear();
        if(num==1){
            for(int j=0;j<n;j++){
                if(b[j].title==t){
                    v.push_back(b[j].id);
                }
            }
        }
        else if(num==2){
            for(int j=0;j<n;j++){
                if(b[j].author==t){
                    v.push_back(b[j].id);
                }
            }
        }
        else if(num==3){
            for(int j=0;j<n;j++){
                if(b[j].key.find(t)!=b[j].key.end()){
                    v.push_back(b[j].id);
                }
            }
        }
        else if(num==4){
            for(int j=0;j<n;j++){
                if(b[j].pushlish==t){
                    v.push_back(b[j].id);
                }
            }
        }
        else if(num==5){
            for(int j=0;j<n;j++){
                if(b[j].year==t){
                    v.push_back(b[j].id);
                }
            }
        }
        sort(v.begin(), v.end());
        if(v.size())
        for(int j=0;j<v.size();j++){
            cout<<v[j]<<endl;
        }
        else cout<<"Not Found"<<endl;
    }
    return 0;
}
*/
