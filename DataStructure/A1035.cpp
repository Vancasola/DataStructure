//
//  A1035.cpp
//  DataStructure
//
//  Created by vancasola on 2019/12/31.
//  Copyright © 2019 none. All rights reserved.
//  4:21 4:39 4:46
/*
#include <cstdio>
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;
struct account
{
    string id;
    string pwd;
};
bool check(string & s)
{
    bool f=false;
    for(int i=0;i<s.size();i++)
    {
        char c=s[i];
        if(c=='1'){s[i]='@';f=true;}
        else if(c=='0'){s[i]='%';f=true;}
        else if(c=='l'){s[i]='L';f=true;}
        else if(c=='O'){s[i]='o';f=true;}
    }
    return f;
}
int main()
{
    int n,m;
    vector<account> v;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        account a;
        cin>>a.id>>a.pwd;
        if(check(a.pwd))
        v.push_back(a);
    }
    if(v.size())
    {
        cout<<v.size()<<endl;
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i].id<<' '<<v[i].pwd<<endl;
        }
    }
    else{
        if(n==1)printf("There is %d account and no account is modified\n",n);
        else printf("There are %d accounts and no account is modified\n",n);
    }
    return 0;
}
*/
