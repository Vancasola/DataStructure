//
//  A1035.cpp
//  DataStructure
//
//  Created by vancasola on 2020/5/15.
//  Copyright © 2020 none. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <unordered_map>
#include <iostream>
#include <set>
using namespace std;
int main(){
    int n,m=0;
    string id,s;
    vector<pair<string,string>>v;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>id>>s;
        bool f=false;
        for(int j=0;j<s.size();j++){
            switch(s[j]){
                case '1':{
                    s[j]='@';
                    f=true;
                    break;
                }
                case '0':{
                    s[j]='%';
                    f=true;
                    break;
                }
                case 'l':{
                    s[j]='L';
                    f=true;
                    break;
                }
                case 'O':{
                    s[j]='o';
                    f=true;
                    break;
                }
                default:1;
            }
        }
        if(f){
            m++;
            v.push_back(pair<string,string>(id,s));
        }
    }
    if(!m){
        if(n==1){
            printf("There is 1 account and no account is modified\n");
        }
        else{
            printf("There are %d accounts and no account is modified\n",n);
        }
    }
    else{
        printf("%d\n",m);
        for(int i=0;i<m;i++){
            printf("%s %s\n",v[i].first.c_str(),v[i].second.c_str());
        }
    }
    return 0;
}

