//
//  A1004.cpp
//  DataStructure
//
//  Created by Vancasola on 2019/12/24.
//  Copyright © 2019 none. All rights reserved.
//
/*
#include <stdio.h>
#include <iostream>
#include <queue>
#include <vector>
#include <map>
using namespace std;
int main()
{
    int N=0,M=0,id=0,K=0,t=0;
    cin>>N>>M;
    vector<int> v[100];
    queue<int> q;
    //input,construct
    for(int i=0;i<M;i++)
    {
        scanf("%d",&id);
        scanf("%d",&K);
        for(int j=0;j<K;j++)
        {
            scanf("%d",&t);
            v[id].push_back(t);
        }
    }
    q.push(1);
    int sum=0;
    queue<int> qt,ans;
    while(1){
        sum=0;
    while(!q.empty())
    {
        id = q.front();
        if(!v[id].size())sum++;
        for(int i=0;i<v[id].size();i++)
        {
            qt.push(v[id][i]);
        }
        q.pop();
    }
        ans.push(sum);
        q=qt;
        while(!qt.empty())qt.pop();
        if(q.empty())break;
    }
    //queue
    while(ans.size()!=1){printf("%d ",ans.front());ans.pop();}
    printf("%d",ans.front());
    return 0;
}
*/
