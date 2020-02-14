
//
//  A1031.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/14.
//  Copyright © 2020 none. All rights reserved.
//  4:56 5:13
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n1,n2,n3,t,N;
    string s;
    cin>>s;
    N=s.size();
    for( n2=3;n2<=N;n2++){
        int t=N+2-n2;
        if(t%2)continue;
        else if(t/2<=n2){
            n1=n3=t/2;
            break;
        }
    }
    int p=0,q=s.size()-1;
    for(int i=0;i<n1-1;i++){
        for(int j=0;j<n2-2;j++){
            if(j==0)printf("%c",s[p++]);
            printf(" ");
            if(j==n2-3)printf("%c\n",s[q--]);
        }
    }
    while(p!=q+1){
        printf("%c",s[p++]);
    }
    return 0;
}
*/
