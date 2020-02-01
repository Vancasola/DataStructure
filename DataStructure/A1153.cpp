//
//  A1153.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/1.
//  Copyright © 2020 none. All rights reserved.
//  6:55 7:42  8:05 8:18
/*
#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
bool cmp(const pair<string, int>& a,const pair<string, int>& b){
    if(a.second!=b.second)return a.second>b.second;
    return a.first<b.first;
}
int main(){
    int n,k;
    string s1,s2;
    cin>>n>>k;
    vector<pair<string,int>> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i].first>>v[i].second;
    for(int i=1;i<=k;i++){
        cin>>s1>>s2;
        printf("Case %d: %s %s\n",i,s1.c_str(),s2.c_str());
        vector<pair<string, int>> t;
        int num=0,total=0;
        if(s1=="1"){
            for(int j=0;j<n;j++)
                if(v[j].first[0]==s2[0])
                    t.push_back(v[j]);
        }
        else if(s1=="2"){
            for(int j=0;j<n;j++){
                if(v[j].first.substr(1,3)==s2){
                    num++;
                    total+=v[j].second;
                }
            }
            if(num)printf("%d %d\n",num,total);
        }
        else if(s1=="3"){
            unordered_map<string, int> m;
            for(int j=0;j<n;j++){
                if(v[j].first.substr(4,6)==s2)
                    m[v[j].first.substr(1,3)]++;
            }
            for(auto it : m)t.push_back(pair<string,int>(it.first,it.second));
        }
        sort(t.begin(),t.end(),cmp);
        for(int j=0;j<t.size();j++)printf("%s %d\n",t[j].first.c_str(),t[j].second);
        if(((s1=="1"||s1=="3")&&t.size()==0)||(s1=="2"&&!num))printf("NA\n");
    }
    return 0;
}
 */
/*
#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
struct card
{
    string id;
    int score;
    card(string i,int s){id=i;score=s;}
};
struct site{
    string id;
    int num=0,total=0;
    site(string s){id=s;}
};
struct date{
    string id;
    unordered_map<string, int> site;
    vector<pair<string,int>> v;
    date(string s){id=s;}
};
bool cmp1(const card& a,const card& b){
    if(a.score!=b.score) return a.score>b.score;
    return a.id<b.id;
}
bool cmp2(const pair<string, int>& a,const pair<string,int>& b){
    if(a.second!=b.second)return a.second>b.second;
    return a.first<b.first;
}
int main(){
    int n,m;
    vector<card> data,a,b,c;
    vector<date> d;
    vector<site> s;
    unordered_map<string,int> mps,mpd;
    string s1,s2,s3,s4,str;
    int sc;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>str>>sc;
        s1=str.substr(0,1);
        s2=str.substr(1,3);
        s3=str.substr(4,6);
        s4=str.substr(10,3);
        //cout<<s1<<' '<<s2<<' '<<s3<<' '<<s4<<endl;
        if(s1=="A")
            a.push_back(card(str,sc));
        else if(s1=="B")
            b.push_back(card(str,sc));
        else if(s1=="T")
            c.push_back(card(str,sc));
        if(mps.find(s2)==mps.end()){
            s.push_back(site(s2));
            s[s.size()-1].num++;
            s[s.size()-1].total+=sc;
            mps[s2]=s.size()-1;
        }
        else{
            s[mps[s2]].num++;
            s[mps[s2]].total+=sc;
        }
        if(mpd.find(s3)==mpd.end()){
            d.push_back(date(s3));
            d[d.size()-1].site[s2]=1;
            mpd[s3]=s.size()-1;
        }
        else{
            if(d[mpd[s3]].site.find(s2)==d[mpd[s3]].site.end())
                d[mpd[s3]].site[s2]=1;
            else d[mpd[s3]].site[s2]++;
        }
    }
    for(int i=0;i<d.size();i++){
        for(unordered_map<string, int>::iterator it=d[i].site.begin();it!=d[i].site.end();it++){
            d[i].v.push_back(pair<string, int>(it->first,it->second));
        }
    }
    sort(a.begin(),a.end(),cmp1);
    sort(b.begin(),b.end(),cmp1);
    sort(c.begin(),c.end(),cmp1);
    for(int i=0;i<d.size();i++)
        sort(d[i].v.begin(),d[i].v.end(),cmp2);
    string sign;
    for(int i=1;i<=m;i++){
        cin>>sign>>str;
        if(sign=="1"){
            printf("Case %d: %s %s\n",i,sign.c_str(),str.c_str());
            if(str=="A"){
                for(int j=0;j<a.size();j++)
                    printf("%s %d\n",a[j].id.c_str(),a[j].score);
                if(!a.size())printf("NA\n");
            }
            else if(str=="B"){
                for(int j=0;j<b.size();j++)
                    printf("%s %d\n",b[j].id.c_str(),b[j].score);
                if(!b.size())printf("NA\n");
            }
            else if(str=="T"){
                for(int j=0;j<c.size();j++)
                    printf("%s %d\n",c[j].id.c_str(),c[j].score);
                if(!c.size())printf("NA\n");
            }
            else printf("NA\n");
        }
        else if(sign=="2"){
            printf("Case %d: %s %s\n",i,sign.c_str(),str.c_str());
            if(mps.find(str)==mps.end() || s[mps[str]].num==0){printf("NA\n");continue;}
            cout<<s[mps[str]].num<<' '<<s[mps[str]].total<<endl;
        }
        else if(sign=="3"){
            printf("Case %d: %s %s\n",i,sign.c_str(),str.c_str());
            if(!d[mpd[str]].v.size() || mpd.find(str)==mpd.end()){
                printf("NA\n");
                continue;
            }
            for(int j=0;j<d[mpd[str]].v.size();j++)
            {
                printf("%s %d\n",d[mpd[str]].v[j].first.c_str(),d[mpd[str]].v[j].second);
            }
        }
    }
    return 0;
}*/
