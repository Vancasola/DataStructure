
//
//  A1084.cpp
//  DataStructure
//
//  Created by vancasola on 2020/1/8.
//  Copyright © 2020 none. All rights reserved.
//
/*
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;
int main()
{
    string a,b;
    string ans="";
    set<char> s;
    cin>>a>>b;
    for(int i=0,j=0;i<a.size();i++)
    {
        if(b[j]==a[i])j++;
        else{
            if(a[i]>='a' && a[i]<='z')
                a[i]=a[i]-'a'+'A';
            if(s.find(a[i])==s.end())
            {
                s.insert(a[i]);
                ans+=a[i];
            }
        }
    }
    cout<<ans;
    return 0;
}
*/
