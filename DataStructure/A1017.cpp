//
//  A1017.cpp
//  DataStructure
//
//  Created by vancasola on 2019/12/29.
//  Copyright © 2019 none. All rights reserved.
//  7:05
/*
#include <stdio.h>
#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
struct men
{
    int arrive,begin,t,finish;
}m[10005];
bool cmp(const men& a,const men& b)
{
    return a.arrive<b.arrive;
}
int main()
{
    int N,M;
    int board[105];
    queue<int> q[105];
    float sum=0;
    int hh,mm,ss,t,time,i,j;
    cin>>N>>M;
    for( i=0,j=0;i<N;i++)
    {
        scanf("%d:%d:%d %d",&hh,&mm,&ss,&t);
        time=hh*3600+mm*60+ss;
        if(time>17*3600)continue;
        m[j].arrive=time;
        if(t>60)t=60;
        m[j++].t=t*60;
    }
    N=j;
    for(int i=0;i<M;i++)
    {
        board[i]=8*3600;
    }
    sort(m,m+j,cmp);
    for(int i=0;i<N && i<M;i++)
    {
        m[i].begin=board[i];
        q[i].push(i);
    }
    i=M;
    while(i<N)
    {
        int early=3600*24,qid=101;
        for(int j=0;j<M;j++)
        {
            int index=q[j].front();
            if(early>board[j]+m[index].t)
            {
                early=board[j]+m[index].t;
                qid=j;
            }
        }
        m[q[qid].front()].begin=board[qid];
        board[qid]=early;
        m[q[qid].front()].finish=early;
//        printf("%02d:%02d:%02d ",m[q[qid].front()].begin/3600,m[q[qid].front()].begin/60-60*(m[q[qid].front()].begin/3600),m[q[qid].front()].begin%60);
//        cout<<qid<<' '<<m[q[qid].front()].t/60<<endl;
        q[qid].pop();
        q[qid].push(i);
        i++;
    }
    i=0;
    while(1)
    {
        int early=3600*24,qid=101;
        for(int j=0;j<M;j++)
        {
            if(q[j].empty())continue;
            int index=q[j].front();
            if(early>board[j]+m[index].t)
            {
                early=board[j]+m[index].t;
                qid=j;
                    }
                }
        if(qid==101)break;
            m[q[qid].front()].begin=board[qid];
            board[qid]=early;
            m[q[qid].front()].finish=early;
        //        printf("%02d:%02d:%02d ",m[q[qid].front()].begin/3600,m[q[qid].front()].begin/60-60*(m[q[qid].front()].begin/3600),m[q[qid].front()].begin%60);
        //        cout<<qid<<' '<<m[q[qid].front()].t/60<<endl;
                q[qid].pop();
    }
    int k=0;
    for(int i=0;i<N;i++)
    {
        if(m[i].begin>17*3600)continue;
        sum+=m[i].begin-m[i].arrive;
        k++;
//        printf("%02d:%02d:%02d-",m[i].arrive/3600,m[i].arrive/60-(m[i].arrive/3600)*60,m[i].arrive%60);
//        printf("%02d:%02d:%02d-",m[i].begin/3600,m[i].begin/60-(m[i].begin/3600)*60,m[i].begin%60);
//        printf("%02d:%02d:%02d-%d\n",m[i].finish/3600,m[i].finish/60-(m[i].finish/3600)*60,m[i].finish%60,m[i].t/60);

    }
    if(k==0){printf("0.0");return 0;}
    printf("%.1f",sum/(k*60.0));
    return 0;
}
*/
