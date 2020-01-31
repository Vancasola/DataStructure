//
//  A1060.cpp
//  DataStructure
//
//  Created by vancasola on 2020/1/3.
//  Copyright © 2020 none. All rights reserved.
//  11:57 12:21 1:17
/*
#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;
int n=3;
string convert(string s){
    int p=-1;
    string ans;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0')continue;
        else {
            s=s.substr(i,s.size());
            break;
        }
    }
    if(s[0]=='0'){
        int z=0;
        ans+="0.";
        for(int i=1;i<s.size();i++){
            if(s[i]=='0')z++;
            else break;
        }
        if(s.size()==1){
            for(int i=0;i<n;i++)ans+='0';
            ans+="*10^0";
            return ans;
        }
    }
    for(int i=0;i<s.size();i++)
        if(s[i]=='.'){p=i;break;}
    if(p==-1 ){
        ans+="0.";
        if(s.size()>=n){
            for(int i=0;i<s.size() && i<n ;i++)
                ans+=s[i];
        }
        else for(int i=0;i<n;i++){
            if(i<s.size())ans+=s[i];
            else ans+="0";
        }
        ans+="*10^";
        ans+=to_string(s.size());
        return ans;
    }
    else{
        if(s[0]!='.'){
            ans+="0.";
            for(int i=0;i<n && s.size();i++){
                if(s[i]!='.')ans+=s[i];
                else n+=1;
            }
            n-=1;
            if(ans.size()-1<n){
                for(int i=0;i<n-ans.size()+1;i++)
                    ans+="0";
            }
            ans+="*10^";
            ans+=to_string(p);
            return ans;
        }
        else{
            int z=0,p1=0;
            bool f=true;
            ans+="0.";
            for(int i=1;i<s.size();i++){
                if(s[i]=='0')z++;
                else{
                    f=false;
                    break;
                }
            }
            if(f){
                    for(int i=0;i<n;i++)ans+='0';
                    ans+="*10^0";
                    return ans;

            }
            for(int i=1+z;i<s.size() && p1<n;i++){
                ans+=s[i];
                p1++;
            }
            if(p1<n)for(int i=0;i<n-p1;i++){
                ans+='0';
            }
            ans+="*10^";
            if(z){
                ans+='-';
                ans+=to_string(z);
            }
            else ans+='0';
        }
    }
    return ans;
}
int main()
{
    string a,b;
    string s1,s2;
    cin>>n>>a>>b;
    s1=convert(a);
    s2=convert(b);
    if(s1==s2)cout<<"YES"<<' '<<s1;
    else cout<<"NO"<<' '<<s1<<' '<<s2;
    return 0;
}
*/
