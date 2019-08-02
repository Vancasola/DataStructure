
//
//  A1052.cpp
//  DataStructure
//
//  Created by vancasola on 2019/8/2.
//  Copyright © 2019 none. All rights reserved.
//

#include <stdio.h>
#include <algorithm>
using namespace std;
struct node
{
    int next;
    int data;
    int addr;
    bool flag;
};
bool cmp(node&n1,node&n2)
{
    if(n1.flag&&n2.flag)
    {
        return n1.data<n2.data;
    }
    return n1.flag>n2.flag;
}
//there is invalid node in the link list
//the address of head node is -1 if there is 0 valid node
int main(void)
{
    struct node n[100010];
    for(int i=0;i<100010;i++)n[i].flag=false;
    int N=0,realN=0, h=0, data=0;
    int a=0,na=0,prea=0,i=0;
    scanf("%d %d",&N,&h);
    n[h].next=-1;
    for(int i=0;i<N;i++)
    {
        scanf("%d %d %d",&a,&data,&na);
        n[a].addr=a;
        n[a].data=data;
        n[a].next=na;
    }
    if(h==-1)
    {
        printf("0 -1");
        return 0;
    }
    for(i=0,a=h;a!=-1;i++,a=n[a].next)
    {
        n[a].flag=true;
        if(i>=N)break;
    }
    N=i;
    sort(n,n+100010,cmp);
    a=h;
    for(i=0;i<N;i++)
    {
        n[i].next=n[i+1].addr;
    }
    printf("%d %05d\n",N,n[0].addr);
    for(i=0;i<N-1;i++)
    {
        printf("%05d %d %05d\n",n[i].addr,n[i].data,n[i].next);
    }
    printf("%05d %d -1",n[i].addr,n[i].data);
    return 0;
}
