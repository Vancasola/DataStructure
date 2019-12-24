//
//  A1001.cpp
//  DataStructure
//
//  Created by vancasola on 2019/12/24.
//  Copyright © 2019 none. All rights reserved.
//
/*
#include <stdio.h>
#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<char> q;
    int a=0,b=0,c=0;
    bool sign=true;
    cin>>a>>b;
    c=a+b;
    if(c<0){
        c*=-1;
        sign=false;
    }
    if(c==0)printf("0");
    int i=0;
    while(c)
    {
        q.push(c%10+'0');
        c/=10;
        i++;
        if(c&&i%3==0)
        {
            q.push(',');
        }
    }
    if(!sign)printf("-");
    while(!q.empty())
    {
        printf("%c",q.top());
        q.pop();
    }
    return 0;
}*/
