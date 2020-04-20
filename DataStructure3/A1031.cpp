//
//  A1031.cpp
//  DataStructure
//
//  Created by vancasola on 2020/4/20.
//  Copyright © 2020 none. All rights reserved.
//
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
int main()
{
    string str;
    cin>>str;
    int n2=-1,n1=-1,n,t,N=str.size();
    for(n2=3;n2<N;n2++){
        t=N+2-n2;
        if(!(t%2)&&(t/2)>n1&&(t/2)<=n2){
            n1=t/2;
            n=n2;
        }
    }
    int p=0,q=str.size()-1;
    for(int i=0;i<n1-1;i++){
        for(int j=0;j<n;j++){
            if(j==0)printf("%c",str[p++]);
            else if(j==n-1)printf("%c\n",str[q--]);
            else printf(" ");
        }
    }
    for(;p<=q;p++)printf("%c",str[p]);
    return 0;
}
*/
