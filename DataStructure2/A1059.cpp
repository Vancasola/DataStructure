//
//  A1059.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/17.
//  Copyright © 2020 none. All rights reserved.
//  4:36 4:48
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
int main(){
    int n;
    map<int,int> p;
    cin>>n;
    printf("%d=",n);
    if(n==1){
        printf("1");
        return 0;
    }
    for(int i=2;n!=1;){
        //cout<<n<<endl;
        if(n%i==0){
            p[i]++;
            n/=i;
        }
        else i++;
    }
    bool first=true;
    for(map<int,int>::iterator it=p.begin();it!=p.end();it++){
        if(first){first=false;}
        else printf("*");
        if(it->second>1)printf("%d^%d",it->first,it->second);
        else printf("%d",it->first);
    }
}*/
