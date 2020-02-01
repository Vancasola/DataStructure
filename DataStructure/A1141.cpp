//
//  A1141.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/1.
//  Copyright © 2020 none. All rights reserved.
//  3:32 4:07
/*
#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;
struct school{
    string name;
    int num,sa,sb,st,score;
    int r;
    school(string s,int n){name=s;num=n;sa=sb=st=score=0;}
};
bool cmp(const school&a,const school&b){
    return a.score>b.score;
}
bool cmp2(const school&a,const school&b){
    if(a.score!=b.score)return a.score>b.score;
    else if(a.num!=b.num)return a.num<b.num;
    return a.name<b.name;
}
void low(string& s){
    for(int i=0;i<s.size();i++){
        if(s[i]>='A' && s[i]<='Z')s[i]=s[i]-('A'-'a');
    }
}
int main(){
    string s1,s2;
    int score;
    map<string,int> mp;
    vector<school> v;
    int n,p=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s1>>score>>s2;
        low(s2);
        if(mp.find(s2)==mp.end()){
            v.push_back( school(s2,1));
            mp[s2]=v.size()-1;
            if(s1[0]=='B')v[v.size()-1].sb+=score;
            else if(s1[0]=='T')v[v.size()-1].st+=score;
            else v[v.size()-1].sa+=score;
        }
        else {
            v[mp[s2]].num++;
            if(s1[0]=='B')v[mp[s2]].sb+=score;
            else if(s1[0]=='T')v[mp[s2]].st+=score;
            else v[mp[s2]].sa+=score;
        }
    }
    for(int i=0;i<v.size();i++)
        v[i].score=v[i].sa+v[i].sb/1.5+v[i].st*1.5;
    sort(v.begin(), v.end(), cmp);
    int r=1;
    int last=v[0].score;
    for(int i=0;i<v.size();i++){
        if(v[i].score!=last)
            r=i+1;
        v[i].r=r;
        last=v[i].score;
    }
    sort(v.begin(), v.end(), cmp2);
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
        printf("%d %s %d %d\n",v[i].r,v[i].name.c_str(),v[i].score,v[i].num);
    return 0;
}
*/
