//
//  A1013.cpp
//  DataStructure
//
//  Created by vancasola on 2019/12/26.
//  Copyright © 2019 none. All rights reserved.
// 9:43
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <set>
#include <queue>
using namespace std;
int repair(int N, vector<vector<int>> v,int a)
{
    
    set<int> s;
    set<int>::iterator it;
    int ans=0;
    for(int i=1;i<=N;i++)s.insert(i);
    it=s.find(a);
    if(it!=s.end())
        s.erase(it);
    for(int i=1;i<=N;i++)
    {
        v[i][a]=v[a][i]=-1;
    }
    while(!s.empty())
    {
        queue<int> q;
        it=s.begin();
        q.push(*it);
        ans++;
        while(!q.empty())
        {
            int t=q.front();
            //cout<<t<<endl;
            it=s.find(t);
            if(it!=s.end())
                s.erase(it);
            for(int i=1;i<=N;i++)
            {
                if(v[t][i]==1)
                {
                    q.push(i);
                    v[t][i]=-1;
                    v[i][t]=-1;
                }
            }
            q.pop();
        }
    }
    return ans-1;
}
int main()
{
    int N,M,K;
    cin>>N>>M>>K;
    vector<vector<int>> v(1001,vector<int>(1001,-1));
    int a,b;
    for(int i=0;i<M;i++)
    {
        cin>>a>>b;
        v[a][b]=v[b][a]=1;
    }
    for(int i=0;i<K;i++)
    {
        cin>>a;
        cout<<repair(N,v,a)<<endl;;
    }
    return 0;
}
*/
