
//
//  A1052.cpp
//  DataStructure
//
//  Created by vancasola on 2019/8/2.
//  Copyright © 2019 none. All rights reserved.
//
/*
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
*/
//3:38 //4:05
/*
#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
const int MAXN = 100010;
struct node
{
    int x;
    int addr;
    int next;
    bool f;
};
bool cmp(node &a,node& b)
{
    if(a.f&&b.f)return a.x<b.x;
    return a.f>b.f;
}
int main()
{
    int n,h,ht;
    node a[MAXN];
    int addr,key,next;
    cin>>n>>h;
    if(h==-1)
    {
        printf("0 -1");
        return 0;
    }
    for(int i=0;i<MAXN;i++)a[i].f=false;
    for(int i=0;i<n;i++)
    {
        cin>>addr>>key>>next;
        a[addr].x = key;
        a[addr].addr = addr;
        a[addr].next = next;
        //cout<<a[addr].addr<<' '<<a[addr].x<<' '<<a[addr].next<<' '<<a[addr].f<<endl;
    }
    int i;
    for( i=0,ht = h;ht!=-1;i++,ht = a[ht].next)
    {
        a[ht].f = true;
        if(i>=n)break;
    }
    int N=i;
    sort(a,a+MAXN,cmp);
    for(i=0;i<N;i++)
    {
        a[i].next=a[i+1].addr;
    }
    printf("%d %05d\n",N,a[0].addr);
    for(i=0;i<N-1;i++)
    {
        printf("%05d %d %05d\n",a[i].addr,a[i].x,a[i].next);
    }
    printf("%05d %d -1",a[i].addr,a[i].x);
    return 0;
}*/
//5:20 5:31 5:42
/*
#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
const int MAXN = 100010;
struct node
{
    int x;
    int addr;
    int next;
    bool f;
    
};
bool cmp(node& a,node& b)
{
    if(a.f&&b.f)return a.x<b.x;
    return a.f>b.f;
}
int main()
{
    int n,h,ht,addr,x,next;
    node a[MAXN] ;
    cin>>n>>h;
    if(h==-1)
    {
        printf("0 -1");
        return 0;
    }
    for(int i=0;i<MAXN;i++)
    {
        a[i].f = false;
    }
    for(int i=0;i<n;i++)
    {
        cin>>addr>>x>>next;
        a[addr].addr = addr;
        a[addr].x = x;
        a[addr].next = next;
    }
    int i=0,N;
    for(i=0,ht=h;ht!=-1;i++,ht=a[ht].next)
    {
        a[ht].f = true;
        if(i>=n)break;
        //printf("%05d %d %05d\n",a[ht].addr,a[ht].x,a[ht].next);
    }
    N=i;
    sort(a,a+MAXN,cmp);
    for(i=0;i<N;i++)
    {
        a[i].next=a[i+1].addr;
    }
    printf("%d %05d\n",N,a[0].addr);
    for(i=0;i<N-1;i++)
    {
        printf("%05d %d %05d\n",a[i].addr,a[i].x,a[i].next);
    }
    printf("%05d %d -1",a[i].addr,a[i].x);
    return 0;
}
*/
