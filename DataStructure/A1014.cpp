//
//  A1014.cpp
//  DataStructure
//
//  Created by vancasola on 2019/12/28.
//  Copyright © 2019 none. All rights reserved.
// 7:09 7:51
/*
#include <stdio.h>
#include <iostream>
#include <queue>
using namespace std;
struct men
{
    int begin,time,end;
}m[1000];
int main()
{
    int N,M,K,Q,i,mt=0;
    int ts[20]={0};
    queue<int> q[20];
    priority_queue <int> pq;
    cin>>N>>M>>K>>Q;
    for( i=0;i<K;i++)scanf("%d",&m[i].time);
    for( i=0;i<K && i<M*N;i++)
    {
        for(int j=0;j<N;j++)
        {
            if(q[j].size()<M)
            {
                q[j].push(i);
                break;
            }
        }
    }
    for(int j=0;j<N;j++)
    {
        if(!q[j].empty())
        {
            m[q[j].front()].begin=0;
            pq.push(j);
        }
    }//disorder?
    
    for(i-=1;i<K;)
    {
        if(mt>420){m[i].end=-1;}
        
        int j=pq.top(),t=m[q[j].front()].time;
        
        if(!q[j].empty())m[q[j].front()].end=m[q[j].front()].begin+t;
        if(m[q[j].front()].end>mt)mt=m[q[j].front()].end;
        
        q[j].pop();
        pq.pop();
        
        i++;
        if(i<K)
        q[j].push(i);
        ts[j]+=t;
        if(!q[j].empty())
        {
            m[q[j].front()].begin=ts[j];
            pq.push(j);
        }
    }
    
    int total=0;
    for(int j=0;j<N;j++)total+=q[j].size();
    cout<<endl<<total<<endl;
    while(total--)
    {
        if(mt>420){m[i].end=-1;}
        int j=pq.top(),t=m[q[j].front()].time;
        
        if(!q[j].empty())m[q[j].front()].end=m[q[j].front()].begin+t;
        if(m[q[j].front()].end>mt)mt=m[q[j].front()].end;
        
        q[j].pop();
        pq.pop();
        
        ts[j]+=t;
        if(!q[j].empty())
        {
            m[q[j].front()].begin=ts[j];
            pq.push(q[j].front());
        }
    }
    for(int j=0;j<K;j++)cout<<m[j].end<<' ';
    int t;
    for(int j=0;j<Q;j++)
    {
        cin>>t;
        if(m[t-1].end==-1)printf("Sorry\n");
        else printf("%0d:%0d\n",m[t-1].begin/60+8,m[t-1].end%60);
    }
    return 0;
}
*/
