//
//  1053.cpp
//  DataStructure
//
//  Created by vancasola on 2019/8/7.
//  Copyright © 2019 none. All rights reserved.
//
/*
#include <stdio.h>
#include <vector>
#include <stack>
#include <queue>
#include <math.h>
#include <algorithm>
using namespace std;
struct node
{
    int data;
    vector<int> child;
}Node[110];
int S=0;
vector<int> ans[200];
int ind = 0;
void PrintQ(queue<int> &q)
{
    if(q.empty())return;
    while(!q.empty())
    {
        ans[ind].push_back(q.front());
        q.pop();
    }
    ind++;
}
void dfs(int sum,node& no,queue<int> q)
{
    q.push(no.data);
    //printf("%d %d %d\n",sum,no.data,no.child.size());
    if(sum>=S||no.child.size()==0)
    {
        if(sum==S&&no.child.size()==0)
        {
            PrintQ(q);
        }
        return;
    }
    for(vector<int>::iterator it=no.child.begin();it!=no.child.end();it++)
    {
        dfs(sum+Node[*it].data, Node[*it],q);
    }
}
bool cmp(vector<int> v1,vector<int> v2)
{
    int s = min(v1.size(),v2.size());
    for(int i=0;i<s;i++)
    {
        if(v1[i]==v2[i])continue;
        else return v1[i]>v2[i];
    }
    return v1.size()>v2.size();
}
int main()
{
    int N,M,K,id,data;
    int i,j;
    queue<int> q;
    scanf("%d%d%d",&N,&M,&S);
    for(i=0;i<N;i++)scanf("%d",&Node[i].data);
    for(i=0;i<M;i++)
    {
        scanf("%d %d",&id,&K);
        for(j=0;j<K;j++)
        {
            scanf("%d",&data);
            Node[id].child.push_back(data);
        }
    }

    dfs(Node[0].data,Node[0],q);
    if(ind!=0)
    {
        sort(ans,ans+ind,cmp);
        for(i=0;i<ind;i++)
        {
            for(j=0;j<ans[i].size()-1;j++)
            {
                printf("%d ",ans[i][j]);
            }
            printf("%d\n",ans[i][j]);
        }
    }
    return 0;
}

*/
/*
4 1 2
1 1 1 1
00 3 01 02 03
 */
/*sort(): the cores may dump if the cmp() return true when two numbers are equal
 */
//8:24 9:07 9:28
/*
#include<iostream>
#include<stdio.h>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;
int N,M,K;
vector<int> a[201];
vector<int> r[201];
queue<int> q;
int num = 0;
int weight[101];

bool cmp(vector<int> a,vector<int>b)
{
    int n=min(a.size(),b.size());
    for(int i=0;i<n;i++)
    {
        if(a[i]==b[i])continue;
        else return a[i]>b[i];
    }
    return a.size()>b.size();
}

void DFS(int u, int total, queue<int> q)
{
    total += weight[u];
    q.push(weight[u]);
    if(a[u].size()==0||total>=K)
    {
        if(total==K&&a[u].size()==0)
        {
            while(!q.empty())
            {
                r[num].push_back(q.front());
                //cout<<q.front()<<' ';
                q.pop();
            }
            num++;
            //cout<<endl;
        }
        return;
    }
    for(int j=0;j<a[u].size();j++)
    {
        DFS(a[u][j],total,q);
    }
}

int main()
{
    cin>>N>>M>>K;
    for(int i=0;i<N;i++)cin>>weight[i];
    for(int i=0;i<M;i++)
    {
        int cn=0,id,t;
        cin>>id>>cn;
        for(int i=0;i<cn;i++)
        {
            cin>>t;
            a[id].push_back(t);
        }
    }
    DFS(0,0,q);
    //cout<<num<<endl;
    sort(r,r+num,cmp);
    int j;
    for(int i=0;i<num;i++)
    {
        for( j=0;j<r[i].size()-1;j++)
        {
            cout<<r[i][j]<<' ';
        }
        cout<<r[i][j]<<endl;
    }
    
//    for(int i=0;i<num;i++)
//    {
//        for(int j=0;j<s[i].size();j++)
//        {
//            while(!s[i].empty())
//            {
//                cout<<s[i].top()<<' ';
//            }
//        }
//    }
    return 0;
}
 */
/*
 20 9 24
 10 2 4 3 5 10 2 18 9 7 2 2 1 3 12 1 8 6 2 2
 00 4 01 02 03 04
 02 1 05
 04 2 06 07
 03 3 11 12 13
 06 1 09
 07 2 08 10
 16 1 15
 13 3 14 16 17
 17 2 18 19
*/
