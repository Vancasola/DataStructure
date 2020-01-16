//
//  A1096.cpp
//  DataStructure
//
//  Created by vancasola on 2020/1/16.
//  Copyright © 2020 none. All rights reserved.
//  3:59 4:33
/*
#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int t=1,begin=1,len=0,j=0,k,maxn=sqrt(n)+1;
    for(int i=2;i<=maxn;i++){
        t=1;
        for( j=i;j<=maxn;j++){
            t*=j;
            if(n%t!=0){break;}
        }
        if(j-i>len){
            len=j-i;
            begin=i;
        }
    }
    if(len==0){cout<<1<<endl<<n;return 0;}
    cout<<len<<endl;
    for( k=begin;k<begin+len-1;k++)printf("%d*",k);
    printf("%d\n",k);
    return 0;
}
*/
