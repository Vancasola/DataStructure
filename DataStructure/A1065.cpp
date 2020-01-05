//
//  A1065.cpp
//  DataStructure
//
//  Created by vancasola on 2020/1/5.
//  Copyright © 2020 none. All rights reserved.
//  10:22
/*
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    long long a,b,c,t;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b>>c;
        printf("Case #%d: ",i+1);
        t=a+b;
        if(a>0 && b>0 && t<0)printf("true\n");
        else if(a<0 && b<0 && t>=0)printf("false\n");
        else if(t>c)
        {
            printf("true\n");
        }
        else printf("false\n");
    }
    return 0;
}
/*
