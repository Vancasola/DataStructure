//
//  A1073.cpp
//  DataStructure
//
//  Created by vancasola on 2020/1/6.
//  Copyright © 2020 none. All rights reserved.
//  8:42 9:13
/*
#include <stdio.h>
#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
using namespace std;
int main()
{
    int x,y,p;
    string s;
    cin>>s;
    p=s.find('E');
    y=atoi(s.substr(p+1,s.size()).c_str());
    y++;
    if(y>0)
    {
        if(s[0]=='-')cout<<s[0];
        int i;
        for( i=1;i<s.size();i++)
        {
            if(s[i]=='E')break;
            if(s[i]=='.')continue;
            if(!y)break;
            printf("%c",s[i]);
            y--;
        }
        if(i<s.find('E'))
        {
            printf(".");
            for( ;i<s.size();i++)
            {
                if(s[i]=='E')break;
                printf("%c",s[i]);
                y--;
            }
        }
        else{
            while(y)
            {
                printf("0");
                y--;
            }
        }
    }
    else if(y<0)
    {
        y*=-1;
        //y--;
        if(s[0]=='-')cout<<s[0];
        cout<<"0.";
        while(y)
        {
            printf("0");
            y--;
        }
        for(int i=1;i<s.size();i++)
        {
            if(s[i]=='.')continue;
            if(s[i]=='E')break;
            printf("%c",s[i]);
        }
    }
    else{
        if(s[0]=='-')cout<<s[0];
        for(int i=1;i<s.size();i++)
        {
            if(s[i]=='E')break;
            printf("%c",s[i]);
        }
    }
    return 0;
}
*/
