//
//  A1022.cpp
//  DataStructure
//
//  Created by vancasola on 2019/12/29.
//  Copyright © 2019 none. All rights reserved.
//  9:45 10:21
/*
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;
struct record
{
    string id;
    string title;
    string author;
    vector<string> keyword;
    string publish;
    string year;
};
int main()
{
    vector<record> v;
    int n;
    string id;
    string title;
    string author;
    string keyword;
    string publish;
    string year;
    cin>>n;
    getchar();
    for(int i=0;i<n;i++)
    {
        getline(cin,id);
        getline(cin,title);
        getline(cin,author);
        getline(cin,keyword);
        getline(cin,publish);
        getline(cin,year);
        record r;
        r.id=id;
        r.title=title;
        r.author=author;
        r.publish=publish;
        r.year=year;
        string key;
        for(int i=0;i<keyword.size();i++)
        {
            if(keyword[i]!=' ')key+=keyword[i];
            else {
                    r.keyword.push_back(key);
                    key.clear();
                    }
            }
        r.keyword.push_back(key);
        key.clear();
        v.push_back(r);
    }
    int m;
    int f;
    string q;
    vector<string> ans;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        ans.clear();
        scanf("%d: ",&f);
        getline(cin,q);
        cout<<f<<": "<<q<<endl;
        if(f==1)
        {
            for(int i=0;i<v.size();i++)
            {
                if(q==v[i].title)
                {
                    ans.push_back(v[i].id);
                }
            }
            sort(ans.begin(),ans.end());
            for(int i=0;i<ans.size();i++)
            {
                cout<<ans[i]<<endl;
            }
            if(ans.size()==0)cout<<"Not Found"<<endl;
        }
        else if(f==2)
        {
            for(int i=0;i<v.size();i++)
            {
                if(q==v[i].author)
                {
                    ans.push_back(v[i].id);
                }
            }
            sort(ans.begin(),ans.end());
            for(int i=0;i<ans.size();i++)
            {
                cout<<ans[i]<<endl;
            }
            if(ans.size()==0)cout<<"Not Found"<<endl;
        }
        else if(f==3)
        {
            for(int i=0;i<v.size();i++)
            {
                for(int j=0;j<v[i].keyword.size();j++)
                {
                    //cout<<v[i].keyword[j]<<' ';
                    if(q==v[i].keyword[j])ans.push_back(v[i].id);
                }
                //cout<<endl;
            }
            sort(ans.begin(),ans.end());
            for(int i=0;i<ans.size();i++)
            {
                cout<<ans[i]<<endl;
            }
            if(ans.size()==0)cout<<"Not Found"<<endl;
        }
        else if(f==4)
        {
            for(int i=0;i<v.size();i++)
            {
                if(q==v[i].publish)
                {
                    ans.push_back(v[i].id);
                }
            }
            sort(ans.begin(),ans.end());
            for(int i=0;i<ans.size();i++)
            {
                cout<<ans[i]<<endl;
            }
            if(ans.size()==0)cout<<"Not Found"<<endl;
        }
        else if(f==5)
        {
            for(int i=0;i<v.size();i++)
            {
                if(q==v[i].year)
                {
                    ans.push_back(v[i].id);
                }
            }
            sort(ans.begin(),ans.end());
            for(int i=0;i<ans.size();i++)
            {
                cout<<ans[i]<<endl;
            }
            if(ans.size()==0)cout<<"Not Found"<<endl;
        }
    }
    return 0;
}
*/
