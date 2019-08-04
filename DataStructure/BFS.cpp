//
//  BFS.cpp
//  DataStructure
//
//  Created by vancasola on 2019/8/4.
//  Copyright © 2019 none. All rights reserved.
//
/*
 7 6
 0 0 0 1 0 0
 1 1 0 0 0 0
 1 0 0 0 0 0
 0 1 0 0 0 1
 0 0 0 0 0 0
 0 0 0 1 0 0
 0 0 0 1 0 0
 6 7
 0 1 1 1 0 0 1
 0 0 1 0 0 0 0
 0 0 0 0 1 0 0
 0 0 0 1 1 1 0
 1 1 1 0 1 0 0
 1 1 1 1 0 0 0
*/

 //main:input,if the 1 is not be accessed block+1 clearfa around,ouput
/*
#include <stdio.h>
#include <queue>
using namespace std;
int n,m;
const int maxn = 1000;
int matrix[maxn][maxn];
bool inq[maxn][maxn] ={false};
int X[4]={0,0,-1,1};
int Y[4]={1,-1,0,0};
struct Node
{
    int x,y;
};
bool judge(int x,int y)
{
    if(x<0||y<0||x>=n||y>=m)return false;
    if(matrix[x][y]==0||inq[x][y]==true)return false;
    return true;
}
void dfs(int x,int y)
{
    inq[x][y]=true;
    if(judge(x, y))
    {
        return;
    }
    for(int i=0;i<4;i++)
    {
        if(judge(x+X[i], y+Y[i]))
        {
            dfs(x+X[i], y+Y[i]);
        }
    }
}
void bfs(int x,int y)
{
    Node n,top;
    queue<Node> q;
    n.x=x,n.y=y;
    q.push(n);
    int newx,newy;
    while(!q.empty())
    {
        top = q.front();
        q.pop();
        for(int i=0;i<4;i++)
        {
            newx = top.x+X[i];
            newy = top.y+Y[i];
            if(judge(newx, newy))
            {
                n.x=newx;
                n.y=newy;
                q.push(n);
                inq[newx][newy] = true;
            }
        }
    }
}
int main()
{
    int i,j;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    int ans = 0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(matrix[i][j]==1&&!inq[i][j])
            {
                ans++;
                //dfs(i,j);
                bfs(i,j);
                //inq[i][j]=true;
            }
        }
    }
    printf("%d\n",ans);
}
*/
/*
5 5
.....
.*.*.
.*S*.
.****
...T.
2 2 4 3
 */
#include <stdio.h>
#include <queue>
using namespace std;
int n,m;
int minv = 9999;
int Sx,Sy,Tx,Ty;
const int maxn=100;
int X[4] = {0,0,-1,1};
int Y[4] = {1,-1,0,0};
bool inq[maxn][maxn]={false};
char road[maxn][maxn];
bool judge(int x,int y)
{
    if(x<0||y<0||x>=n||y>=m)return false;
    if(road[x][y]=='*'||inq[x][y])return false;
    return true;
}
void dfs(int x,int y,int sum)
{
    if(x==Tx&&y==Ty)
    {
        if(sum<minv)minv=sum;
        return;
    }
    if(!judge(x, y))
    {
        return;
    }
    inq[x][y]=true;
    for(int i=0;i<4;i++)
    {
        if(judge(x+X[i], y+Y[i]))
        {
            dfs(x+X[i],y+Y[i],sum+1);
        }
    }
}
int main()
{
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)
    {
        getchar();
        for(int j=0;j<m;j++)
        {
            road[i][j] = getchar();
        }
    }
    scanf("%d%d%d%d",&Sx,&Sy,&Tx,&Ty);
    /*for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%c",road[i][j]);
        }
    }*/
    for(int i=0;i<n;i++)
    {
        dfs(Sx, Sy, 0);
    }
    printf("%d",minv);
    return 0;
}
