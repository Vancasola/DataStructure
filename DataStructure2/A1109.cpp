//
//  A1109.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/25.
//  Copyright © 2020 none. All rights reserved.
//  10:43 11:04
/*
#include <stdio.h>
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
bool cmp(const pair<string,int>& a,const pair<string,int>& b){
    if(a.second!=b.second)return a.second>b.second;
    return a.first<b.first;
}
int main(){
    const int maxn=20010;
    int n,k,h;
    string g[maxn];
    cin>>n>>k;
    string id;
    vector<pair<string,int>> v;
    for(int i=0;i<n;i++)
    {
        cin>>id>>h;
        v.push_back(pair<string, int>(id,h));
    }
    sort(v.begin(),v.end(),cmp);
    int x=0;
    //cout<<(n-(k-1)*(n/k))/2<<endl;
    for(int i=0;i<k;i++){
        int mid=maxn/2+1;
        int q=0,p=0;
        g[mid]=v[x++].first;
        if(!i)
        {
            for(int j=0;j<(n-(k-1)*(n/k))-1;j++){
                if(j%2==0)g[mid+(--q)]=v[x++].first;
                else g[mid+(++p)]=v[x++].first;
            }
        }
        else{
            for(int j=0;j<(n/k)-1;j++){
                if(j%2==0)g[mid+(--q)]=v[x++].first;
                else g[mid+(++p)]=v[x++].first;
            }
        }
        for(int j=mid+q;j<=mid+p;j++){
            if(j!=mid+p)printf("%s ",g[j].c_str());
            else printf("%s\n",g[j].c_str());
        }
    }
    return 0;
}
*/
