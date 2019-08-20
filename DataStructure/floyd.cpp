//
//  floyd.cpp
//  DataStructure
//
//  Created by vancasola on 2019/8/20.
//  Copyright © 2019 none. All rights reserved.
//
/*
#include <iostream>
#include <algorithm>
using namespace std;
const int MAXN = 510,INF = 0x3fffffff;
int d[MAXN][MAXN] = {0};
int n ,e,S,D;
void floyd()
{
    for(int k=0;k<n;k++)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(d[i][k]!=INF&&d[k][j]!=INF&&d[i][k]+d[k][j]<d[i][j])
                {
                    d[i][j]=d[i][k]+d[k][j];
                }
            }
        }
    }
    return;
}
int main()
{
    fill(d[0],d[0]+MAXN*MAXN,INF);
    cin>>n>>e;
    for(int i=0;i<n;i++)
    {
        d[i][i] = 0;
    }
    int a,b,w;
    for(int i=0;i<e;i++)
    {
        cin>>a>>b>>w;
        d[a][b] = d[b][a] = w;
    }
    floyd();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<d[i][j]<<' ';
        }
        cout<<endl;
    }
    return 0;
}
*/
/*
6 8
0 1 1
0 3 4
0 4 4
1 3 2
2 5 1
3 2 2
3 4 3
4 5 3
 */
/*
 for every node k, if i and k, k and j are reachable, and d[i][j]>d[i][k]+d[k][j] update d[i][j]=d[i][k]+d[k][j]
 */
