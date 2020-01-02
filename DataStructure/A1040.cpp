//
//  A1040.cpp
//  DataStructure
//
//  Created by vancasola on 2020/1/2.
//  Copyright © 2020 none. All rights reserved.
//
/*
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int j,cnt=0,m=0;
    for(int i=0;i<s.size();i++)
    {
        j=1;
        cnt=1;
        while(1)
        {
            if( j>s.size()-1)break;
            if(i-j<0 || i+j >s.size()-1)break;
            if(s[i-j]!=s[i+j])break;
            j++;
            cnt+=2;
        }
        if(cnt>m)m=cnt;
    }
    for(int i=0;i<s.size();i++)
    {
        j=1;
        cnt=0;
        while(1)
        {
            if(j>s.size()-1)break;
            if(i-j+1<0 || i+j >s.size()-1)break;
            if(s[i-j+1]!=s[i+j])break;
            j++;
            cnt+=2;
        }
        if(cnt>m)m=cnt;
    }
    printf("%d",m);
    return 0;
}
*/
