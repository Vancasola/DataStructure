//
//  A1100.cpp
//  DataStructure
//
//  Created by vancasola on 2020/1/10.
//  Copyright © 2020 none. All rights reserved.
//  6:44 7:50
/*
#include <stdio.h>
#include <iostream>
#include <string>
#include <stack>
#include <cstdio>
#include <map>
using namespace std;
string a[13]={"tret","jan","feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
string b[13]={"","tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
map<string,int> mp1;
map<string,int> mp2;
void convert(string s)
{
    if(s[0]>='0' && s[0]<='9')
    {
        int t = atoi(s.c_str());
        if(!t){cout<<"tret"<<endl;return;}
        stack<int> st;
        while(t)
        {
            if(t%13==0){cout<<b[t/13]<<endl;return;}
            st.push(t%13);
            t/=13;
        }
        if(st.size()==1){cout<<a[st.top()]<<endl;return ;}
        cout<<b[st.top()];
        st.pop();
        if(!st.empty())cout<<" "<<a[st.top()];
        cout<<endl;
    }
    else
    {
        string t;
        stack<string> st;
        if(s=="tret"){cout<<0<<endl;return;}
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=' '){
                t+=s[i];
            }
            else{
                st.push(t);
                t.clear();
            }
        }
        if(t!="")st.push(t);
        if(st.size()==1){
            if(mp2.find(st.top())!=mp2.end())cout<< mp2[st.top()]<<endl;
            else cout<<(mp1[st.top()])*13<<endl;
            return;
        }
        int sum=(mp2[st.top()]);
        st.pop();
        sum += (mp1[st.top()])*13;
        cout<<sum<<endl;
    }
}
int main()
{
    int n;
    string s;
    cin>>n;
    getchar();
    for(int i=1;i<13;i++)
    {
        mp1[b[i]]=i;
        mp2[a[i]]=i;
    }
    for(int i=0;i<n;i++)
    {
        getline(cin,s);
        convert(s);
    }
    return 0;
}
*/
