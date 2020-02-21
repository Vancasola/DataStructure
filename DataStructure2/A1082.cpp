//
//  A1082.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/21.
//  Copyright © 2020 none. All rights reserved.
//  7:55 8:26
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <queue>
#include <cmath>
using namespace std;
string a[3]={"Qian","Bai","Shi"};
string b[10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
int main(){
    string s;
    cin>>s;
    if(s[0]=='-'){
        printf("Fu");
        s=s.substr(1,s.size());
    }
    for(int i=0;i<s.size();i++){
        //cout<<s[i]-'0';
        printf(" %s",b[s[i]-'0'].c_str());
        if(i==s.size()-1)break;
        if((s.size()-i-1)==8){
            printf(" Yi");
        }
        else if((s.size()-i-1)==4){
            printf(" Wan");
        }
        else{
            int t=(i-1)%4;
            printf(" %s",a[t].c_str());
        }
        
    }
    return 0;
}
//Fu yi Yi er Qian san Bai si Shi wu Wan liu Qian qi Bai ba Shi jiu
*/
