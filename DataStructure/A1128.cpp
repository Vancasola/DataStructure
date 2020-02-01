//
//  A1128.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/1.
//  Copyright © 2020 none. All rights reserved.
//  9:44 9:59
/*
#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<pair<int,int> > v;
    int n,m,x,y;
    cin>>n;
    for(int i=1;i<=n;i++){
        scanf("%d",&m);
        v.clear();
        for(int j=1;j<=m;j++)
        {
            scanf("%d",&y);
            v.push_back(pair<int, int>(y,j));
        }
        bool f=false;
        for(int j=0;j<v.size();j++){
            for(int k=j+1;k<v.size();k++)
            {
                if(v[j].first==v[k].first && v[j].second!=v[k].second)f=true;
                else if(v[j].first!=v[k].first && v[j].second==v[k].second)f=true;
                else if(v[j].first-v[k].first == v[j].second-v[k].second)f=true;
                else continue;
                if(f)break;
            }
            if(f)break;
        }
        if(f)printf("NO\n");
        else printf("YES\n");
    }
    return 0;
}
*/
