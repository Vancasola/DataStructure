//
//  A1061.cpp
//  DataStructure
//
//  Created by 周政演 on 2020/5/4.
//  Copyright © 2020 none. All rights reserved.
//  3:04 3:31
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <unordered_map>
using namespace std;
int main()
{
    string s1,s2,s3,s4;
    string a[7]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
    cin>>s1>>s2>>s3>>s4;
    int i=0;
    for(i=0;i<s1.size()&&i<s2.size();i++){
        if(s1[i]==s2[i]&&(s1[i]>='A'&&s1[i]<='G')){
            cout<<a[s1[i]-'A']<<' ';
            i++;
            break;
        }
    }
    for(;i<s1.size()&&i<s2.size();i++){
        if(s1[i]==s2[i]&&((s1[i]>='A'&&s1[i]<='N')||(s1[i]>='0'&&s1[i]<='9'))){
            if(s1[i]>='A'&&s1[i]<='N')printf("%02d:",s1[i]-'A'+10);
            else printf("%02d:",s1[i]-'0');
            break;
        }
    }
    for(i=0;i<s3.size()&&i<s4.size();i++){
        if(s3[i]==s4[i]&&((s3[i]>='A'&&s4[i]<='Z')||(s3[i]>='a'&&s4[i]<='z'))){
            printf("%02d",i);
            break;
        }
    }
    return 0;
}
*/
