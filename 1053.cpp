//
//  1053.cpp
//  DataStructure
//
//  Created by vancasola on 2019/8/7.
//  Copyright © 2019 none. All rights reserved.
//

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
    /*for(i=0;i<N;i++)
    {
        for(vector<int>::iterator it=Node[i].child.begin();it!=Node[i].child.end();it++)
        {
            printf("%d ",*it);
        }
        printf("\n");
    }*/
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


/*
4 1 2
1 1 1 1
00 3 01 02 03
 */
/*sort(): the cores may dump if the cmp() return true when two numbers are equal
 */
