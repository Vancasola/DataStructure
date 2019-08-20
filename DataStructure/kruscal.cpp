//
//  kruscal.cpp
//  DataStructure
//
//  Created by vancasola on 2019/8/20.
//  Copyright © 2019 none. All rights reserved.
//
/*
#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;
const int MAXV = 200, MAXN = 1000;
int father[MAXV];
struct node
{
    int u,v;
    int cost;
}E[MAXN];
bool cmp(node& n1,node& n2)
{
    return n1.cost<n2.cost;
}
int findfather(int x)
{
    int a = x;
    while(x!=father[x])
    {
        x = father[x];
    }
    while(a!=father[a])
    {
        int z = a;
        a = father[a];
        father[z] = x;
    }
    return x;
}
int kruscal(int n, int m)
{
    int ans = 0, num_edges = 0;
    for(int i=0;i<n;i++)
    {
        father[i] = i;
    }
    sort(E,E+m,cmp);
    for(int j=0;j<m;j++)
    {
        int fau = findfather(E[j].u);
        int fav = findfather(E[j].v);
        if(fau!=fav)
        {
            father[fau] = fav;
            ans+= E[j].cost;
            num_edges++;
            if(num_edges==n-1) break;
        }
    }
    if(num_edges!=n-1)return -1;
    else return ans;
}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        cin>>E[i].u>>E[i].v>>E[i].cost;
    }
    int ans = kruscal(n, m);
    cout<<ans<<endl;
    return 0;
}
 */
/*
6 10
0 1 4
0 4 1
0 5 2
1 2 1
1 5 3
2 3 6
2 5 5
3 4 5
3 5 4
4 5 3
 */
