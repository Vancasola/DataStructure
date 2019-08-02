//
//  A1032.cpp
//  DataStructure
//
//  Created by vancasola on 2019/8/2.
//  Copyright © 2019 none. All rights reserved.
//

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
