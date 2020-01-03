//
//  A1061.cpp
//  DataStructure
//
//  Created by vancasola on 2020/1/3.
//  Copyright © 2020 none. All rights reserved.
//  8:31 8:56
/*
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
string W[7]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
int main()
{
    char a,b;
    int c;
    string s1,s2,s3,s4;
    cin>>s1>>s2>>s3>>s4;
    int i=0;
    for( i=0;i<s1.size() && i<s2.size();i++)
        if(s1[i]==s2[i]&&s1[i]>='A'&&s1[i]<='G'){a=s1[i];break;}
    i++;
    for( ;i<s1.size() && i<s2.size();i++)
        if(s1[i]==s2[i])
            if((s1[i]>='A'&&s1[i]<='N')||(s1[i]>='0'&&s1[i]<='9')){b=s1[i];break;}
    for( i=0;i<s3.size() && i<s4.size();i++)
        if(s3[i]==s4[i] )
            if(( s3[i]>='a'&&s3[i]<='z') || (s3[i]>='A'&&s3[i]<='Z')){c=i;break;}
    cout<<W[a-'A']<<' ';
    if(b>='0'&&b<='9')printf("%02d:",b-'0');
    else printf("%02d:",b-'A'+10);
    printf("%02d",c);
    return 0;
}
*/
