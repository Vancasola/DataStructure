//
//  A1007.cpp
//  DataStructure
//
//  Created by vancasola on 2020/3/4.
//  Copyright © 2020 none. All rights reserved.
//  4:28 4:35
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <iostream>
#include <map>
using namespace std;
int main(){
    int k,m=-1,l=0,r=0,t;
    bool f=false;
    vector<int> v;
    cin>>k;
    for(int i=0;i<k;i++)
    {
        scanf("%d",&t);
        if(t>=0)f=true;
        v.push_back(t);
    }
    if(!f){printf("%d %d %d",0,*v.begin(),v.back());return 0;}
    int sum=0,last=0;
    for(int i=0;i<v.size();i++){
        sum+=v[i];
        if(sum<0){
            sum=0;
            last=i+1;
        }
        else if(sum>m){
            m=sum;
            l=last;
            r=i;
        }
    }
    if(m!=-1)printf("%d %d %d",m,v[l],v[r]);
    return 0;
}
*/
