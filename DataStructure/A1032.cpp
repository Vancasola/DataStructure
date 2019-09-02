//
//  A1032.cpp
//  DataStructure
//
//  Created by vancasola on 2019/8/2.
//  Copyright © 2019 none. All rights reserved.
//
/*
#include <stdio.h>
#include <math.h>
struct node
{
    char data;
    bool flag;
    int next;
};
//the number of sharing may no less one;
//Perhaps, some nodes are not in linklist;
//the address has 5 bit format
int main()
{
    node n[100010];
    int h1, h2, N=0;
    int addr, naddr;
    char ch;
    scanf("%d %d %d",&h1,&h2,&N);
    for(int i=0;i<100010;i++)n[i].flag=0;
    for(int i=0;i<N;i++)
    {
        scanf("%d %c %d",&addr,&ch,&naddr);
        n[addr].data = ch;
        n[addr].next = naddr;
    }
    for(addr=h1;addr!=-1;addr=n[addr].next)n[addr].flag = 1;
    for(addr=h2;addr!=-1;addr=n[addr].next)
    {
        if(n[addr].flag){
            printf("%05d",addr);
            return 0;
        }
    }
    printf("%d",-1);
    return 0;
}
*/
//10:40 10:50 11:02 11:05
/*
#include<iostream>
#include <string>
#include<stdio.h>
using namespace std;
int main()
{
    int h1,h2;
    int next[100010];
    char data[100010];
    bool vis[100010]={false};
    int n=0,addr=0,c=0,ne=0;
    int suffix=-1;
    cin>>h1>>h2>>n;
    for(int i=0;i<n;i++)
    {
        scanf("%d %c %d",&addr,&c,&ne);
        data[addr] = c;
        next[addr] = ne;
        //cout<<data[addr] <<' '<<next[addr]<<endl;
    }
    //cout<<"!"<<endl;
    for(int i=h1;i!=-1;i=next[i])vis[i] = true;
    for(int j=h2;j!=-1;j=next[j])
    {
        if(vis[j]==true)
        {
            printf("%05d",j);
            return 0;
            }
    }
    cout<<suffix;
    return 0;
}
*/
