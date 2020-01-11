//
//  A1108.cpp
//  DataStructure
//
//  Created by vancasola on 2020/1/11.
//  Copyright © 2020 none. All rights reserved.
//  7:33 8:00
/*
#include <stdio.h>
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
float judge(string s){
    bool dot=false;
    int cnt=0;
    for(int i=0;i<s.size();i++)
    {
        if((s[i]>='0'&&s[i]<='9')||s[i]=='-'||s[i]=='.')
        {
            if(s[i]=='-')continue;
            if(s[i]=='.'){
                if(dot)return -2000;
                dot=true;
                continue;
            }
            if(dot)cnt++;
            if(cnt>2)return -2000;
        }
        else return -2000;
    }
    float a=atof(s.c_str());
    if(a>=-1000&a<=1000)return a;
    return -2000;
}
int main(){
    int n,count=0;;
    float t,sum=0;
    string s;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        t=judge(s);
        if(t==-2000)cout<<"ERROR: "<<s<<" is not a legal number"<<endl;
        else {sum+=t;count++;}
    }
    if(count==1)cout<<"The average of "<<count<<" number is ";
    else cout<<"The average of "<<count<<" numbers is ";
    if(!count)cout<<"Undefined"<<endl;
    else printf("%.2f",sum/(float)count);
    return 0;
}
*/
