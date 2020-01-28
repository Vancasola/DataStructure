//
//  A1049.cpp
//  DataStructure
//
//  Created by vancasola on 2020/1/28.
//  Copyright © 2020 none. All rights reserved.
//  4:38
/*
#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(){
    int n=0,sum=0,t=0,x,r;
    string s;
    cin>>x;
    s=to_string(x);
    n=s.size();
    for(int i=n-1;i>=0;i--){
        t=x/pow(10,n-i);
        if(s[i]>='1')t+=1;
        r=pow(10,n-i-1);
        if(s[i]=='1')
            t=(t-1)*r+x%r+1;
        else t*= r;
        sum+=t;
    }
    cout<<sum<<endl;
    return 0;
}
*/
