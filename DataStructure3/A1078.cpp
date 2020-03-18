//
//  A1078.cpp
//  DataStructure
//
//  Created by vancasola on 2020/3/17.
//  Copyright © 2020 none. All rights reserved.
//  10:40 10:46
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <stack>
#include <unordered_map>
using namespace std;
bool isprime(int x){
    if(x<=1)return false;
    if(x==2)return true;
    for(int i=2;i<=sqrt(x);i++)
        if(x%i==0)return false;
    return true;
}
int main()
{
    int s,m,t,p;
    bool h[10005]={false};
    cin>>s>>m;
    while(!isprime(s))s++;
    for(int i=0;i<m;i++){
        scanf("%d",&t);
        bool f=false;
        for(int j=0;j<=s;j++){
            p=(t+j*j)%s;
            if(!h[p]){
                f=true;
                if(!i)printf("%d",p);
                else printf(" %d",p);
                h[p]=true;
                break;
            }
        }
        if(!f && !i)printf("-");
        else if(!f && i)printf(" -");
        
    }
    
    return 0;
}
*/
